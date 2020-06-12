//
// Created by Ron Crisostomo on 12/06/20.
//

#include "IMU.h"
#include <iostream>

IMU::IMU(std::string name){
    std::cout << "Initializing IMU" << std::endl;

}

struct SensorReading IMU::read(){
    std::cout << "Called read() on IMU" << std::endl;
}