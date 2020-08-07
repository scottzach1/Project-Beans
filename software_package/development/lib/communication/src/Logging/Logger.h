#include "LogDB.h"

#ifndef SOFTWARE_PACKAGE_SRC_COMMUNICATION_LOGGING_LOGGER_H_
#define SOFTWARE_PACKAGE_SRC_COMMUNICATION_LOGGING_LOGGER_H_

class Logger {
 public:
    // constructor / destructor
    Logger();
    explicit Logger(LogDB*);
    ~Logger();

    // fields

    // methods
    static int readSensor();
    static int readData();
    static int storeData(char*);  // TODO(sargisfinl): data type
};

#endif  // SOFTWARE_PACKAGE_SRC_COMMUNICATION_LOGGING_LOGGER_H_
