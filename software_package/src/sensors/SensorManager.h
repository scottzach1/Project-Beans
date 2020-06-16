//
// Created by Ron Crisostomo on 12/06/20.
//

#ifndef SENSORMANAGER_H
#define SENSORMANAGER_H

#include "sensors.h"
#include "Battery.h"
#include "IMU.h"
#include "GPS.h"

using std::string;
using std::vector;
namespace sensors {
    class SensorManager {
    public:
        static const int NUM_SENSORS = 3; //TODO:

        /**
         * Entry point of SensorManager. This will perform any necessary setup for all sensors
        */
        void initSensors();

        /**
         * Obtains the current reading on the battery sensor
         * @return A SensorReading structure instance with a timestamp and reading
         */
        SensorReading readBattery() const;

        /**
         * Obtains the current reading on the IMU sensor
         * @return A SensorReading instance with a timestamp and reading
         */
        SensorReading readIMU() const;

        /**
         * Obtains the current reading on the GPS sensor
         * @return A SensorReading instance with a timestamp and reading
         */
        SensorReading readGPS() const;

    private:
        vector<AbstractSensor> sensors;

        Battery * batterySensor;
        IMU * imuSensor;
        GPS * gpsSensor;

    };
}
#endif //SENSORMANAGER_H
