//
// Created by Ron Crisostomo on 12/06/20.
//

#ifndef GPS_H
#define GPS_H

#include "sensors.h"
using namespace sensors;

class GPS {
public:
    GPS(std::string name);
    struct sensors::SensorReading read();
};


#endif //GPS_H
