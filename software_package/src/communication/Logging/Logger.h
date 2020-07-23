#ifndef LOGGER_H
#define LOGGER_H

class Logger {
 public:
    // constructor / destructor
    Logger();
    Logger(LogDB*);
    ~Logger();

    // fields

    // methods
    static int readSensor();
    static int readData();
    static int storeData(char*);  // TODO: data type
};

#endif  // LOGGER_H
