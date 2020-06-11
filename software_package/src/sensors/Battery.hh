#ifndef Battery_H
#define Battery_H
#include "sensors.hh"

using namespace sensors;
using std::string;

class Battery : public sensors::AbstractSensor{
    public:
        Battery(string name);
        struct sensors::SensorReading read();
};

#endif // !Battery_H
