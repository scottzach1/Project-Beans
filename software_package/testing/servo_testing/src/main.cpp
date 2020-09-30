#include <Arduino.h>
#include <Servo.h>

Servo servoGreen;  // create servo object to control a servo
Servo servoPink;

int potpin = 0;
int val;

void setup() {
    servoGreen.attach(A3, 1000, 2500);
    servoPink.attach(A2, 1000, 2500);
}

void loop() {
    // Library Example Code
    // val = analogRead(potpin);
    // val = 10;
    // val = map(val, 0, 1023, 0, 180);  // 30
    // myservo.write(val);

    // Working
    servoGreen.write(90);
    servoPink.write(90);
    delay(15);
}