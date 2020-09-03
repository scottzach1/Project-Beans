#include "sd.h"

// If SD card slot has no detect pin then define it as SD_DETECT_NONE
// to ignore it. One other option is to call 'SD.begin()' without parameter.
#ifndef SD_DETECT_PIN
#define SD_DETECT_PIN SD_DETECT_NONE
#endif

char* toCharArray(std::string str) {
    char c[str.size() + 1];
    str.copy(c, str.size() + 1);
    return c;
}

Sd::Sd() {}
Sd::~Sd() {}

void Sd::init(std::string fName) {
    Serial.begin(115200);

    while (!Serial) delay(10);

    Serial.print("Initializing SD card.");
    while (!SD.begin(SD_DETECT_PIN)) {
        delay(10);
    }

    fileName = fName;
    file = SD.open(toCharArray(fName), FILE_WRITE);

    Serial.println("SD Initialization done.");
}

void Sd::write(std::string data) {
    file.write(toCharArray(data), data.size());
}

void Sd::flush() { file.flush(); }

void Sd::close() { file.close(); }
