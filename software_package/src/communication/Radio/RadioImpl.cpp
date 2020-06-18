/**
  Concrete Implementation which will inherit RadioInterface.
  This will communicate with other packages to get info where appropriate.
*/
#include "RadioImpl.h"

using namespace std;

RadioImpl::RadioImpl() = default;
RadioImpl::~RadioImpl() = default;

int RadioImpl::getPostFlightData() {
    cout << "This is a summary of your post flight data..." << endl;
    RadioImpl::getRocketState();
    RadioImpl::getCurrentPos();
    RadioImpl::pollSensors();
    RadioImpl::pollServos();
    cout << "------------------------" << endl;
    return 0;
}

int RadioImpl::runDiagnostics() {
    cout << "Running Diagnostics..." << endl;
    RadioImpl::getRocketState();
    RadioImpl::getCurrentPos();
    RadioImpl::pollSensors();
    RadioImpl::pollServos();
    cout << "------------------------" << endl;
    return 0;
}

int RadioImpl::getInflightData() {
    cout << "Getting data at current time..." << endl;
    RadioImpl::getRocketState();
    RadioImpl::getCurrentPos();
    RadioImpl::pollSensors();
    RadioImpl::pollServos();
    cout << "------------------------" << endl;
    return 0;
}

int RadioImpl::pollSensors() {
    cout << "Calling Sensors."<< endl;
    return 0;
}

int RadioImpl::pollServos() {
    cout << "Calling Servos." << endl;
    return 0;
}

int RadioImpl::getCurrentPos() {
    cout << "Getting Current Pos." << endl;
    return 0;
}

int RadioImpl::getRocketState() {
    cout << "Getting Current Rocket State." << endl;
    return 0;
}
