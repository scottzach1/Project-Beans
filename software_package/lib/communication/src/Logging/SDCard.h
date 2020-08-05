#include "LogDB.h"

#ifndef SOFTWARE_PACKAGE_SRC_COMMUNICATION_LOGGING_SDCARD_H_
#define SOFTWARE_PACKAGE_SRC_COMMUNICATION_LOGGING_SDCARD_H_

class SDCard {
 public:
    // constructor / destructor
    SDCard();
    explicit SDCard(LogDB *);
    ~SDCard();

    // fields

    // methods
    static int readSensor();
    static int readData();
    static int storeData(char *);  // TODO(sargisfinl): data type
};

#endif  // SOFTWARE_PACKAGE_SRC_COMMUNICATION_LOGGING_SDCARD_H_
