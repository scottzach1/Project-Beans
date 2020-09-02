/**
  Aggregates all stored data.
  TODO(sargisfinl): decide if this is necessary.
*/
#include "LogDB.h"

#include <iostream>

char* LogDB::databaseStore[10];

LogDB::LogDB() {}
LogDB::~LogDB() {}

int LogDB::printData() {
    for (int i = 0; i < sizeof(databaseStore); i++) {
        if (databaseStore[i] != nullptr) {
            std::cout << databaseStore[i] << std::endl;
        } else {
            break;
        }
    }
    return 0;
}

int LogDB::addToDB(char* data) {
    // sanitise data
    if (data == nullptr) return -1;
    // add to db
    for (int i = 0; i < sizeof(databaseStore); i++) {
        if (databaseStore[i] == nullptr) {
            databaseStore[i] = data;
            break;
        }
    }
    return 0;
}

int LogDB::writeToSD() { return 0; }

//NOTE: TEMPORARY data structure as this still isn't determined - will not be using char** in future
char** LogDB::getDatabaseStore(){
    return databaseStore;
}


