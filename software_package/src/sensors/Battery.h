//
// Created by Ron Crisostomo on 12/06/20.
//

#ifndef BATTERY_H
#define BATTERY_H
#include "sensors.h"
using namespace sensors;

class Battery : public AbstractSensor{
    public:
        Battery(std::string sensorName);
        SensorReading read() const override ;
};


#endif //BATTERY_H
