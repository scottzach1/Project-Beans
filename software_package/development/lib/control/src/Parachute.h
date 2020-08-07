#ifndef SOFTWARE_PACKAGE_DEVELOPMENT_LIB_CONTROL_SRC_PARACHUTE_H_
#define SOFTWARE_PACKAGE_DEVELOPMENT_LIB_CONTROL_SRC_PARACHUTE_H_

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

#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_CONTROL_SRC_PARACHUTE_H_
