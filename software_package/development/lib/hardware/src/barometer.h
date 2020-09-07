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
     * Reads the current pressure recorded by the barometer unit in Pascals.
     * @return - pressure in Pascals.
     **/
    float read_pressure_pascals();

    /**
     * Reads the current pressure recorded by the barometer unit in barometric
     * units.
     * @return - pressure in Bars.
     **/
    float read_pressure_bars();

    /**
     * Reads the current pressure recorded by the barometer unit in pounds per
     *square inch.
     * @return - pressure in PSI.
     **/
    float read_pressure_psi();

    /**
     * Reads the current acceleration in the y axis.
     * @return - altitude in Meters.
     **/
    float read_altitude();
};

#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_BAROMETER_H_
