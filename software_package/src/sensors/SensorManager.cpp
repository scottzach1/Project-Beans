//
// Created by Ron Crisostomo on 12/06/20.
//

#include "SensorManager.h"
using namespace sensors;

void SensorManager::initSensors(){
    // TODO:
}

bool SensorManager::registerSensor(){
    // TODO:
}

SensorReading SensorManager::readSensor(std::string sensorName) const{
    // TODO:
}

SensorReading SensorManager::readSensor(AbstractSensor sensor) const{
    // TODO: Getting the error message: 'Parameter of abstract class type AbstractSensor is not allowed. AbstractSensor::read is a pure virtual function'
}
