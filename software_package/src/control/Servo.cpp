/**
 * Represents a servo on the rocket.
**/

#include "Servo.h"

#include <iostream>

Servo::Servo() = default;
Servo::~Servo() = default;

int16_t Servo::getPosition() {
    std::cout << "Getting position" << std::endl;
    // TODO(ALL): Double check with hardware.
    return current_position;
}

void Servo::setPosition(int16_t value) {
    // TODO(ALL): Call hardware to set position.
    std::cout << "Setting servo to position:" + value << std::endl;
    current_position = value;
}
