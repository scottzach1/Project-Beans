//
// Created by Ron Crisostomo on 12/06/20.
//

#ifndef SOFTWARE_PACKAGE_SRC_SENSORS_BATTERY_H_
#define SOFTWARE_PACKAGE_SRC_SENSORS_BATTERY_H_
#include <string>
#include "/sensors.h"
using sensors::AbstractSensor;

class Battery : public AbstractSensor{
 public:
        explicit Battery(std::string sensorName);
        SensorReading read() const override;
};


#endif  // SOFTWARE_PACKAGE_SRC_SENSORS_BATTERY_H_
