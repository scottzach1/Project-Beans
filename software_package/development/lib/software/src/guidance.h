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
  GuidanceSystem();
  ~GuidanceSystem();
  void init();
  void step();
};

#endif  // LIB_SOFTWARE_SRC_GUIDANCE_H_
