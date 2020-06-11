#include <time.h>
static const int NUM_SENSORS = 5; // TODO: Determine actual number of sensors being managed

struct sensor{
    // TODO: Determine members
    char * name;

    // Most recent value of the sensor
    struct sensor_reading;
};

struct sensor_reading{
    time_t timestamp;
    int value;
};

// Collection of sensors
extern struct sensor sensors[NUM_SENSORS];

// ########### sensor-manager.c related functions ########### //
/**
 * Reads the value of the given sensor and returns it. Used for sending the sensor reading.
 * @param sensor Name of the sensor the read the value of
 * @return Value of sensor reading in string format
*/
struct sensor_reading read_value(char * sensor_name);

/**
 * Creates an instance of a sensor and stores it
 * @param name char pointer to the name of the sensor
 * @return 1 if registration of the sensor was succesful
*/
int register_sensor(char * name); // TODO: Determine other required parameters

/**
 * Initiates all sensors of the pacakge
*/
void init_sensors();

// ########### imu.c related functions ########### //
// TODO: Determine imu exclusive functions

// ########### battery.c related functions ########### //
// TODO: Determine battery exclusive functions

// ########### gps.c related functions ########### //
// TODO: Determine gps exclusive functions

