/**
 * Represents the parachute on the rocket.
**/

#include "Parachute.h"

#include <iostream>
#include <limits>

Parachute::Parachute() = default;
Parachute::~Parachute() = default;

bool Parachute::isDeployed() {
    std::cout << "Checking whether parachute is deployed" << std::endl;
    return deployed;
}

bool Parachute::callHardware() {
    std::cout << "Attempting to deploy parachute...\t";
    // TODO(ALL): Interract with hardware
    std::cout << (true ? "Success" : "Failure") << std::endl;
}
