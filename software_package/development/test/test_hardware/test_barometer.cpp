#include "unity.h"
#include "barometer.h"

// values found according to https://www.freemaptools.com/elevation-finder.htm
// currently based on Trentham Memorial Park launch site, this value will need to be changed if the launch site changes.
float realistic_height = 50.0;
// buffer for range is height is only an estimate, and barometer has been known to be inconsistent
float height_buffer = 40.0;


void setup(void) {
  // set up to perform before every test
  Barometer baro;
  baro::init();
}

void teardown(void) {
  // clean up to perform after every test
}

void test_read_altitude() {
  // Make sure that the altitude can be read, and is within the expected height boundary.
  float alt = baro::read_altitude();
  TEST_ASSERT_GREATER_OR_EQUAL(alt, (realistic_height - height_buffer));
  TEST_ASSERT_LESS_OR_EQUAL(alt, (realistic_height + height_buffer));
}

void test_read_pressure() {
  // Make sure that the pressure can be read
  float pressure_bars = baro::read_pressure_bars();
  float pressure_pascal = baro::read_pressure_pascal();
  float pressure_psi = baro::read_pressure_psi();
  UNITY_TEST_ASSERT_FLOAT_IS_NOT_NAN(pressure_bars);
  UNITY_TEST_ASSERT_FLOAT_IS_NOT_NAN(pressure_pascal);
  UNITY_TEST_ASSERT_FLOAT_IS_NOT_NAN(pressure_psi);
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