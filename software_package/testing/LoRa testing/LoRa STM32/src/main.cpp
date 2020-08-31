/**
 * Basic sketch for transmit/receive over LoRa
 * Handles a minimal amount of error. In production code, it will be important to handle the interaction between transmit/receive interrupts. Both of these will need to be interrupt driven, as we do not want to hang our CPU
 */

#include <Arduino.h>
#include "RadioLib.h"

//#define DEBUG
#define PACKET_SIZE 	64
#define RFM98_SYNC_WORD 0x32

// Declare a buffer for storing serial data before it is packaged and sent over LoRa
char serial_buf[PACKET_SIZE] = {0};

/*  Initialise the radio module
 *  CS pin: D8
 *  DIO0 (Interrupt): D1
 *  RESET pin: D2
 */

#define CS D5
#define DIO0 D9
#define RESET D6

/**
 * Interrupt Service Routine
 * This method is called whenever DIO0 (on the RFM98 module) outputs a pulse.
 * With this, we can only process received data when necessary, and have the processor free the rest of the time. This is important, as the other method is blocking, and will freeze the CPU until a transmission is received.
 * Additionally, this flag will be utilised to ensure transmissions successfully go through, without hanging the CPU
 */

// Allow for this interrupt to be disabled. This is probably better done at a lower level, but that can be a problem for later.
volatile bool enableISR = true;

// flag to indicate that a packet was sent
volatile bool transmitCompleteFlag = false;

// flag to indicate if the module is currently sending
volatile bool transmit = false;

// Store the transmission error state. This is global such that it can be utilised when the ISR fires upon transmission completion.
int txState = 0;

// Create a RFM98 radio object
RFM98 radio = new Module(CS, DIO0, RESET);


// Define the ISR
void radioISR(void){
  // check if the interrupt is enabled
  if(!enableISR){
    return;
  }
  // we sent a packet, set the flag
  transmitCompleteFlag = true;
}

// Transmit a const char*
void transmitPacket(const char* message){
	txState = radio.startTransmit(message);
}

// Transmit a String
void transmitPacket(String message){
	txState = radio.startTransmit(message);
}

// Transmit a char array
void transmitPacket(uint8_t* message, uint8_t len){
	txState = radio.startTransmit(message, len);
}

void setup(){
	Serial.begin(9600);

	// initialize RFM98 with default settings
	Serial.print(F("\nRFM98 Initializing ... "));

	int state = radio.begin(434.0, 500.0, 9, 7, RFM98_SYNC_WORD, 17, 8, 0);

	if(state == ERR_NONE){
    	Serial.println(F("success!"));
  	} 
	else{
		Serial.print(F("failed, code "));
		Serial.println(state);
		while (true);
  	}

	// set the function that will be called when packet transmission is finished.
	radio.setDio0Action(radioISR);
} 



void loop(){

	if(!transmit){
		transmitPacket("LoRa Test Message");
		transmit = true;
		Serial.println(F("transmission started!"));
	}

	// check if a transmission has finished
	if(transmitCompleteFlag){
		// disable the interrupt service routine while
		// processing the data
		enableISR = false;

		// reset the transmission flag
    	transmitCompleteFlag = false;

		if (txState == ERR_NONE){
			// packet was successfully sent
			Serial.println(F("transmission finished!"));
		} 
		else{
			Serial.print(F("failed, code "));
			Serial.println(txState);
		}

		enableISR = true;
		transmit = false;
	}

	// This is the minimum delay or there will be a CRC error on the recieving end
	delay(50);
}