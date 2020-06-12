//
// Created by Ron Crisostomo on 12/06/20.
//

#ifndef BATTERY_H
#define BATTERY_H
#include "sensors.h"
using namespace sensors;

class Battery {
    public:
        Battery(std::string name);
        struct sensors::SensorReading read();
};


#endif //BATTERY_H
