#ifndef SOFTWARE_PACKAGE_SRC_CONTROL_GUIDANCESYSTEM_H_
#define SOFTWARE_PACKAGE_SRC_CONTROL_GUIDANCESYSTEM_H_

/**
 * Describes the PID for the rocket.
**/
class GuidanceSystem {
 private:
    /**
     * Represents a position of the rocket.
    **/
    struct Position;

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
     * Default constructor
     * @param TODO (Likely none)
    **/
    GuidanceSystem();

    /**
     * Calculates a new position based off the latest readings
     * @param TODO
    **/
    void calculatePosition();

    /**
     * Calculates a new position based off the latest readings
     * @param TODO
    **/
    void updatePosition();

    /**
     * Gets the current position of the controller.
    **/
    Position getCurrentPosition();
};

#endif  // SOFTWARE_PACKAGE_SRC_CONTROL_GUIDANCESYSTEM_H_
