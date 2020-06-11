#ifndef GPS_H
#define GPS_H
#include "sensors.hh"

using namespace sensors;
using std::string;

class GPS : public sensors::AbstractSensor{
    public:
        GPS(string name);
        struct sensors::SensorReading read();
};

#endif // !GPS_H
