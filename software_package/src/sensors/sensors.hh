#ifndef sensors_h
#define sensors_h

#include <time.h>
#include <vector>
#include <string>

namespace sensors{

    struct SensorReading{
        time_t timestamp;
        int value; 
    };

    class AbstractSensor{
        public:

            /**
             * Reads the value of the given sensor and returns it. Used for sending the sensor reading.
             * @return A SensorReading structure
            */
            virtual struct SensorReading read() = 0;

        protected:
            std::string name;
            std::vector<SensorReading> readings;
    };
}

#endif // !sensors_h