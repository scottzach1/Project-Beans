#include "sensors.h"
#include "assert.h"

void init_sensors(){
    for(int i = 0; i < NUM_SENSORS; i++){
        register_sensor("Sensor " + i);
    }
}

int register_sensor(char * name){

    // Checking pre conditions
    assert(name != NULL);
    assert(recent_sensor_index <= NUM_SENSORS);
    // TODO: check uniqueness of sensor name
    
    // Creating sensor and associating it with the initial reading, adnd adding to array
    struct sensor_reading initial_sensor_reading = {time(0), 1};
    struct sensor new_sensor = {name, initial_sensor_reading};
    sensors[recent_sensor_index] = new_sensor;

    // Checking post condition that the sensor has been added to the collection of sensors correctly
    assert(sensors[recent_sensor_index++].name == name);
}

struct sensor_reading read_value(char * sensor_name){
    
}