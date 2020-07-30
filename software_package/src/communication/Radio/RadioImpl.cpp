/**
  Concrete Implementation which will inherit RadioInterface.
  This will communicate with other packages to get info where appropriate.
*/
#include "RadioImpl.h"

#include <iostream>

RadioImpl::RadioImpl() = default;
RadioImpl::~RadioImpl() = default;

int RadioImpl::getPostFlightData() {
    std::cout << "This is a summary of your post flight data..." << std::endl;
    RadioImpl::getRocketState();
    RadioImpl::getCurrentPos();
    RadioImpl::pollSensors();
    RadioImpl::pollServos();
    std::cout << "------------------------" << std::endl;
    return 0;
}

int RadioImpl::runDiagnostics() {
    std::cout << "Running Diagnostics..." << std::endl;
    RadioImpl::getRocketState();
    RadioImpl::getCurrentPos();
    RadioImpl::pollSensors();
    RadioImpl::pollServos();
    std::cout << "------------------------" << std::endl;
    return 0;
}

int RadioImpl::getInflightData() {
    std::cout << "Getting data at current time..." << std::endl;
    RadioImpl::getRocketState();
    RadioImpl::getCurrentPos();
    RadioImpl::pollSensors();
    RadioImpl::pollServos();
    std::cout << "------------------------" << std::endl;
    return 0;
}

int RadioImpl::pollSensors() {
    std::cout << "Calling Sensors." << std::endl;
    return 0;
}

int RadioImpl::pollServos() {
    std::cout << "Calling Servos." << std::endl;
    return 0;
}

int RadioImpl::getCurrentPos() {
    std::cout << "Getting Current Pos." << std::endl;
    return 0;
}

int RadioImpl::getRocketState() {
    std::cout << "Getting Current Rocket State." << std::endl;
    return 0;
}
