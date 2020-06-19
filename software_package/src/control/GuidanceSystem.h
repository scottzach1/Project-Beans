#ifndef SOFTWARE_PACKAGE_SRC_CONTROL_GUIDANCESYSTEM_H_
#define SOFTWARE_PACKAGE_SRC_CONTROL_GUIDANCESYSTEM_H_

#include <iostream>
#include <limits>

/**
 * Describes the PID for the rocket.
**/
class GuidanceSystem {
 public:
    /**
     * Represents a position of the rocket.
    **/
    struct Position {
      // Defaults to illegal values.
      float longitude = std::numeric_limits<float>::signaling_NaN();
      float latitude = std::numeric_limits<float>::signaling_NaN();
      float altitude = std::numeric_limits<float>::signaling_NaN();
    };

 private:
    /**
     * The latest calculated position of the rocket.
    **/
    struct Position current_position;

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
     * Calculates a new position based off the latest readings
     * @param TODO(ALL): Decide what parameters to use.
    **/
    Position calculatePosition();

    /**
     * Calculates a new position based off the latest readings
     * @param TODO(ALL): Decide what parameters to use.
    **/
    void updatePosition();

    /**
     * Gets the current position of the controller.
    **/
    Position getCurrentPosition();
};

#endif  // SOFTWARE_PACKAGE_SRC_CONTROL_GUIDANCESYSTEM_H_
