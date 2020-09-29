#ifndef SOFTWARE_PACKAGE_DEVELOPMENT_LIB_SOFTWARE_SRC_STATES_H_
#define SOFTWARE_PACKAGE_DEVELOPMENT_LIB_SOFTWARE_SRC_STATES_H_
/*These classes represent the different states the rocket can be in throughout
its life
 (Note - The initial state is 'LockedPhysicalState' but this is not represented
 in the software)

  - PreLaunchState - When the rocket enters this state, the rocket's hardware
 components are started and verified. The logging system is also started, as
 well as the guidance system. Exiting this state requires an approval signal
 from mission control that a launch will be executed

 - LockedMissionControlState - The rocket only progresses to this state when
physical safety interlocks are deactivated by the relevant stakeholders. The
rocket only moves out of this state when mission control green lights the flight
(the rocket will receive a signal from mission control to determine this)

- LaunchState - In this state, the components of the rocket (both hardware and
software) are triggered to start the ascent of the rocket. This state is exited
when all required launch actions and requirements are met.

- FlightState - The rocket enters this state automatically after the launch
state. The guidance system of the rocket is the bulk of the logic performed in
this state. Exiting this state is constituted by the criterion:
    - Barometer detects a decrease in air pressure AND accelerometer detects a
deceleration
- This state is exited when the parachute is deployed

- LandingState - This state consists of continuosly logging the rocket's status
and waiting for it to land.

- LandedState - Pretty self explanatory. This state means that the rocket has
landed and is awaiting retrieval by the stakeholders. The logger will continue
to log the GPS coordinates via LoRa to assist the stakeholders in locating the
rocket.
*/
class AbstractState {
 public:
  virtual void execute() = 0;
};

class PreLaunchState : public AbstractState {
 public:
  virtual void execute();
};

class LockedMissionControlState : public AbstractState {
 public:
  virtual void execute();
};

class LaunchState : public AbstractState {
 public:
  virtual void execute();
};

class FlightState : public AbstractState {
 public:
  virtual void execute();
};

class LandingState : public AbstractState {
 public:
  virtual void execute();
};

class LandedState : public AbstractState {
 public:
  virtual void execute();
};
#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_SOFTWARE_SRC_STATES_H_
