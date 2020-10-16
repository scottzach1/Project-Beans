#ifndef LIB_SOFTWARE_SRC_LOGGING_H_
#define LIB_SOFTWARE_SRC_LOGGING_H_

#include <iostream>
#include <string>

#include "debug.h"
#include "sd.h"

/**
 *Library which handles interactions with the Lora.
 **/
class Logging {
 private:
  Sd sd;

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
  void log_sd(std::string input);

  /**
   * Flush the readings from the buffer to the sd card.
   * 
   * Note: This is non-deterministic!
   **/
  void flush_sd();
};

#endif  // LIB_SOFTWARE_SRC_LOGGING_H_
