/**
  This will hand all sd card read and writing.
*/
#include "SDCard.h"

using namespace std;

LogDB* sdDatabase;

SDCard::SDCard(LogDB* database){
    sdDatabase = database;
}
SDCard::SDCard() = default;
SDCard::~SDCard() = default;

int SDCard::readData() {
    cout << "(S) Reading data from X." << endl;
    return 0;
}

int SDCard::readSensor() {
    cout << "(S) The value in X sensor is Y." << endl;
    return 0;
}

int SDCard::storeData(char* data) {
    sdDatabase->addToDB(data);
    cout << "SDCard storing \"" << data << "\" in database." << endl;
    return 0;
}