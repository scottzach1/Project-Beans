#ifndef SDCARD_H
#define SDCARD_H

class SDCard {
 public:
    // constructor / destructor
    SDCard();
    SDCard(LogDB *);
    ~SDCard();

    // fields

    // methods
    static int readSensor();
    static int readData();
    static int storeData(char *);  // TODO: data type
};

#endif  // SDCARD_H
