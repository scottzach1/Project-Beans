
#include "barometer.h"

Barometer::Barometer() = default;
Barometer::~Barometer() = default;

void Barometer::init() {
  Serial.println("Initializing Barometer...");

  while (!baro.begin()) delay(10);

  Serial.println("Barometer initialization done.");
}

float Barometer::read_pressure_bars() { return baro.getPressure() * 0.00001; }

float Barometer::read_pressure_pascals() { return baro.getPressure(); }

float Barometer::read_pressure_psi() {
  return baro.getPressure() * 0.0001450377;
}

/**
 * This is reading the wrong value (-44.94m at Uni), but code hasn't changed.
 **/
float Barometer::read_altitude() { return baro.getAltitude(); }
