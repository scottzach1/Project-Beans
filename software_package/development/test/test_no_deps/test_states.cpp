#include "state_machine.h"
#include "states.h"
#include "unity.h"
void setUp(void) {
  // set stuff up here
}

void tearDown(void) {
  // clean stuff up here
}

void test_init_state() {
  StateMachine sm;

  if (PreLaunchState* initialStateInstance =
          dynamic_cast<PreLaunchState*>(sm.currentState)) {
    TEST_PASS();
  }

  TEST_FAIL();
}

int main() {
  UNITY_BEGIN();
  RUN_TEST(test_init_state);
  return UNITY_END();
}
