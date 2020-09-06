#ifndef SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_IMU_H_
#define SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_IMU_H_

#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

/**
 *Library which handles interactions with the Imu.
 **/
class Imu {
   private:
    Adafruit_MPU6050 mpu;
    sensors_event_t a, g, temp;

   public:
    /**
     * Struct which stores all axis values.
     **/
    typedef struct {
        float x;
        float y;
        float z;
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
     * Initialise the IMU object.
     **/
    void init();

    /**
     * Updates the sensor reading.
    **/
    void update();

    /**
     * Reads the current acceleration in the x axis.
     * @return - x
     **/
    float read_accl_x();

    /**
     * Reads the current acceleration in the y axis.
     * @return - y
     **/
    float read_accl_y();

    /**
     * Reads the current acceleration in the z axis.
     * @return - z
     **/
    float read_accl_z();

    /**
     * Reads the current acceleration in all axis'.
     * @return - Axis struct of each acceleration value.
     **/
    sensors_vec_t read_accl();

    /**
     * Reads the current gyroscope value in the x axis.
     * @return - x
     **/
    float read_gyro_x();

    /**
     * Reads the current gyroscope value in the y axis.
     * @return - y
     **/
    float read_gyro_y();

    /**
     * Reads the current gyroscope value in the z axis.
     * @return - z
     **/
    float read_gyro_z();

    /**
     * Reads the current gyroscope value in all axis'.
     * @return - Axis struct of each gyroscope value.
     **/
    sensors_vec_t read_gyro();
};

#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_IMU_H_
