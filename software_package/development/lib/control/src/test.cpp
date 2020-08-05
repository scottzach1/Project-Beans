#include "Gimbal.h"
#include "GuidanceSystem.h"
#include "Lander.h"
#include "Parachute.h"
#include "Servo.h"

#include <iostream>
#include <sstream>

std::string printPosition(GuidanceSystem::Position position) {
    std::ostringstream stream;
    // Concatenate values
    stream << "(" << position.longitude << ", " << position.latitude
        << ", " << position.altitude <<  ")";
    return stream.str();
}

int main() {
    // Guidance System
    std::cout << "Creating GuidanceSystem" << std::endl;
    GuidanceSystem* guidance = new GuidanceSystem();

    for (int16_t i = 0; i < 12; ++i) {
        GuidanceSystem::Position position = guidance->getCurrentPosition();
        std::cout << "Position " << i << ": " << printPosition(position)
            << std::endl;
        guidance->updatePosition();
    }

    GuidanceSystem::Position position = guidance->getCurrentPosition();
    delete guidance;

    // Lander
    std::cout << std::endl << "Creating Lander:" << std::endl;
    Lander* lander = new Lander();

    lander->isSafeToDeploy(position);
    position.altitude = 51;
    lander->isSafeToDeploy(position);
    delete lander;

    // Gimbal
    std::cout << std::endl << "Creating Gimbal:" << std::endl;
    Gimbal* gimbal = new Gimbal();

    int16_t num_servos = gimbal->getNumServos();
    std::cout << "Number of servos" << num_servos << std::endl;
    for (int16_t i = 0; i < num_servos; ++i) {
        int16_t servo_reading = gimbal->readServo(i);
        std::cout << "Value: " << servo_reading << std::endl;
    }
    delete gimbal;

    return 0;
}
