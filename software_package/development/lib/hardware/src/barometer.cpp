
#include "barometer.h"

Barometer::Barometer() = default;
Barometer::~Barometer() = default;

void Barometer::init() {
    Serial.println("Initializing Barometer...");

    while (!baro.begin()) delay(10);

    Serial.println("Barometer initialization done.");
}

float Barometer::read_pressure(PressureUnit unit) {
    float pascals = baro.getPressure();

    switch (unit) {
        case pascal:
            return pascals;
        case bar:
            return pascals * 0.00001;
        case psi:
            return pascals * 0.0001450377;
    }
    return std::numeric_limits<float_t>::signaling_NaN();
}

float Barometer::read_altitude() {
    return baro.getAltitude();
}
