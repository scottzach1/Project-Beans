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
#define DEBUG 1
#endif

#include "Arduino.h"

/**
 * This macro acts as a conditional debug wrapper to `Serial.println()`.
 **/
#define DEBUG_MSG_LN(level, ...)     \
    if (DEBUG && level >= DEBUG) {   \
        Serial.println(__VA_ARGS__); \
    }

/**
 * This macro acts as a conditional debug wrapper to `Serial.printf()`.
 **/
#define DEBUG_MSG_F(level, ...)     \
    if (DEBUG && level >= DEBUG) {  \
        Serial.printf(__VA_ARGS__); \
    }

#endif  // LIB_SOFTWARE_SRC_DEBUG_H_
