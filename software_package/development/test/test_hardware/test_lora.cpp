#include "unity.h"

void setup(void) {
  // set up to perform before every test
}

void teardown(void) {
  // clean up to perform after every test
}

void test_send_packet(void) {
  // Send a packet and assert that it has been sent correctly
}

void test_receive_packet(void) {
  // Receive a packet from the base station and assert it has the correct
  // contents
}

int main() {
  // These tests are more of a 'pre-test' that verify that we are
  // correctly interfacing with the adafruit libraries for the
  // hardware package

  UNITY_BEGIN();
  RUN_TEST(test_send_packet);
  RUN_TEST(test_receive_packet);
  return UNITY_END();
}
