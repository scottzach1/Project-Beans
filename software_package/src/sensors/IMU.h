//
// Created by Ron Crisostomo on 12/06/20.
//

#ifndef IMU_H
#define IMU_H

#include "sensors.h"
using namespace sensors;

class IMU : public AbstractSensor{
    public:
        IMU(std::string sensorName);
        SensorReading read() const override ;
};


#endif //IMU_H
