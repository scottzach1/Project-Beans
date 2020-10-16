#include "guidance_pid.h"

#include <limits>

#include "debug.h"

GuidanceSystemPID::GuidanceSystemPID() {
  DEBUG_MSG_LN(1, 'GuidanceSystemPID has not been implemented yet!');
  servo_x = Servo();  // pass required args.
  servo_y = Servo();  // pass required args.

  pid_x.add_servo(&servo_x);
  pid_y.add_servo(&servo_y);
}

// Call default destructors on fields.
GuidanceSystemPID::~GuidanceSystemPID() = default;

bool GuidanceSystemPID::step_pid() {
  //   // Control x axis.
  //   float x_angle = imu.read_gyro_x();
  //   bool x_status = pid_x.step_pid(x_angle);
  //   // Control y axis.
  //   float y_angle = imu.read_gyro_y();
  //   bool y_status = pid_y.step_pid(y_angle);

  //   bool isSafe = (x_status && y_status);

  //   if (!isSafe) {
  //     // Critical state encountered, launch parachute.
  //     launch_parachute();
  //   }

  //   // Notify sender of PID state (true if safe, false if critical).
  //   return isSafe;
  return false;
}

void GuidanceSystemPID::launch_parachute() {
  DEBUG_MSG_LN(1, "Parachute Launched!");
  parachute.ignite();
}

void GuidanceSystemPID::PID::add_servo(Servo *s) { servo = s; }

bool GuidanceSystemPID::PID::step_pid(float axis_angle) {
  //   // TODO(scottzach1): Switch with new Servo method once established.
  //   float servo_angle = std::numeric_limits<float>::signaling_NaN();
  //   // float servo_angle = servo->read_val();

  //   // Time
  //   uint32_t current_time = millis();
  //   uint32_t elapsed_time = current_time - timestamp;
  //   // Calculate PID
  //   // P (proportional error - error in current state).
  //   float current_error = TARGET_ANGLE - axis_angle;
  //   // I (integral error - error in relation to time since last adjustment).
  //   cumulative_error += current_error * elapsed_time;
  //   // D (derivative error - considers not error but its rate of change).
  //   float derivative_error = (current_error - previous_error) / elapsed_time;

  //   // Generate output.
  //   float result =
  //       (P * current_error) + (I * cumulative_error) + (D *
  //       derivative_error);
  //   previous_error = current_error;

  //   // Transform to safe motor output.
  //   result = santize_value(result);

  //   // Update the servo (function missing).
  //   // if (servo) servo->set_val(result);

  //   // Notify sender of PID state (true if safe, false if critical).
  //   return (-LIMIT < result && result < LIMIT);
  return false;
}

int8_t GuidanceSystemPID::PID::santize_value(float input) {
  // TODO(scottzach1): Perform sanitisation of PID output, that is readable
  // by the rocket. Should output within range '-128 < output 128'.
  //   return (int8_t)input;
  return std::numeric_limits<float>::signaling_NaN();
}
