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
- This state is exited when the parachute is deployed

- LANDING - This state consists of continuosly logging the rocket's status and
waiting for it to land.

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
  while (true) {
    if (currentState == LOCKED_SOFTWARE) {
      cout << "LOCKED_SOFTWARE state active - Awaiting green light signal from "
              "mission control"
           << endl;
      currentState = PRE_LAUNCH;
    }

    if (currentState == PRE_LAUNCH) {
      cout << "Initializing hardware and software systems..." << endl;
      // ...
      currentState = LAUNCH;
    }

    if (currentState == LAUNCH) {
      cout << "Triggering Launch" << endl;
      currentState = FLIGHT;
    }

    if (currentState == FLIGHT) {
      cout << "In Flight..." << endl;
      // ...
      cout << "Deploying Parachute" << endl;
      currentState = LANDING;
    }

    if (currentState == LANDING) {
      cout << "Parachutes deployed, rocket descending" << endl;
      currentState == LANDED;
    }

    if (currentState == LANDED) {
      cout << "Rocket landed at GSP coords: ... " << endl;
      break;
    }
  }
}