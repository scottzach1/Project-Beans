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
    std::cout << "Checking when safe to deploy parachute: ";
    // TODO(ALL): Proper algorithm to determine whether safe.
    bool status = position.altitude < 50;
    std::cout << (status ? "True" : "False") << std::endl;
    return status;
}

void Lander::deployParachute() {
    std::cout << "Deploying parachute" << std::endl;
    if (!parachute.isDeployed()) {
        parachute.callHardware();
    }
}
