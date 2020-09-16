/**
 * Basic sketch for transmit/receive over LoRa
 * Handles a minimal amount of error. In production code, it will be important
 * to handle the interaction between transmit/receive interrupts. Both of these
 * will need to be interrupt driven, as we do not want to hang our CPU
 */

#include <Arduino.h>

#include "RadioLib.h"

#define DEBUG
#define PACKET_SIZE 64
#define RFM98_SYNC_WORD 0x32

// Declare a buffer for storing serial data before it is packaged and sent over
// LoRa
char serial_buf[PACKET_SIZE] = {0};

/*  Initialise the radio module
 *  CS pin: D8
 *  DIO0 (Interrupt): D1
 *  RESET pin: D2
 */

#define CS D8
#define DIO0 D1
#define RESET D2

/**
 * Interrupt Service Routine
 * This method is called whenever DIO0 (on the RFM98 module) outputs a pulse.
 * With this, we can only process received data when necessary, and have the
 * processor free the rest of the time. This is important, as the other method
 * is blocking, and will freeze the CPU until a transmission is received.
 * Additionally, this flag will be utilised to ensure transmissions successfully
 * go through, without hanging the CPU
 */

// Set this flag true in the ISR. Whenever this flag is true in the main loop,
// there is data available on the radio module.
volatile bool packet_received = false;

// Allow for this interrupt to be disabled. This is probably better done at a
// lower level, but that can be a problem for later.
volatile bool enableISR = true;

// Create a RFM98 radio object
RFM98 radio = new Module(CS, DIO0, RESET);

// Define the interrupt service routine, this requires the ICACHE_RAM_ATTR
// linker attribute so that it will be placed in ram
ICACHE_RAM_ATTR void ISR() {
    if (!enableISR) return;
    // Packet has been received, set the flag
    packet_received = true;
}

// Receive data, and spit it to the serial port
void read_packet() {
    // disable the interrupt service routine while
    // processing the data
    enableISR = false;

    // reset flag
    packet_received = false;

    // you can read received data as an Arduino String
    // String str;
    // int state = radio.readData(str);

    // you can also read received data as byte array
    uint8_t message[128];
    int state = radio.readData(message, 17);

#ifdef DEBUG
    if (state == ERR_NONE) {
        // packet was successfully received
        Serial.println(F("[RF98] Received packet!"));
        // print data of the packet
        Serial.print(F("[RF98] Data:\t\t"));

        for (uint8_t i = 0; i < radio.getPacketLength(); i++) {
            Serial.printf("%c", message[i]);
        }
        Serial.print("\n");

        // print RSSI (Received Signal Strength Indicator)
        // of the last received packet
        Serial.print(F("[RF98] RSSI:\t\t"));
        Serial.print(radio.getRSSI());
        Serial.println(F(" dBm"));

    } else if (state == ERR_CRC_MISMATCH) {
        // packet was received, but is malformed
        Serial.println(F("CRC error!"));
        Serial.print(F("[RF98] Data:\t\t"));

    } else {
        // some other error occurred
        Serial.print(F("failed, code "));
        Serial.println(state);
    }
#endif

    // start listening for packets again
    Serial.print(F("[RF98] Starting to listen ... "));

    state = radio.startReceive();
    if (state == ERR_NONE) {
        Serial.println(F("success!"));
    } else {
        Serial.print(F("failed, code "));
        Serial.println(state);
        while (true) continue;
    }
    // we're ready to receive more packets,
    // enable interrupt service routine
    enableISR = true;
}

void setup() {
    Serial.begin(9600);
    while (!Serial) continue;
    Serial.print("\n");

    // Begin the radio, look for a successful connection
    int state = radio.begin(434.0, 500.0, 9, 7, RFM98_SYNC_WORD, 17, 8, 0);
    radio.variablePacketLengthMode();

    if (state == ERR_NONE) {
        Serial.println(F("success!"));
    } else {
        Serial.print(F("failed, code "));
        Serial.println(state);
        while (true) continue;
    }

    // set the function that will be called
    // when new packet is received
    radio.setDio0Action(ISR);

    // start listening for packets
    Serial.print(F("[RF98] Starting to listen ... "));

    state = radio.startReceive();
    if (state == ERR_NONE) {
        Serial.println(F("success!"));
    } else {
        Serial.print(F("failed, code "));
        Serial.println(state);
        while (true) continue;
    }
}

void loop() {
    // check if the flag is set
    if (packet_received) {
        read_packet();
    }
}
