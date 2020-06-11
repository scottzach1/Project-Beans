#include "sensors.hh"

namespace sensors{
    class Battery : public AbstractSensor{
        public:
            struct SensorReading read();

    };
}