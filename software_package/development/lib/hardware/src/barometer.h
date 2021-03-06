#ifndef LIB_HARDWARE_SRC_BAROMETER_H_
#define LIB_HARDWARE_SRC_BAROMETER_H_

#include <Adafruit_MPL3115A2.h>

#include <iostream>
#include <limits>

/**
 *Library which handles interactions with the Barometer.
 **/
class Barometer {
 private:
  Adafruit_MPL3115A2 baro;
  int16_t offset;

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
   *
   * Note: This is non-deterministic!
   *
   * @return - pressure in Pascals.
   **/
  float read_pressure_pascals();

  /**
   * Reads the current pressure recorded by the barometer unit in barometric
   * units.
   *
   * Note: This is non-deterministic!
   *
   * @return - pressure in Bars.
   **/
  float read_pressure_bars();

  /**
   * Reads the current pressure recorded by the barometer unit in pounds per
   *square inch.
   * 
   * Note: This is non-deterministic!
   * 
   * @return - pressure in PSI.
   **/
  float read_pressure_psi();

  /**
   * Reads the current acceleration in the y axis.
   * 
   * Note: This is non-deterministic!
   * 
   * @return - altitude in Meters.
   **/
  float read_altitude();
};

#endif  // LIB_HARDWARE_SRC_BAROMETER_H_
