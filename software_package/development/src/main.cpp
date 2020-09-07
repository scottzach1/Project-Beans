#ifndef UNIT_TEST

// #include <Arduino.h>
// #include <STM32SD.h>
// #include <Wire.h>
#include <STM32SD.h>

#include "barometer.h"
#include "imu.h"
#include "sd.h"

// If SD card slot has no detect pin then define it as SD_DETECT_NONE
// to ignore it. One other option is to call 'SD.begin()' without parameter.
#ifndef SD_DETECT_PIN
#define SD_DETECT_PIN SD_DETECT_NONE
#endif

Sd sd;
Imu imu;
Barometer baro;

void read_file(std::string file_name);

void setup(void) {
    Serial.begin(115200);

    // will pause Zero, Leonardo, etc until serial console opens
    while (!Serial) delay(10);

    // sd.init("file.txt");
    imu.init();
    baro.init();
}

int counter = 0;

void loop() {
    Serial.printf("Beginning loop %d\n", ++counter);

    // IMU READINGS
    imu.update();

    sensors_vec_t accl = imu.read_accl();
    Serial.printf("- Acceleration: {%s, %s, %s} m/s^2.\n",
                  String(accl.x).c_str(), String(accl.y).c_str(),
                  String(accl.z).c_str());

    sensors_vec_t gyro = imu.read_gyro();
    Serial.printf("- Gyro: {%s, %s, %s} rad/s.\n", String(gyro.x).c_str(),
                  String(gyro.y).c_str(), String(gyro.z).c_str());

    // BAROMETER READINGS
    float pasc = baro.read_pressure_pascals();
    Serial.printf("- Pressure: %s pascals.\n", String(pasc).c_str());

    float alt = baro.read_altitude();
    Serial.printf("- Altitude: %s meters.\n", String(alt).c_str());

    // SD TESTINGS
    // sd.write("Entry " + std::to_string(counter) + "\n");
    // if (counter % 2) sd.flush();
    // if (counter % 10) read_file("file.txt");
}

void read_file(std::string file_name) {
    // re-open the file for reading:
    File file = SD.open(file_name.c_str());
    if (file) {
        Serial.printf("%s contents:\n", file_name.c_str());

        // read from the file until there's nothing else in it:
        while (file.available()) {
            Serial.write(file.read());
        }
        // close the file:
        file.close();
    } else {
        // if the file didn't open, print an error:
        Serial.printf("error opening %s\n", file_name.c_str());
    }
}

int double_value(int input) { return input * 2; }

#endif  // UNIT_TEST
