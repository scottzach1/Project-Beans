#include <iostream>
#include "Battery.h"
#include "IMU.h"
#include "GPS.h"
#include "SensorManager.h"

int main() {
    Battery batterySensor("batterySensor");
    IMU imuSensor("imuSensor");
    GPS gpsSensor("gpsSensor");
    return 0;
}
