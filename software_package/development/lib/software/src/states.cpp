#include "states.h"

#include <iostream>

using std::cout;
using std::endl;

void PreLaunchState::execute() {
  // This comes before LOCKED_MISSION_CONTROL since we need to setup LoRa
  // to enable the rocket to communicate with the base station and mission
  // control.

  // if(allActionsCompleted && verified) break;
  // else {abort = true; break;}
  cout << "Executing PreLaunch state" << endl;
}

void LockedMissionControlState::execute() {
  // Wait for signal from mission control
  // if(greenLight) break;
  // else {abort = true; break;}
  cout << "Executing LockedMissionControlState state" << endl;
}

void LaunchState::execute() {
  // Perform all launch actions
  // Logging begins

  // if(!launch actions completed succesfully) break;
  cout << "Executing LaunchState state" << endl;
}

void FlightState::execute() {
  // PID stuff happens here to keep rocket under control during flight
  // constantly check barometer and accelerometer for pressure and
  // acceleration readings respectively. Deploy parachutes when criteria are
  // met.

  // if(something tragic happens) kill thrust, deploy parachute, break;

  // if(decreasing_air_pressure && deceleration) {
  // deployParachute(); break;
  // }
  cout << "Executing FlightState state" << endl;
}

void LandingState::execute() {
  // Only thing happening here is that the rocket continues to log
  // if(AGL ~ ground level) break;
  cout << "Executing LandingState state" << endl;
}

void LandedState::execute() {
  // Keep logging GPS coords

  cout << "Executing LandedState state" << endl;
}
