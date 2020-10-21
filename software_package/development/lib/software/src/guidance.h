#ifndef LIB_SOFTWARE_SRC_GUIDANCE_H_
#define LIB_SOFTWARE_SRC_GUIDANCE_H_

#include "gservo.h"
#include "imu.h"

class GuidanceSystem {
 private:
  Imu imu;
  GServo *servoBot;
  GServo *servoTop;

 public:
  const float P_TOP = 1;
  const float P_BOT = 1;
  GuidanceSystem();
  ~GuidanceSystem();
  void init();
  void step();
};

#endif  // LIB_SOFTWARE_SRC_GUIDANCE_H_
