
#include <STM32SD.h>
#include "sd.h"

// If SD card slot has no detect pin then define it as SD_DETECT_NONE
// to ignore it. One other option is to call 'SD.begin()' without parameter.
#ifndef SD_DETECT_PIN
#define SD_DETECT_PIN SD_DETECT_NONE
#endif

Sd::Sd(string fName) {
    this.fileName = fName;
    init();
}

void Sd::init(){
    Serial.begin(115200);

    while (!Serial)
        delay(10);

    Serial.print("Initializing SD card.");
    while (!SD.begin(SD_DETECT_PIN)) {
        delay(10);
    }
    Serial.println("SD Initialization done.");
}

void Sd::write(string data) {
    myFile = SD.open(this.fileName, FILE_WRITE);

    //check if file opens
    if (!myFile) {
        Serial.println("Error opening: " + this.fileName);
    } else {
        //TODO(sargsifinl) proper data
        this.currFile = myFile;
        myFile.println(data);
    }
}

void Sd::flush() {
    this.currFile.flush();
}

void Sd::close() {
    this.currFile.close();
}
