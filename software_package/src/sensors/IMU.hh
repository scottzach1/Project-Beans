#ifndef IMU_H
#define IMU_H
#include "sensors.hh"

using namespace sensors;
using std::string;

class IMU : public sensors::AbstractSensor{
    public:
        IMU(string name);
        struct sensors::SensorReading read();
};

#endif // !IMU_H
