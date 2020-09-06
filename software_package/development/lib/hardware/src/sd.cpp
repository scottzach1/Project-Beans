#include "sd.h"

// If SD card slot has no detect pin then define it as SD_DETECT_NONE
// to ignore it. One other option is to call 'SD.begin()' without parameter.
#ifndef SD_DETECT_PIN
#define SD_DETECT_PIN SD_DETECT_NONE
#endif

Sd::Sd() = default;
Sd::~Sd() = default;

void Sd::init(std::string fName) {
    Serial.begin(115200);

    while (!Serial) delay(10);

    Serial.print("Initializing SD card.");
    while (!SD.begin(SD_DETECT_PIN)) {
        delay(10);
    }

    fileName = fName;
    file = SD.open(fName.c_str(), FILE_WRITE);

    Serial.println("SD Initialization done.");
}

void Sd::write(std::string data) { file.write(data.c_str(), data.size()); }

void Sd::flush() { file.flush(); }

void Sd::close() { file.close(); }
