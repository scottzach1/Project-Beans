#ifndef LANDER_H
#define LANDER_H

#include "Parachute.h"

/**
 * Handles landing of the rocket.
**/
class Lander {

private:

    /**
     * Represents a trajectory of the rocket.
    **/
    struct Trajectory;

    /**
     * Represents the parachute.
    **/
    Parachute parachute;

public:

    /**
     * Constructor
    **/
    Lander(...);

    /**
     * Destructor
    **/
    ~Lander();

    /**
     * Calculates when to deploy the rocket
     * @param TODO
     * @return TODO
    **/
    void calculateWhenToDeploy(...);

    /**
     * Calculates if it is safe to deploy the parachute.
     * @return bool true if safe, false otherwise
    **/
   bool isSafeToDeploy();

    /**
     * Attemps to deploy the parachute.
     * @throw TODO (on failure)
    **/
   void deployParachute();
};

#endif //LANDER_H