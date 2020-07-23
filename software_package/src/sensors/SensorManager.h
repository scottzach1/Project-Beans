//
// Created by Ron Crisostomo on 12/06/20.
//

#ifndef SOFTWARE_PACKAGE_SRC_SENSORS_SENSORMANAGER_H_
#define SOFTWARE_PACKAGE_SRC_SENSORS_SENSORMANAGER_H_

#include <string>
#include <vector>

#include "Battery.h"
#include "GPS.h"
#include "IMU.h"
#include "/sensors.h"

using std::string;
using std::vector;

namespace sensors {
class SensorManager {
 public:
  static const int NUM_SENSORS = 3;  // TODO(crisosron): Determine correct val

  /**
   * Entry point of SensorManager. This will perform any necessary setup for all
   * sensors
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

  inline Battery* getBatterySensor() const { return batterySensor; }

  inline IMU* getIMUSensor() const { return imuSensor; }

  inline GPS* getGPSSensor() const { return gpsSensor; }

 private:
  vector<AbstractSensor> sensors;

  // Note that these are pointers to AbstractSensor instances - This was done on
  // purpose to control when each sensor is initialized
  Battery* batterySensor;
  IMU* imuSensor;
  GPS* gpsSensor;
};
}  // namespace sensors
#endif  // SOFTWARE_PACKAGE_SRC_SENSORS_SENSORMANAGER_H_
