#include "unity.h"

void setUp(void) {
  // set stuff up here - This is performed before every unit test
}

void tearDown(void) {
  // clean stuff up here - This is performed after every unit test
}

void unit_test_1() {
  // Perform test
}

// Add more unit tests as necessary

int main() {
  UNITY_BEGIN();

  // Execute tests
  RUN_TEST(unit_test_1);

  return UNITY_END();
}
