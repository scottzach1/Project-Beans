#ifndef SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_IMU_H_
#define SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_IMU_H_



/**
 *Library which handles interactions with the Imu.
**/
class Imu {
 public:
    /**
     * Constructor
    **/
    Imu();
    /**
     * Destructor
    **/
    ~Imu();

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

#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_IMU_H_
