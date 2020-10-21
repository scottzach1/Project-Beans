#ifndef LIB_SOFTWARE_SRC_DEBUG_H_
#define LIB_SOFTWARE_SRC_DEBUG_H_

// DEBUG should be set by the compiler.
// Alternatively, if it is not set, then we manually set debug to 1.

// DEBUG Scale:
// 0 - No debug whatsoever.
//     Period.
// 1 - Light Debugging (light messages, no specifics).
//     Eg. `TODO implement this...`and `parachute launched.`).
// 2 - Full verbose (remainder of information).
//     Eg. `Returned value 5` or `Entering loop iteration 2`.

#ifndef DEBUG
#define DEBUG 0
#endif

#include "Arduino.h"

/**
 * This macro acts as a conditional debug wrapper to `Serial.print()`.
 **/
#ifndef DEBUG_MSG
#define DEBUG_MSG(level, ...)    \
  if (DEBUG && level >= DEBUG) { \
    Serial.print(__VA_ARGS__);   \
  }
#endif
/**
 * This macro acts as a conditional debug wrapper to `Serial.println()`.
 **/
#ifndef DEBUG_MSG_LN
#define DEBUG_MSG_LN(level, ...) \
  if (DEBUG && level >= DEBUG) { \
    Serial.println(__VA_ARGS__); \
  }
#endif
/**
 * This macro acts as a conditional debug wrapper to `Serial.printf()`.
 **/
#ifndef DEBUG_MSG_F
#define DEBUG_MSG_F(level, ...)  \
  if (DEBUG && level >= DEBUG) { \
    Serial.printf(__VA_ARGS__);  \
  }
#endif

#endif  // LIB_SOFTWARE_SRC_DEBUG_H_
