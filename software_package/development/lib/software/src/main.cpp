#include <iostream>
using std::cout;
using std::endl;

/*This enum represents the different states the rocket can be in throughout its
 life
 - LOCKED_PHYSICAL - This means that the rocket's physical safety interlocks are
 currently active .Progression to other states is impossible until these
 safety interlocks are deactivated

 - LOCKED_SOFTWARE - The rocket only progresses to this state when physical
 safety interlocks are deactivated by the relevant stakeholders. The rocket only
 moves out of this state when mission control green lights the flight (the
 rocket will receive a signal from mission control to determine this)

 - PRE_LAUNCH - When the rocket enters this state, the rocket's hardware
 components are started and verified. The logging system is also started, as
 well as the guidance system. Exiting this state requires the manual triggering
 of rocket's launch by a stakeholder

- LAUNCH - In this state, the components of the rocket (both hardware and
software) are triggered to start the ascent of the rocket. This state is exited
when all required launch actions and requirements are met.

- FLIGHT - The rocket enters this state automatically after the launch state.
The guidance system of the rocket is the bulk of the logic performed in this
state. Exiting this state is constituted by the criterion:
    - Barometer detects a decrease in air pressure AND accelerometer detects a
deceleration

- LANDING - This state consists of parachute deployment to ensure the rocket
lands safely.

- LANDED - Pretty self explanatory. This state means that the rocket has landed
and is awaiting retrieval by the stakeholders. The logger will continue to log
the GPS coordinates via LoRa to assist the stakeholders in locating the rocket.
*/
enum State {
  LOCKED_PHYSICAL,
  LOCKED_SOFTWARE,
  PRE_LAUNCH,
  LAUNCH,
  FLIGHT,
  LANDING,
  LANDED
};

int main(void) {
  State currentState = LOCKED_SOFTWARE;
  cout << currentState << endl;
}