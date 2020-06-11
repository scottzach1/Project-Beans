#include "sensors.hh"

namespace sensors{
    class IMU : public AbstractSensor{
        public:
            struct SensorReading read();

    };
}