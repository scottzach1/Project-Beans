#include <Arduino.h>

void setup() {
	pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
	digitalWrite(LED_BUILTIN, 1);
	delay(1000);
	digitalWrite(LED_BUILTIN, 0);
	delay(1000);
}