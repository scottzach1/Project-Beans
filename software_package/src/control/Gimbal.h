#ifndef SOFTWARE_PACKAGE_SRC_CONTROL_GIMBAL_H_
#define SOFTWARE_PACKAGE_SRC_CONTROL_GIMBAL_H_

#include "GuidanceSystem.h"
#include "Servo.h"

#include <iostream>

/**
 * Interfaces with the gimbal on the rocket.
**/
class Gimbal {
 private:
   /**
     * The number of servos
     */
    int16_t num_servos = 2;

    /**
     * The servos on the rocket.
    **/
    Servo servos[];

 public:
    /**
     * Constructor
    **/
    Gimbal();
    /**
     * Destructor
    **/
    ~Gimbal();

    /**
     * Updates the position of the servo off readings from the PID/Guidance system.
     * @param position of the rocket.
    **/
    void updatePosition(GuidanceSystem::Position position);

    /**
     * Reads the servo at a given index.
    **/
    int16_t readServo(int16_t servo_num);
};

#endif  // SOFTWARE_PACKAGE_SRC_CONTROL_GIMBAL_H_
