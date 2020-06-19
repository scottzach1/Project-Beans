/**
 * Handles landing the rocket.
**/

#include "Lander.h"
#include "Parachute.h"

#include "GuidanceSystem.h"
#include "Servo.h"

Lander::Lander() = default;
Lander::~Lander() = default;

bool Lander::isSafeToDeploy(GuidanceSystem::Position position) {
    std::cout << "Checking when safe to deploy parachute" << std::endl;
    // TODO(ALL): Proper algorithm to determine whether safe.
    return position.altitude < 50;
}

void Lander::deployParachute() {
    std::cout << "Deploying parachute" << std::endl;
    if (!parachute.isDeployed()) {
        parachute.callHardware();
    }
}
