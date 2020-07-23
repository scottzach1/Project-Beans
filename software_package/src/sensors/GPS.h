//
// Created by Ron Crisostomo on 12/06/20.
//

#ifndef SOFTWARE_PACKAGE_SRC_SENSORS_GPS_H_
#define SOFTWARE_PACKAGE_SRC_SENSORS_GPS_H_
#include <string>
#include "/sensors.h"
using sensors::AbstractSensor;

class GPS : public AbstractSensor{
 public:
        explicit GPS(std::string sensorName);
        SensorReading read() const override;
};


#endif  // SOFTWARE_PACKAGE_SRC_SENSORS_GPS_H_
