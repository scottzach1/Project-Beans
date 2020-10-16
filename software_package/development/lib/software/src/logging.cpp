#include "logging.h"

#include "debug.h"

Logging::Logging() {
  DEBUG_MSG_LN(1, "Logger wrapper needs to be implemented");
  sd.init("logger.txt");
}

void Logging::log_lora() {
  DEBUG_MSG_LN(1, "Lora needs to be implemented within dev.");
}

void Logging::log_sd(std::string input) {
  DEBUG_MSG(2, "Logging: ")
  DEBUG_MSG_LN(2, input.c_str());
  sd.write(input);
}
