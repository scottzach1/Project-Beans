#include <Arduino.h>

#include <sstream>
#include <string>

/* Hardware Package */
#include "barometer.h"
#include "gservo.h"
#include "imu.h"
#include "lora.h"
#include "parachute.h"
#include "sd.h"

/* Software Package */
#include "debug.h"
#include "guidance.h"
#include "logging.h"
// #include "guidance_pid.h"

GuidanceSystem guidance;
Barometer baro;
Logging logger;
unsigned int counter;

void setup() {
  // put your setup code here, to run once:
  DEBUG_MSG_LN(1, "Beginning global setup.");

  guidance.init();
  baro.init();

  DEBUG_MSG_LN(1, "Finished global setup, beginning main loop.");
}

void loop() {
  // put your main code here, to run repeatedly:
  guidance.step();

  // optional logging.
  if (DEBUG > 2) {
    if (++counter % 30) {
      std::stringstream ss;
      ss << "alt: " << baro.read_altitude() << "m" << std::endl;
      logger.log_sd(ss.str());
    }

    if (counter % 60) {
      logger.flush_sd();
    }
  }
}
