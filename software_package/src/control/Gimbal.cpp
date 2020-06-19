/**
 * Represents the gimbal on the rocket.
**/

#include "Gimbal.h"

#include <iostream>
#include <limits>

Gimbal::Gimbal() {
    // Allocate memory for our servos.
    servos[num_servos];
}

Gimbal::~Gimbal() = default;

void Gimbal::updatePosition(GuidanceSystem::Position position) {
    std::cout << "Updating positions for each servo" << std::endl;
    for (int16_t i = 0; i < num_servos; ++i) {
        // Calculate servo position by number.
        // TODO(ALL): Interract with actual hardware.
        servos[i].setPosition(complexCalculation(i, position));
    }
}

/**
 * Arbitrary method to represent calculating the position of servo
**/
int16_t complexCalculation(int16_t servo_num,
        GuidanceSystem::Position position) {
    std::cout << "Calculating position to set servo number" << servo_num
        << std::endl;
    // Arbitrary calculation.
    return servo_num + position.altitude + position.latitude
        + position.longitude;
}

int16_t Gimbal::readServo(int16_t servo_num) {
    std::cout << "Reading servo at index " << servo_num << std::endl;
    if (0 < servo_num && servo_num < num_servos) {
        return servos[servo_num].getPosition();
    }
    return std::numeric_limits<int16_t>::signaling_NaN();
}
