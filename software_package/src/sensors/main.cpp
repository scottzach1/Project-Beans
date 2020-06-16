#include <iostream>
#include "SensorManager.h"
using namespace sensors;

using std::cout;
using std::endl;


int main() {
    SensorManager sensorManager;
    sensorManager.initSensors();

    cout << "Performing read() on batterySensor" << endl;
    SensorReading batterySensorReading = sensorManager.readBattery();
    cout << "Battery Sensor Reading - timestamp: " << batterySensorReading.timestamp << " value: " << batterySensorReading.value << endl;

    cout << "Performing read() on imuSensor" << endl;
    SensorReading imuSensorReading = sensorManager.readIMU();
    cout << "Battery Sensor Reading - timestamp: " << imuSensorReading.timestamp << " value: " << imuSensorReading.value << endl;

    cout << "Performing read() on gpsSensor" << endl;
    SensorReading gpsSensorReading = sensorManager.readGPS();
    cout << "Battery Sensor Reading - timestamp: " << gpsSensorReading.timestamp << " value: " << gpsSensorReading.value << endl;


    return 0;
}
