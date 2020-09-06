#ifndef SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_BAROMETER_H_
#define SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_BAROMETER_H_

#include <Adafruit_MPL3115A2.h>

#include <iostream>
#include <limits>

/**
 *Library which handles interactions with the Barometer.
 **/
class Barometer {
   private:
    Adafruit_MPL3115A2 baro;

   public:
    /**
     * Different possible pessure units.
     **/
    enum PressureUnit { pascal, bar, psi };

    /**
     * Constructor
     **/
    Barometer();
    /**
     * Destructor
     **/
    ~Barometer();

    /**
     * Initialise the barometer unit.
     **/
    void init();

    /**
     * Reads the current pressure recorded by the barometer unit.
     * @return - pressure in Pascals.
     **/
    float read_pressure(PressureUnit);

    /**
     * Reads the current acceleration in the y axis.
     * @return - altitude in Meters.
     **/
    float read_altitude();
};

#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_BAROMETER_H_
