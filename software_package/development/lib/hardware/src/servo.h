#ifndef SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_SERVO_H_
#define SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_SERVO_H_



/**
 *Library which handles interactions with the Lora.
**/
class Servo {
 public:
    /**
     * Constructor
    **/
    Servo();
    /**
     * Destructor
    **/
    ~Servo();

    /**
     * TODO(sargisfinl) - check names.
    **/
    void read_packet();

    /**
     * TODO(sargisfinl) - check names.
    **/
    void set_packet();
};

#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_SERVO_H_
