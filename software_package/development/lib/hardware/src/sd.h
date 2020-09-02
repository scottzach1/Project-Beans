#ifndef SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_SD_H_
#define SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_SD_H_



/**
 *Library which handles interactions with the Lora.
**/
class Sd {
 public:
    /**
     * Constructor
    **/
    Sd(string fileName);
    /**
     * Destructor
    **/
    ~Sd();

    /**
     * Initiliase the SD object.
     */
    void init();

    /**
     * Write information to the buffer. 
     * Note: you can only write to one file at a time.
    **/
    void write();

    /**
     * Flush information from the buffer.
    **/
    void flush();

    /**
     * Close the sd writer.
    **/
    void close();

 private:
    string fileName;
};

#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_SD_H_
