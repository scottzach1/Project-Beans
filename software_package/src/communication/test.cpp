#include <iostream>
#include "Logging/LogDB.cpp"
#include "Logging/Logger.cpp"
#include "Logging/SDCard.cpp"
#include "Radio/RadioImpl.cpp"
#include "Radio/RadioInterface.cpp"

using namespace::std;

int main() {
    cout << "------------------------" << endl;
    cout << " RADIO INTERFACE TESTS  " << endl;
    cout << "------------------------" << endl;
    RadioImpl* radio = new RadioImpl();
    radio->runDiagnostics();
    radio->getInflightData();
    radio->getPostFlightData();
    delete radio;

//    cout << "------------------------" << endl;
    cout << "      LOGGER TESTS      " << endl;
    cout << "------------------------" << endl;

    LogDB* database = new LogDB();

    cout << "Logger: " <<endl;
    Logger* logger = new Logger(database);
    logger->readData();
    logger->readSensor();
    logger->storeData("exampleValueFromLogger");
    delete logger;

    cout << "------------------------" << endl;
    cout << "SD Card: " <<endl;
    SDCard* sdCard = new SDCard(database);
    sdCard->readData();
    sdCard->readSensor();
    sdCard->storeData("exampleSD");
    delete sdCard;

    cout << "------------------------" << endl;
    cout << "Data Stored:" << endl;
    database->getData();
    delete database;

    return 0;
}
