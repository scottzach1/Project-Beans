#ifndef LOGDB_H
#define LOGDB_H

extern char *databaseStore[];

class LogDB {
public:
    //constructor / destructor
    LogDB();
    ~LogDB();

    //fields
    //Some Kind kind of concrete storage of events
    //methods
    static int getData();
    static int writeToSD();
    static int addToDB(char*); //TODO: data type
};

#endif //LOGDB_H
