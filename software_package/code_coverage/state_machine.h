#ifndef SOFTWARE_PACKAGE_DEVELOPMENT_LIB_SOFTWARE_SRC_STATE_MACHINE_H_
#define SOFTWARE_PACKAGE_DEVELOPMENT_LIB_SOFTWARE_SRC_STATE_MACHINE_H_

#include "./states.h"

class StateMachine {
 public:
  void setState(AbstractState* newState);
  AbstractState* currentState = new PreLaunchState();
  void execute();
};
#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_SOFTWARE_SRC_STATE_MACHINE_H_
