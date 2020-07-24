/**
  This will handle all non sd related storage.
*/
#include "Logger.h"

using namespace std;

LogDB* loggerDatabase;

Logger::Logger(LogDB* database){
    loggerDatabase = database;
}
Logger::~Logger() = default;

int Logger::readSensor() {
    cout << "(L) The value in X sensor is Y." << endl;
    return 0;
}

int Logger::readData() {
    cout << "(L) Reading data from X." << endl;
    return 0;
}

int Logger::storeData(char* data) {
    loggerDatabase->addToDB(data);
    cout << "Logger storing \"" << data << "\" in database." << endl;
    return 0;
}



