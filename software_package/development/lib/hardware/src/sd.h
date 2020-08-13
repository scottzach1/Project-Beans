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
    Sd();
    /**
     * Destructor
    **/
    ~Sd();

    /**
     * Write information to the buffer.
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
};

#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_SD_H_
