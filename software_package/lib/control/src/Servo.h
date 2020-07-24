#ifndef SOFTWARE_PACKAGE_SRC_CONTROL_SERVO_H_
#define SOFTWARE_PACKAGE_SRC_CONTROL_SERVO_H_

#include <iostream>
#include <limits>

/**
 * Interfaces for the servo(s) on the rocket.
**/
class Servo {
 private:
    /**
     * The position of the servo (-127 -> 127).
    **/
    int16_t current_position = std::numeric_limits<int16_t>::signaling_NaN();

 public:
    /**
     * Constructor
    **/
    Servo();

    /**
     * Destructor
    **/
    ~Servo();

    /**
     * Gets current position of the servo
    **/
    int16_t getPosition();

    /**
     * Sets the position of the servo.
    **/
    void setPosition(int16_t value);
};

#endif  // SOFTWARE_PACKAGE_SRC_CONTROL_SERVO_H_
