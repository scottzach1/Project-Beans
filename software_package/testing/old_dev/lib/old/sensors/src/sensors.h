//
// Created by Ron Crisostomo on 12/06/20.
//

#ifndef SOFTWARE_PACKAGE_SRC_SENSORS_SENSORS_H_
#define SOFTWARE_PACKAGE_SRC_SENSORS_SENSORS_H_

#include <ctime>
#include <string>
#include <vector>

namespace sensors {

struct SensorReading {
  time_t timestamp;
  int value;
};

class AbstractSensor {
 public:
  /**
   * Reads the value of the given sensor and returns it. Used for sending the
   * sensor reading.
   * @return A SensorReading structure
   */
  virtual SensorReading read() const {
    // FIXME: Intended to be a pure virtual function (eg virtual SensorReading
    // read() const = 0), but getting a weird error about this function not
    // being implemented in a derived class....
    return SensorReading{};
  }

  inline std::string getName() const { return name; }
  inline std::vector<SensorReading> getSensorReadings() { return readings; }

  /**
   * Associates a SensorReading to this AbstractSensor
   */
  void addReading(SensorReading reading) { readings.push_back(reading); }

 protected:
  std::string name;
  std::vector<SensorReading> readings;
};
}  // namespace sensors

#endif  // SOFTWARE_PACKAGE_SRC_SENSORS_SENSORS_H_
