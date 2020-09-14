#include "guidance_system.h"
#include "limits"


GuidanceSystem::GuidanceSystem() {
    servo_x = Servo();  // pass required args.
    servo_y = Servo();  // pass required args.

    pid_x.add_servo(&servo_x);
    pid_y.add_servo(&servo_y);
}

GuidanceSystem::~GuidanceSystem() {
    delete &servo_x;
    delete &servo_y;

    delete &pid_x;
    delete &pid_y;
}

void GuidanceSystem::step_pid() {
    pid_x.step_pid();
}

void GuidanceSystem::launch_parachute() {
    Serial.printf("TODO: launch parachute!");
}


void GuidanceSystem::PID::add_servo(Servo *s) {
    servo = s;
}

void GuidanceSystem::PID::step_pid() {
    // TODO(scottzach1): Switch with new Servo method once established.
    // float angle = servo->read_val();
    float angle = std::numeric_limits<float>::signaling_NaN();
    // Time
    uint32_t current_time = millis();
    uint32_t elapsed_time = current_time - timestamp;
    // Calculate PID
    // P
    float current_error = TARGET_ANGLE - angle;
    // I
    cumulative_error += current_error * elapsed_time;
    // D
    float derivative_error = (current_error - previous_error) / elapsed_time;

    // Generate output.
    float result =
        (P * current_error) + (I * cumulative_error) + (D * derivative_error);
    previous_error = current_error;

    // Transform to safe motor output.
    result = santize_value(result);

    // Update the servo (function missing).
    // if (servo) servo->set_val(result);
}

int8_t GuidanceSystem::PID::santize_value(float input) {
    // TODO(scottzach1): Perform sanitisation of PID output, that is readable
    // by the rocket. Should output within range '-128 < output 128'.
    return (int8_t) input;
}