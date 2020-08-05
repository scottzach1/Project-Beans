//
// Created by Ron Crisostomo on 12/06/20.
//

#ifndef SOFTWARE_PACKAGE_SRC_SENSORS_IMU_H_
#define SOFTWARE_PACKAGE_SRC_SENSORS_IMU_H_
#include <string>
#include "./sensors.h"
using sensors::AbstractSensor;
using sensors::SensorReading;

class IMU : public AbstractSensor{
 public:
        explicit IMU(std::string sensorName);
        SensorReading read() const override;
};


#endif  // SOFTWARE_PACKAGE_SRC_SENSORS_IMU_H_
