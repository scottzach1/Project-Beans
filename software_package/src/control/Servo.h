#ifndef SOFTWARE_PACKAGE_SRC_CONTROL_SERVO_H_
#define SOFTWARE_PACKAGE_SRC_CONTROL_SERVO_H_

/**
 * Interfaces for the servo(s) on the rocket.
**/
class Servo {
 private:
    /**
     * Represents the position of hte servo.
    **/
    struct Position;

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
    Position getPosition();

    /**
     * Sets the position of the servo.
    **/
    void setPosition(int value);

    /**
     * Sets the position of the servo.
    **/
    void setPosition(Position position);
};

#endif  // SOFTWARE_PACKAGE_SRC_CONTROL_SERVO_H_
