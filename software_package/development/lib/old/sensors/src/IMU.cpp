//
// Created by Ron Crisostomo on 12/06/20.
//

#include "IMU.h"
#include <iostream>
#include <string>

using sensors::SensorReading;

IMU::IMU(std::string sensorName) {
    std::cout << "Initializing IMU sensor" << std::endl;
    name = sensorName;
}

SensorReading IMU::read() const {
    std::cout << "Called read() on IMU" << std::endl;

    // Obtaining timestamp
    auto currentTime = std::chrono::system_clock::now();
    time_t timestamp = std::chrono::system_clock::to_time_t(currentTime);
    SensorReading sensorReading = {timestamp, 1000};
    return sensorReading;
}
