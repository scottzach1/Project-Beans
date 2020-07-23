//
// Created by Ron Crisostomo on 12/06/20.
//

#include "Battery.h"
#include <iostream>
#include <string>

Battery::Battery(std::string sensorName) {
    std::cout << "Initializing Battery Sensor" << std::endl;
    name = sensorName;
}

SensorReading Battery::read() const {
    std::cout << "Called read() on battery" << std::endl;

    // Obtaining timestamp and random value
    auto currentTime = std::chrono::system_clock::now();
    time_t timestamp = std::chrono::system_clock::to_time_t(currentTime);
    int value = rand_r() % 1001;  // Generates a random number from 1 to 1000
    SensorReading sensorReading = {timestamp, value};
    return sensorReading;
}
