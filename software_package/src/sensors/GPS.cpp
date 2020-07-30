//
// Created by Ron Crisostomo on 12/06/20.
//

#include "GPS.h"
#include <iostream>
#include <string>

using sensors::SensorReading;

GPS::GPS(std::string sensorName) {
    std::cout << "Initializing GPS sensor" << std::endl;
    name = sensorName;
}

SensorReading GPS::read() const {
    std::cout << "Called read() on GPS" << std::endl;

    // Obtaining timestamp value
    auto currentTime = std::chrono::system_clock::now();
    time_t timestamp = std::chrono::system_clock::to_time_t(currentTime);
    SensorReading sensorReading = {timestamp, 1000};
    return sensorReading;
}
