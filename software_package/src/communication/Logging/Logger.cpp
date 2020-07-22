/**
  This will handle all non sd related storage.
*/
#include "Logger.h"
#include <iostream>

LogDB* loggerDatabase;

Logger::Logger(LogDB* database){
    loggerDatabase = database;
}
Logger::~Logger() = default;

int Logger::readSensor() {
    std::cout << "(L) The value in X sensor is Y." << std::endl;
    return 0;
}

int Logger::readData() {
    std::cout << "(L) Reading data from X." << std::endl;
    return 0;
}

int Logger::storeData(char* data) {
    loggerDatabase->addToDB(data);
    std::cout << "Logger storing \"" << data << "\" in database." << std::endl;
    return 0;
}



