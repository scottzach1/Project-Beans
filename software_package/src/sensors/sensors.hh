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

        private:
            std::string name;
            std::vector<SensorReading> readings;
    };

    class SensorManager{
        public:
            static const int NUM_SENSORS = 5; //TODO:

            /**
             * Associates a sensor to this SensorManager instance
             * @return true if the sensor registration was succesful
            */
            bool registerSensor();

            /**
             * Entry point of SensorManager. This will perform any necessary setup for all sensors
            */
            void initSensors();
            
            /**
             * Obtains a SensorReading instance of the sensor with the given name
             * @param sensorName Name of the sensor to read the value of
             * @return A SensorReading structure instance
            */
            SensorReading readSensor(std::string sensorName) const;

            /**
             * Obtains a SensorReading instance of the sensor associated with the given AbstractSensor instance
             * This serves as an alternative way of obtaining a sensor reading from a given sensor (see sensors::SensorManager::readSensor(std::string))
             * @return a SensorReading structure instance
            */
            SensorReading readSensor(AbstractSensor sensor) const;

        private:
            std::vector<AbstractSensor> sensors;

    };
}