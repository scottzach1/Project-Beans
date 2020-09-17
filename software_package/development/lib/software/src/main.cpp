#include "state_machine.h"
#include "states.h"
int main(void) {
  StateMachine stateMachine;
  stateMachine.currentState->execute();
}