#include "unity.h"

void setup(void) {
  // set up to perform before every test
}

void teardown(void) {
  // clean up to perform after every test
}

void test_read_altitude() {
  // Make sure that the altitude can be read
}

void test_read_pressure() {
  // Make sure that the pressure can be read
}

int main() {
  // These tests are more of a 'pre-test' that verify that we are
  // correctly interfacing with the adafruit libraries for the
  // hardware package
  UNITY_BEGIN();
  RUN_TEST(test_read_altitude);
  RUN_TEST(test_read_pressure);
  return UNITY_END();
}