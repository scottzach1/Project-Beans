#include "sensors.hh"
namespace sensors{
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
            // SensorReading readSensor(AbstractSensor sensor) const;

        private:
            std::vector<AbstractSensor> sensors;

    };
}