#ifndef SOFTWARE_PACKAGE_DEVELOPMENT_LIB_SOFTWARE_SRC_GUIDANCE_SYSTEM_H_
#define SOFTWARE_PACKAGE_DEVELOPMENT_LIB_SOFTWARE_SRC_GUIDANCE_SYSTEM_H_

#include "Arduino.h"
#include "servo.h"
#include "imu.h"
#include "parachute.h"

/**
 *Library which handles interactions with the Lora.
 **/
class GuidanceSystem {
    class PID {
     private:
        uint32_t timestamp = millis();
        float previous_error = 0;
        float cumulative_error = 0;
        Servo *servo;

     public:
        const float TARGET_ANGLE = -90;
        const float P = 0.5;
        const float I = 0.5;
        const float D = 0.5;
        const float LIMIT = 45;

        /**
         * Constructor / Destructors
        **/
        PID() = default;
        ~PID() = default;
        /**
         * Adds servo to PID post initialization.
        **/
        void add_servo(Servo *s);
        /**
         * Implementation of a PID isolated to the control of a single servo.
         * This will represent a single axis of the gimbal.
         * @param axis_angle: The angle from the latest readings.
        **/
        bool step_pid(float axis_angle);
        /**
         * Converts the arbitrary value from the PID into a value safe to
         * control the servo.
        **/
        int8_t santize_value(float input);
    };

 private:
    Imu imu;
    Parachute parachute;

    Servo servo_x;
    Servo servo_y;

    PID pid_x;
    PID pid_y;

 public:
    /**
     * Constructor
     **/
    GuidanceSystem();

    /**
     * Destructor
     **/
    ~GuidanceSystem();

    /**
     * Step through the pid controller once.
     * @return bool: true if under control, false if in critical state.
     **/
    bool step_pid();

    /**
     * Call to launch the parachute.
     * TODO(sargisfinl) - State changes.
     **/
    void launch_parachute();
};

#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_SOFTWARE_SRC_GUIDANCE_SYSTEM_H_
