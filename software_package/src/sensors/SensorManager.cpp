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
    batterySensor = new Battery();
    imuSensor = new IMU();
    gpsSensor = new GPS();

    // Ensuring none of the sensor instances are null
    assert(batterySensor != nullptr);
    assert(imuSensor != nullptr);
    assert(gpsSensor != nullptr);
    cout << "Completed initialization of sensor instances" << endl;

}

SensorReading SensorManager::readBattery() const {
    return batterySensor->read();
}

SensorReading SensorManager::readIMU() const {
    return imuSensor->read();
}

SensorReading SensorManager::readGPS() const {
    return gpsSensor->read();
}

