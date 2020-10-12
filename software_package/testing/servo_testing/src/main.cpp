#include <Arduino.h>
#include <Servo.h>

Servo servoGreen;  // create servo object to control a servo
Servo servoPink;

int potpin = 0;
int val;

void setup() {
    Serial.begin(115200);
    // will pause Zero, Leonardo, etc until serial console opens
    while (!Serial) delay(10);

    servoGreen.attach(A3, 1000, 2500);
    servoPink.attach(A2, 1000, 2500);

    servoPink.write(48);
    servoGreen.write(48);
}

void loop() {

    Serial.printf("Input:");
    while (Serial.available() == 0) {
    };
    int val = Serial.parseInt();  // read int or parseFloat for ..float...
    Serial.printf("\nSetting Value: %d\n", val, val);
    
    // Green Limits: 6 -> 90
    // Pink Limits: 35 -> 85

    if (0 > val || val > 100) return;

    long g_val = map(val, 0, 100, 6, 90);
    long p_val = map(val, 0, 100, 35, 85);

    Serial.printf("val g: %d\n", g_val);
    Serial.printf("val p: %d\n", p_val);

    servoGreen.write(g_val);
    servoPink.write(p_val);
}