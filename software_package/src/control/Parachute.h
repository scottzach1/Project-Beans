#ifndef PARACHUTE_H
#define PARACHUTE_H

/**
 * Represents the parachute of the rocket
**/
class Parachute
{

private:

    /**
     * Remember state of parachute
    **/
    bool depoyed;

public:
    
    /**
     * Constructor
    **/
    Parachute(...);

    /**
     * Destructor
    **/
    ~Parachute();

    /**
     * Checks whether the parachute has been deployed
    **/
    bool isDeployed();

    /**
     * Calls hardware to physically deploy the hardware.
     * @throw TODO
    **/
    bool callHardware();
    
};

#endif //PARACHUTE_H