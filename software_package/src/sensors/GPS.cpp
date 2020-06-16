//
// Created by Ron Crisostomo on 12/06/20.
//

#include "GPS.h"
#include <iostream>

GPS::GPS(){
    std::cout << "Initializing GPS sensor" << std::endl;
}

struct SensorReading GPS::read() const {
    std::cout << "Called read() on GPS" << std::endl;

    // Obtaining timestamp and random value
    auto currentTime = std::chrono::system_clock::now();
    time_t timestamp = std::chrono::system_clock::to_time_t(currentTime);
    int value = rand() % 1001; // Generates a random number from 1 to 1000
    return SensorReading{timestamp, value};
}