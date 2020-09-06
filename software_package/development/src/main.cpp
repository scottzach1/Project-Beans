#ifndef UNIT_TEST

#include <Arduino.h>
#include <STM32SD.h>
#include <Wire.h>

#include "imu.h"
#include "sd.h"
#include "barometer.h"

Sd sd;
Imu imu;
Barometer baro;

void setup_sd(void);
void setup_mpu(void);
void setup_barometer(void);

void setup(void) {
    Serial.begin(115200);

    while (!Serial)
        delay(10);  // will pause Zero, Leonardo, etc until serial console opens

    sd.init("file.txt");
    imu.init();
    baro.init();
}

int counter = 0;

void loop() {
    Serial.printf("Beginning loop %d\n", counter);

    sd.write("This is a log message " + std::to_string(counter) + "\n");

    if (++counter % 10) sd.flush();

    imu.update();
    imu.read_accl();
    imu.read_gyro();

    float bar = baro.read_pressure_bars();
    float alt = baro.read_altitude();
    Serial.printf("The pressure is %f bar and the alt is %fm.", bar, alt);
}

int double_value(int input) { return input * 2; }

#endif  // UNIT_TEST
