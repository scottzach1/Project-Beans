#include "state_machine.h"

void StateMachine::execute() { currentState->execute(); }

void StateMachine::setState(AbstractState* newState) {
  currentState = newState;
}
