/**
 * Basic sketch for transmit/receive over LoRa
 * Handles a minimal amount of error. In production code, it will be important to handle the interaction between transmit/receive interrupts. Both of these will need to be interrupt driven, as we do not want to hang our CPU
 */

#include <Arduino.h>
#include "RadioLib.h"

//#define DEBUG
#define PACKET_SIZE 64

// Declare a buffer for storing serial data before it is packaged and sent over LoRa
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
 * With this, we can only process received data when necessary, and have the processor free the rest of the time. This is important, as the other method is blocking, and will freeze the CPU until a transmission is received.
 * Additionally, this flag will be utilised to ensure transmissions successfully go through, without hanging the CPU
 */

// Set this flag true in the ISR. Whenever this flag is true in the main loop, there is data available on the radio module.
volatile bool packet_recieved = false;

// Allow for this interrupt to be disabled. This is probably better done at a lower level, but that can be a problem for later.
volatile bool enableISR = true;

// Flag for waiting for transmission to finish
bool waiting = false;

// Store the transmission error state. This is global such that it can be utilised when the ISR fires upon transmission completion.
int txState = 0;

// Create a RFM98 radio object
RFM98 radio = new Module(CS, DIO0, RESET);

// Define the interrupy service rutine, this requires the ICACHE_RAM_ATTR linker attribute so that it will be placed in ram
ICACHE_RAM_ATTR void ISR(){
  if(!enableISR)return;
  // Packet has been recieved, set the flag
  packet_recieved = true;
}

// Receive data, and spit it to the serial port
void read_packet(){
	// disable the interrupt service routine while
	// processing the data
	enableISR = false;

	// reset flag
	packet_recieved = false;

	// you can read received data as an Arduino String
	String str;
	int state = radio.readData(str);

	// you can also read received data as byte array
	/*
	byte byteArr[8];
	int state = radio.readData(byteArr, 8);
	*/
	#ifdef DEBUG
		if (state == ERR_NONE) {
		// packet was successfully received
		Serial.println(F("[RF69] Received packet!"));

		// print data of the packet
		Serial.print(F("[RF69] Data:\t\t"));
		Serial.println(str);

		// print RSSI (Received Signal Strength Indicator)
		// of the last received packet
		Serial.print(F("[RF69] RSSI:\t\t"));
		Serial.print(radio.getRSSI());
		Serial.println(F(" dBm"));

		} else if (state == ERR_CRC_MISMATCH) {
		// packet was received, but is malformed
		Serial.println(F("CRC error!"));

		} else {
		// some other error occurred
		Serial.print(F("failed, code "));
		Serial.println(state);
		}
	#endif

	// start listening for packets
	Serial.print(F("[RF98] Starting to listen ... "));
	
	state = radio.startReceive();
	if (state == ERR_NONE) {
		Serial.println(F("success!"));
	} 
	else {
		Serial.print(F("failed, code "));
		Serial.println(state);
		while (true);
	}
	// we're ready to receive more packets,
	// enable interrupt service routine
	enableISR = true;
}


void setup() {
	Serial.begin(115200);
	while(!Serial);
	Serial.print("\n");

	// Begin the radio, look for a suscesful connection
	int state = radio.begin();
	if(state == ERR_NONE){
    	Serial.println(F("success!"));
  	} 
	else{
		Serial.print(F("failed, code "));
		Serial.println(state);
		while (true);
  	}

	// set the function that will be called
	// when new packet is received
	radio.setDio0Action(ISR);
}

void loop() {

	// check if the flag is set
	if(packet_recieved) {
		read_packet();
	}
}