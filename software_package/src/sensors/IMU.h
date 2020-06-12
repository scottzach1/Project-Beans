//
// Created by Ron Crisostomo on 12/06/20.
//

#ifndef IMU_H
#define IMU_H

#include "sensors.h"
using namespace sensors;

class IMU {
public:
    IMU(std::string name);
    struct sensors::SensorReading read();
};


#endif //IMU_H
