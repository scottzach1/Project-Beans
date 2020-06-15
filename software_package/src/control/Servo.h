#ifndef SERVO_H
#define SERVO_H

/**
 * Interfaces for the servo(s) on the rocket.
**/
class Servo
{

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

#endif //SERVO_H