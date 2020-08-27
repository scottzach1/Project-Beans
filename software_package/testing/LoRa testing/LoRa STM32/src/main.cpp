#include <Arduino.h>
#include "RadioLib.h"

void setup() {
  	// put your setup code here, to run once:
	pinMode(13, OUTPUT);
}

void loop() {
  	// put your main code here, to run repeatedly:
	digitalWrite(13, 1);
	delay(1000);
	digitalWrite(13,0);
	delay(1000);
}