#ifndef SOFTWARE_PACKAGE_SRC_COMMUNICATION_LOGGING_LOGDB_H_
#define SOFTWARE_PACKAGE_SRC_COMMUNICATION_LOGGING_LOGDB_H_

extern char *databaseStore[];

class LogDB {
 public:
    // constructor / destructor
    LogDB();
    ~LogDB();

    // fields
    // Some Kind kind of concrete storage of events
    // methods
    static int getData();
    static int writeToSD();
    static int addToDB(char *);  // TODO(sargisfinl): data type
};

#endif  // SOFTWARE_PACKAGE_SRC_COMMUNICATION_LOGGING_LOGDB_H_
