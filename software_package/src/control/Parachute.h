#ifndef SOFTWARE_PACKAGE_SRC_CONTROL_PARACHUTE_H_
#define SOFTWARE_PACKAGE_SRC_CONTROL_PARACHUTE_H_

/**
 * Represents the parachute of the rocket
**/
class Parachute {
 private:
    /**
     * Remember state of parachute
    **/
    bool deployed = false;

 public:
    /**
     * Constructor
    **/
    Parachute();

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
    **/
    bool callHardware();
};

#endif  // SOFTWARE_PACKAGE_SRC_CONTROL_PARACHUTE_H_
