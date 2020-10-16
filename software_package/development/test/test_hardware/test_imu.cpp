#include "imu.h"
#include "unity.h"

Imu imu;

void setup(void) {
  // set up to perform before every test
  imu.init();
}

void teardown(void) {
  // clean up to perform after every test
}

void test_read_quat_w(void) {
  // Attempt to read the w quat and assert that its a reasonable value
  imu.read_quat_w();
  TEST_ASSERT_EQUAL(1.0, imu.read_quat_w());
}

void test_read_quat_x(void) {
  // Attempt to read the x quat and assert that its a reasonable value
  imu.read_quat_x();
  TEST_ASSERT_EQUAL(1.0, imu.read_quat_x());
}

void test_read_quat_y(void) {
  // Attempt to read the y quat and assert that its a reasonable value
  imu.read_quat_y();
  TEST_ASSERT_EQUAL(1.0, imu.read_quat_y());
}

void test_read_quat_z(void) {
  // Attempt to read the x quat and assert that its a reasonable value
  imu.read_quat_z();
  TEST_ASSERT_EQUAL(1.0, imu.read_quat_z());
}

int main() {
  // These tests are more of a 'pre-test' that verify that we are
  // correctly interfacing with the adafruit libraries for the
  // hardware package
  UNITY_BEGIN();
  RUN_TEST(test_read_quat_w);
  RUN_TEST(test_read_quat_x);
  RUN_TEST(test_read_quat_y);
  RUN_TEST(test_read_quat_z);
  return UNITY_END();
}
