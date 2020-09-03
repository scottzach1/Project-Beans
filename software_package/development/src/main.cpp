#ifndef UNIT_TEST

#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Arduino.h>
#include <STM32SD.h>
#include <Wire.h>

#include "sd.h"

// If SD card slot has no detect pin then define it as SD_DETECT_NONE
// to ignore it. One other option is to call 'SD.begin()' without parameter.
#ifndef SD_DETECT_PIN
#define SD_DETECT_PIN SD_DETECT_NONE
#endif

Adafruit_MPU6050 mpu;
Sd sd;

void setup_sd(void);
void setup_mpu(void);

void setup(void) {
    Serial.begin(115200);

    while (!Serial)
        delay(10);  // will pause Zero, Leonardo, etc until serial console opens

    sd.init("file.txt");

}

// void setup_sd(void) {
//     Serial.print("Initializing SD card...");
//     while (!SD.begin(SD_DETECT_PIN)) {
//         delay(10);
//     }
//     Serial.println("initialization done.");

//     // open the file. note that only one file can be open at a time,
//     // so you have to close this one before opening another.
//     myFile = SD.open("test.txt", FILE_WRITE);

//     // if the file opened okay, write to it:
//     if (myFile) {
//         Serial.print("Writing to test.txt...");
//         myFile.println("testing 1, 2, 3.");
//         // close the file:
//         myFile.close();
//         Serial.println("done.");
//     } else {
//         // if the file didn't open, print an error:
//         Serial.println("error opening test.txt");
//     }

//     // re-open the file for reading:
//     myFile = SD.open("test.txt");
//     if (myFile) {
//         Serial.println("test.txt:");

//         // read from the file until there's nothing else in it:
//         while (myFile.available()) {
//             Serial.write(myFile.read());
//         }
//         // close the file:
//         myFile.close();
//     } else {
//         // if the file didn't open, print an error:
//         Serial.println("error opening test.txt");
//     }
//     Serial.println("###### End of the SD tests ######");
// }

// void setup_mpu(void) {
//     Serial.println("Adafruit MPU6050 test!");

//     // Try to initialize!
//     while (!mpu.begin()) {
//         Serial.println("Failed to find MPU6050 chip");
//         delay(10);
//     }
//     Serial.println("MPU6050 Found!");

//     mpu.setAccelerometerRange(MPU6050_RANGE_16_G);

//     Serial.print("Accelerometer range set to: ");
//     switch (mpu.getAccelerometerRange()) {
//         case MPU6050_RANGE_2_G:
//             Serial.println("+-2G");
//             break;
//         case MPU6050_RANGE_4_G:
//             Serial.println("+-4G");
//             break;
//         case MPU6050_RANGE_8_G:
//             Serial.println("+-8G");
//             break;
//         case MPU6050_RANGE_16_G:
//             Serial.println("+-16G");
//             break;
//     }
//     mpu.setGyroRange(MPU6050_RANGE_500_DEG);
//     Serial.print("Gyro range set to: ");
//     switch (mpu.getGyroRange()) {
//         case MPU6050_RANGE_250_DEG:
//             Serial.println("+- 250 deg/s");
//             break;
//         case MPU6050_RANGE_500_DEG:
//             Serial.println("+- 500 deg/s");
//             break;
//         case MPU6050_RANGE_1000_DEG:
//             Serial.println("+- 1000 deg/s");
//             break;
//         case MPU6050_RANGE_2000_DEG:
//             Serial.println("+- 2000 deg/s");
//             break;
//     }

//     mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);
//     Serial.print("Filter bandwidth set to: ");
//     switch (mpu.getFilterBandwidth()) {
//         case MPU6050_BAND_260_HZ:
//             Serial.println("260 Hz");
//             break;
//         case MPU6050_BAND_184_HZ:
//             Serial.println("184 Hz");
//             break;
//         case MPU6050_BAND_94_HZ:
//             Serial.println("94 Hz");
//             break;
//         case MPU6050_BAND_44_HZ:
//             Serial.println("44 Hz");
//             break;
//         case MPU6050_BAND_21_HZ:
//             Serial.println("21 Hz");
//             break;
//         case MPU6050_BAND_10_HZ:
//             Serial.println("10 Hz");
//             break;
//         case MPU6050_BAND_5_HZ:
//             Serial.println("5 Hz");
//             break;
//     }

//     Serial.println("");

//     delay(100);
// }

int counter = 0;

void loop() {
    /**
     * PRINT MPU READINGS
     **/

    /* Get new sensor events with the readings */
    sensors_event_t a, g, temp;
    mpu.getEvent(&a, &g, &temp);

    sd.write("This is a log message\n");

    if (++counter % 10) {
        sd.flush();
    }

    /* Print out the values */
    // Serial.print("Acceleration X: ");
    // Serial.print(a.acceleration.x);
    // Serial.print(", Y: ");
    // Serial.print(a.acceleration.y);
    // Serial.print(", Z: ");
    // Serial.print(a.acceleration.z);
    // Serial.println(" m/s^2");

    // Serial.print("Rotation X: ");
    // Serial.print(g.gyro.x);
    // Serial.print(", Y: ");
    // Serial.print(g.gyro.y);
    // Serial.print(", Z: ");
    // Serial.print(g.gyro.z);
    // Serial.println(" rad/s");

    // Serial.print("Temperature: ");
    // Serial.print(temp.temperature);
    // Serial.println(" degC");

    // Serial.println("");
}

int double_value(int input) { return input * 2; }

// #include "Adafruit_NeoPixel.h"
// #define BRIGHTNESS_HIGH 5

// Adafruit_NeoPixel pixels = Adafruit_NeoPixel(1, 8);
// uint32_t color;

// namespace beans {
// void output_console() {
//       Serial.printf("arbitrary text\n");

//       digitalWrite(13, 0x1);
//       delay(1000);
//       digitalWrite(13, 0x0);
//       delay(1000);
// }
// }  // namespace beans

// void setup() {
//     Serial.begin(115200);
//     pixels.begin();
//     pixels.setBrightness(BRIGHTNESS_HIGH);
//     color = pixels.Color(100, 30, 50);
//     pixels.setPixelColor(0, color);
//     pixels.show();

//     pinMode(13, OUTPUT);
// }

// void loop() { beans::output_console(); }

#endif  // UNIT_TEST
