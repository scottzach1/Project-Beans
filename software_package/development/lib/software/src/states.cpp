#include "states.h"

#include "debug.h"

void PreLaunchState::execute() {
  // This comes before LOCKED_MISSION_CONTROL since we need to setup LoRa
  // to enable the rocket to communicate with the base station and mission
  // control.

  // if(allActionsCompleted && verified) break;
  // else {abort = true; break;}
  DEBUG_MSG_LN(1, "Executing PreLaunch state");
}

void LockedMissionControlState::execute() {
  // Wait for signal from mission control
  // if(greenLight) break;
  // else {abort = true; break;}
  DEBUG_MSG_LN(1, "Executing LockedMissionControlState state");
}

void LaunchState::execute() {
  // Perform all launch actions
  // Logging begins

  // if(!launch actions completed succesfully) break;
  DEBUG_MSG_LN(1, "Executing LaunchState state");
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
  DEBUG_MSG_LN(1, "Executing FlightState state");
}

void LandingState::execute() {
  // Only thing happening here is that the rocket continues to log
  // if(AGL ~ ground level) break;
  DEBUG_MSG_LN(1, "Executing LandingState state");
}

void LandedState::execute() {
  // Keep logging GPS coords
  DEBUG_MSG_LN(1, "Executing LandedState state");
}
