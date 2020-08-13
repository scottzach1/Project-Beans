#ifndef SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_BAROMETER_H_
#define SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_BAROMETER_H_



/**
 *Library which handles interactions with the Barometer.
**/
class Barometer {
 public:
    /**
     * Constructor
    **/
    Barometer();
    /**
     * Destructor
    **/
    ~Barometer();

    /**
     * Reads the current acceleration.
     * @return - [x,y,z]
    **/
    double[] read_accl();

    /**
     * Reads the current gyroscope values.
     * @return - [x,y,z]
    **/
    double[] read_gyro();
};

#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_BAROMETER_H_
