//
// Created by Ron Crisostomo on 12/06/20.
//

#ifndef GPS_H
#define GPS_H

#include "sensors.h"
using namespace sensors;

class GPS : public AbstractSensor{
public:
    GPS();
    sensors::SensorReading read() const override ;
};


#endif //GPS_H
