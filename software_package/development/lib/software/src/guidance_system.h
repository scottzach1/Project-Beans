#ifndef SOFTWARE_PACKAGE_DEVELOPMENT_LIB_SOFTWARE_SRC_GUIDANCE_SYSTEM_H_
#define SOFTWARE_PACKAGE_DEVELOPMENT_LIB_SOFTWARE_SRC_GUIDANCE_SYSTEM_H_



/**
 *Library which handles interactions with the Lora.
**/
class GuidanceSystem {
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
