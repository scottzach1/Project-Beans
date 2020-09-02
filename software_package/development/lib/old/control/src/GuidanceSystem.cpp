/**
 * Represents the PID controller for the rocket.
**/

#include "GuidanceSystem.h"
#include <math.h>
#include <iostream>
#include <limits>

GuidanceSystem::GuidanceSystem() = default;
GuidanceSystem::~GuidanceSystem() = default;

/**
 * Arbitrary function as place holder for calculating values
**/
float calculateValue(float value) {
    return isnan(value) ? -10 : value + 1;
}

void GuidanceSystem::updatePosition() {
    std::cout << "Updated position" << std::endl;
    current_position = calculatePosition();
}

GuidanceSystem::Position GuidanceSystem::calculatePosition() {
    // Make a copy of the current Position.
    std::cout << "Calculating position" << std::endl;
    struct GuidanceSystem::Position position = current_position;
    // TODO(Any): Interact with hardware to calculate true values.
    position.longitude = calculateValue(position.longitude);
    position.latitude = calculateValue(position.latitude);
    position.altitude = calculateValue(current_position.altitude);
    // END_TODO
    return position;
}

GuidanceSystem::Position GuidanceSystem::getCurrentPosition() {
    // Return a copy of the current position.
    std::cout << "Getting position" << std::endl;
    return current_position;
}
