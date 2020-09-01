//
// Created by Ron Crisostomo on 12/06/20.
//

#include "Battery.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <chrono>


using sensors::SensorReading;

Battery::Battery(std::string sensorName) {
    std::cout << "Initializing Battery Sensor" << std::endl;
    name = sensorName;
}

SensorReading Battery::read() const {
    std::cout << "Called read() on battery" << std::endl;

    // Obtaining timestamp
    auto currentTime = std::chrono::system_clock::now();
    time_t timestamp = std::chrono::system_clock::to_time_t(currentTime);
    SensorReading sensorReading = {timestamp, 1000};
    return sensorReading;
}
