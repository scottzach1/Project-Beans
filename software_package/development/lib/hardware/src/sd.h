#ifndef SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_SD_H_
#define SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_SD_H_

#include <STM32SD.h>

#include <iostream>
#include <string>

/**
 *Library which handles interactions with the SD Card.
 **/
class Sd {
   private:
    std::string fileName;
    File file;

   public:
    /**
     * Constructor
     **/
    Sd();
    /**
     * Destructor
     **/
    ~Sd();

    /**
     * Initiliase the SD object.
     **/
    void init(std::string fileName);

    /**
     * Write information to the buffer.
     * Note: you can only write to one file at a time.
     **/
    void write(std::string data);

    /**
     * Flush information from the buffer.
     **/
    void flush();

    /**
     * Close the sd writer.
     **/
    void close();
};

#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_SD_H_
