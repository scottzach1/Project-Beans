/**
  This will hand all sd card read and writing.
*/
#include "SDCard.h"

#include <iostream>

LogDB* sdDatabase;

SDCard::SDCard(LogDB* database) { sdDatabase = database; }
SDCard::SDCard() = default;
SDCard::~SDCard() = default;

int SDCard::readData() {
    std::cout << "(S) Reading data from X." << std::endl;
    return 0;
}

int SDCard::readSensor() {
    std::cout << "(S) The value in X sensor is Y." << std::endl;
    return 0;
}

int SDCard::storeData(char* data) {
    sdDatabase->addToDB(data);
    std::cout << "SDCard storing \"" << data << "\" in database." << std::endl;
    return 0;
}
