#include "unity.h"

void setup(void) {
  // set up to perform before every test
}

void teardown(void) {
  // clean up to perform after every test
}

void test_valid_log_format() {
  // Try to log and make sure it has the correct format
}

void test_log_to_sd() {
  // Try to log to the SD card and assert that it worked
}

void test_log_to_lora() {
  // Try to log via radio and assert that it worked
}

void test_multiple_logs_sd() {
  // Log a certain number of times and make sure that it all works
}

void test_multiple_logs_lora() {
  // Log a certain number of times via LoRa and assert that it all worked
}

void test_log_timestamp() {
  // Set a timestamp, send a log event, and make sure that the timestamp is
  // correct?
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_valid_log_format);
  RUN_TEST(test_log_to_sd);
  RUN_TEST(test_log_to_lora);
  RUN_TEST(test_multiple_logs_sd);
  RUN_TEST(test_multiple_logs_lora);
  RUN_TEST(test_log_timestamp);
  return UNITY_END();
}
