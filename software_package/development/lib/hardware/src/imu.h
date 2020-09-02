#ifndef SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_IMU_H_
#define SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_IMU_H_



/**
 *Library which handles interactions with the Imu.
**/
class Imu {
 public:
    /**
     * Struct which stores all axis values.
     **/
    typedef struct {
        double x;
        double y;
        double z;
    } Axis;

    /**
     * Constructor
    **/
    Imu();
    /**
     * Destructor
    **/
    ~Imu();

        /**
     * Reads the current acceleration in the x axis.
     * @return - x
    **/
    double read_accl_x();

    /**
     * Reads the current acceleration in the y axis.
     * @return - y
    **/
    double read_accl_y();

    /**
     * Reads the current acceleration in the z axis.
     * @return - z
    **/
    double read_accl_z();

    /**
     * Reads the current acceleration in all axis'.
     * @return - Axis struct of each acceleration value.
    **/
    Axis read_accl();

    /**
     * Reads the current gyroscope value in the x axis.
     * @return - x
    **/
    double read_gyro_x();

    /**
     * Reads the current gyroscope value in the y axis.
     * @return - y
    **/
    double read_gyro_y();

    /**
     * Reads the current gyroscope value in the z axis.
     * @return - z
    **/
    double read_gyro_z();

    /**
     * Reads the current gyroscope value in all axis'.
     * @return - Axis struct of each gyroscope value.
    **/
    Axis read_gyro();
};

#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_IMU_H_
