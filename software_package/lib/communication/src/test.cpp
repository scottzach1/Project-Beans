#include <iostream>
#include "RadioImpl.h"
#include "SDCard.h"
#include "Logger.h"
#include "LogDB.h"

int main() {
    std::cout << "------------------------" << std::endl;
    std::cout << " RADIO INTERFACE TESTS  " << std::endl;
    std::cout << "------------------------" << std::endl;
    RadioImpl* radio = new RadioImpl();
    radio->runDiagnostics();
    radio->getInflightData();
    radio->getPostFlightData();
    delete radio;

//    cout << "------------------------" << endl;
    std::cout << "      LOGGER TESTS      " << std::endl;
    std::cout << "------------------------" << std::endl;

    LogDB* database = new LogDB();

    std::cout << "Logger: " << std::endl;
    Logger* logger = new Logger(database);
    logger->readData();
    logger->readSensor();
    logger->storeData("exampleValueFromLogger");
    delete logger;

    std::cout << "------------------------" << std::endl;
    std::cout << "SD Card: " << std::endl;
    SDCard* sdCard = new SDCard(database);
    sdCard->readData();
    sdCard->readSensor();
    sdCard->storeData("exampleSD");
    delete sdCard;

    std::cout << "------------------------" << std::endl;
    std::cout << "Data Stored:" << std::endl;
    database->getData();
    delete database;

    return 0;
}
