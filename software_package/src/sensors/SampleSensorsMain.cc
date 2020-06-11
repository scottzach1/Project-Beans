#include "sensors.hh"
#include "Battery.hh"
#include "GPS.hh"
#include "SensorManager.hh"
#include "IMU.hh"

int main(){
    Battery batterySensor("batterySensor");
    GPS gpsSensor("gpsSensor");
    IMU imuSensor("imuSensor");
    SensorManager sensorManager;
    batterySensor.read();
    gpsSensor.read();
    imuSensor.read();
    return 0;
}