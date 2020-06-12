#ifndef GIMBAL_H
#define GIMBAL_H

#include "Servo.h"

/**
 * Interfaces with the gimbal on the rocket.
**/
class Gimbal
{

private:
    
    /**
     * The servos on the rocket.
    **/
    Servo servos[];

public:

    /**
     * Construtor
    **/
    Gimbal(/* args */);

    /**
     * Destructor
    **/
    ~Gimbal();


    /**
     * Updates the position of the servo off readings from the PID/Guidance system.
     * 
     * @param TODO
    **/
    void updatePosition(...);

    /**
     * Reads the servo at a given index.
     * 
     * @return TODO (Something that returns the current orientation of the servo)
    **/
    void readServos();

};

#endif //GIMBAL_H