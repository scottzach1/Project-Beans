//
// Created by Ron Crisostomo on 12/06/20.
//

#include "IMU.h"
#include <iostream>
#include <string>

IMU::IMU(std::string sensorName) {
    std::cout << "Initializing IMU sensor" << std::endl;
    name = sensorName;
}

SensorReading IMU::read() const {
    std::cout << "Called read() on IMU" << std::endl;

    // Obtaining timestamp and random value
    auto currentTime = std::chrono::system_clock::now();
    time_t timestamp = std::chrono::system_clock::to_time_t(currentTime);
    int value = rand_r() % 1001;  // Generates a random number from 1 to 1000
    SensorReading sensorReading = {timestamp, value};
    return sensorReading;
}
