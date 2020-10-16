#ifndef LIB_SOFTWARE_SRC_STATE_MACHINE_H_
#define LIB_SOFTWARE_SRC_STATE_MACHINE_H_

#include "./states.h"

class StateMachine {
 public:
  void setState(AbstractState* newState);
  AbstractState* currentState = new PreLaunchState();
  void execute();
};
#endif  // LIB_SOFTWARE_SRC_STATE_MACHINE_H_
