#include "sensors.hh"

namespace sensors{
    class GPS : public AbstractSensor{
        public:
            struct SensorReading read();

    };
}