/**
  Concrete Implementation which will inherit RadioInterface.
  This will communicate with other packages to get info where appropriate.
*/
#include "RadioImpl.h"

RadioImpl::RadioImpl() {

}

RadioImpl::~RadioImpl() {

}

int RadioImpl::getPostFlightData() {
    std::cout << "This is a summary of your post flight data...\n";
    return 0;
}

int RadioImpl::runDiagnostics() {
    std::cout << "Running Diagnostics...\n";
    return 0;
}

int RadioImpl::getInflightData() {
    std::cout << "This is inflight data...\n";
    return 0;
}

int RadioImpl::pollSensors() {
    std::cout << "Calling sensors.\n";
    return 0;
}

int RadioImpl::pollServos() {
    std::cout << "Calling servos.\n";
    return 0;
}

int RadioImpl::getCurrentPos() {
    std::cout << "Getting Current Pos.\n";
    return 0;
}

int RadioImpl::getRocketState() {
    std::cout << "Getting Current Rocket State.\n";
    return 0;
}
