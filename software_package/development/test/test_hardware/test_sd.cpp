#include <Arduino.h>
#include <STM32SD.h>
#include <Wire.h>
#include <unity.h>

#ifdef UNIT_TEST

// If SD card slot has no detect pin then define it as SD_DETECT_NONE
// to ignore it. One other option is to call 'SD.begin()' without parameter.
#ifndef SD_DETECT_PIN
#define SD_DETECT_PIN SD_DETECT_NONE
#endif

File myFile;
Sd sd;

void test_sd() {
  // Guidance System
  Serial.print("Initializing SD card...");

  while (!SD.begin(SD_DETECT_PIN)) {
    delay(10);
  }
  Serial.println("initialization done.");
}

void test_sd_write() {
  // open the file.note that only one file can be open at a time,
  // so you have to close this one before opening another.
  myFile = SD.open("test.txt", FILE_WRITE);

  // if the file opened okay, write to it:
  if (myFile) {
    Serial.print("Writing to test.txt...");
    myFile.println("testing 1, 2, 3.");
    // close the file:
    myFile.close();
    Serial.println("done.");
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt (w)");
    TEST_FAIL_MESSAGE("error opening test.txt (w)");
  }

  // re-open the file for reading:
  myFile = SD.open("test.txt");
  if (myFile) {
    Serial.println("test.txt:");
    // read from the file until there's nothing else in it:
    while (myFile.available()) {
      Serial.write(myFile.read());
    }
    // close the file:
    myFile.close();
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt (r)");
    TEST_FAIL_MESSAGE("error opening test.txt (r)");
  }
  Serial.println("###### End of the SD tests ######");
}

void test_sd_file_write() {
    myFile = SD.open("test.txt", FILE_WRITE);
    std::string test_string = "Example code being written";

    // write to file
    if (myFile) {
        myFile.println(test_string);
        myFile.close();
    } else {
        // error state
        TEST_FAIL_MESSAGE("error opening test.txt (w)");
    }

    // re-open the file for reading and verification
    myFile = SD.open("test.txt");
    if (myFile) {
        std::string out = "";
        while (myFile.available()) {
            out.append(myFile.read());
        }
        // close the file:
        myFile.close();
        TEST_ASSERT_EQUAL(out, test_string);
    } else {
        // ierror state
        TEST_FAIL_MESSAGE("error opening test.txt (r)");
    }
    Serial.println("###### End of the SD tests ######");
}


void process() {
  UNITY_BEGIN();  // these sleeps may need tweaking!
  RUN_TEST(test_sd);
  RUN_TEST(test_sd_write);
  UNITY_END();
}

#ifdef ARDUINO

// void setup() {
//     // NOTE!!! Wait for >2 secs
//     // if board doesn't support software reset via Serial.DTR/RTS
//     delay(5000);

//     Serial.begin(115200);

//     while (!Serial)
//         delay(10);  // will pause Zero, Leonardo, etc until serial console opens

//     process();
// }

void setup() {
  // NOTE!!! Wait for >2 secs
  // if board doesn't support software reset via Serial.DTR/RTS
  delay(5000);

  Serial.begin(115200);

  while (!Serial)
    delay(10);  // will pause Zero, Leonardo, etc until serial console opens

  sd.init();

  process();
}

void loop() { delay(1); }

#else

int main(){
  // These tests are more of a 'pre-test' that verify that we are
  // correctly interfacing with the adafruit libraries for the
  // hardware package
  UNITY_BEGIN();
//   RUN_TEST(test_sd);
//   RUN_TEST(test_sd_write);
  RUN_TEST(test_sd_file_write);
  return UNITY_END();
}

#endif  // ARDUINO

#endif  // UNIT_TEST
