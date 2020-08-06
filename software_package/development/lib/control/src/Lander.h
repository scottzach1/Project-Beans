#ifndef SOFTWARE_PACKAGE_DEVELOPMENT_LIB_CONTROL_SRC_LANDER_H_
#define SOFTWARE_PACKAGE_DEVELOPMENT_LIB_CONTROL_SRC_LANDER_H_

#include "Parachute.h"
#include "GuidanceSystem.h"

#include <iostream>
#include <limits>

/**
 * Handles landing of the rocket.
**/
class Lander {
 public:
    /**
     * Represents a trajectory of the rocket.
    **/
    struct Trajectory {
      // 3 Dimensional Axis
      float x = std::numeric_limits<float>::signaling_NaN();
      float y = std::numeric_limits<float>::signaling_NaN();
      float z = std::numeric_limits<float>::signaling_NaN();
      // Speed
      float s = std::numeric_limits<float>::signaling_NaN();
    };

 private:
    /**
     * The current trajectory of the rocket.
    **/
    struct Trajectory current_trajectory;

    /**
     * Represents the parachute.
    **/
    Parachute parachute;

 public:
    /**
     * Constructor
    **/
    Lander();

    /**
     * Destructor
    **/
    ~Lander();

    /**
     * Calculates if it is safe to deploy the parachute.
     * @param position of the rocket.
     * @param TODO(ALL): Decide what other parameters to use.
     * @return bool true if safe, false otherwise
    **/
    bool isSafeToDeploy(GuidanceSystem::Position position);

    /**
     * Attemps to deploy the parachute.
     * @throw TODO(ALL): On failure.
    **/
    void deployParachute();
};

#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_CONTROL_SRC_LANDER_H_
