#include "imu.h"
#include "unity.h"

void setup(void) {
  // set up to perform before every test
}

void teardown(void) {
  // clean up to perform after every test
}

void test_read_accl_x(void) {
  // Attempt to read the x accl and assert that its a reasonable value
  Imu imu;
  TEST_ASSERT_EQUAL(1.0, imu.read_accl_x());
}

void test_read_accl_y(void) {
  // Attempt to read the y accl and assert that its a reasonable value
  Imu imu;
  TEST_ASSERT_EQUAL(1.0, imu.read_accl_y());
}

void test_read_accl_z(void) {
  // Attempt to read the z accl and assert that its a reasonable value
}

void test_read_gyro_x(void) {
  // Attempt to read the x coord and assert that its a reasonable value
}

void test_read_gyro_y(void) {
  // Attempt to read the y coord and assert that its a reasonable value
}

void test_read_gyro_z(void) {
  // Attempt to read the z coord and assert that its a reasonable value
}

int main() {
  // These tests are more of a 'pre-test' that verify that we are
  // correctly interfacing with the adafruit libraries for the
  // hardware package
  UNITY_BEGIN();
  RUN_TEST(test_read_accl_x);
  RUN_TEST(test_read_accl_y);
  RUN_TEST(test_read_accl_z);
  RUN_TEST(test_read_gyro_x);
  RUN_TEST(test_read_gyro_y);
  RUN_TEST(test_read_gyro_z);
  return UNITY_END();
}