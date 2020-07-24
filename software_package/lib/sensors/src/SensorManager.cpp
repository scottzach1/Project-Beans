//
// Created by Ron Crisostomo on 12/06/20.
//

#include <iostream>
#include <chrono>
#include <ctime>
#include "SensorManager.h"
#include "Battery.h"
#include "IMU.h"
#include "GPS.h"

using namespace sensors;
using std::cout;
using std::endl;
using std::string;

void SensorManager::initSensors() {
    cout << "Initializing Sensors...." << endl;
    batterySensor = new Battery("batterySensor");
    imuSensor = new IMU("imuSensor");
    gpsSensor = new GPS("gpsSensor");

    // Ensuring none of the sensor instances are null
    assert(batterySensor != nullptr);
    assert(imuSensor != nullptr);
    assert(gpsSensor != nullptr);
    cout << "Completed initialization of sensor instances" << endl;

}

SensorReading SensorManager::readBattery() const {
    SensorReading sensorReading = batterySensor -> read();
    batterySensor -> addReading(sensorReading);
    return sensorReading;
}

SensorReading SensorManager::readIMU() const {
    SensorReading sensorReading = imuSensor -> read();
    imuSensor -> addReading(sensorReading);
    return imuSensor->read();
}

SensorReading SensorManager::readGPS() const {
    SensorReading sensorReading = gpsSensor -> read();
    gpsSensor -> addReading(sensorReading);
    return gpsSensor->read();
}

