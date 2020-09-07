#include "unity.h"

void setup(void) {
  // set up to perform before every test
}

void teardown(void) {
  // clean up to perform after every test
}

void testDeploy() {}

int main() {
  UNITY_BEGIN();
  RUN_TEST(testDeploy);
  return UNITY_END();
}