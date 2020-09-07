#ifndef SOFTWARE_PACKAGE_DEVELOPMENT_LIB_SOFTWARE_SRC_LOGGING_H_
#define SOFTWARE_PACKAGE_DEVELOPMENT_LIB_SOFTWARE_SRC_LOGGING_H_



/**
 *Library which handles interactions with the Lora.
**/
class Logging {
 public:
    /**
     * Constructor
    **/
    Logging();
    /**
     * Destructor
    **/
    ~Logging();

    /**
     * Log data to/from the Lora radio.
    **/
    void log_lora();

    /**
     * Log data to/from the sd card.
    **/
    void log_sd();
};

#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_SOFTWARE_SRC_LOGGING_H_
