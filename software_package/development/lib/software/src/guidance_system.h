#ifndef SOFTWARE_PACKAGE_DEVELOPMENT_LIB_SOFTWARE_SRC_GUIDANCE_SYSTEM_H_
#define SOFTWARE_PACKAGE_DEVELOPMENT_LIB_SOFTWARE_SRC_GUIDANCE_SYSTEM_H_

#include "Arduino.h"
#include "servo.h"

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

        PID() = default;
        ~PID() = default;
        void add_servo(Servo *s);
        void step_pid();
        int8_t santize_value(float input);
        boolean error();
    };

 private:
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
     **/
    void step_pid();

    /**
     * Call to launch the parachute.
     * TODO(sargisfinl) - State changes.
     **/
    void launch_parachute();
};

#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_SOFTWARE_SRC_GUIDANCE_SYSTEM_H_
