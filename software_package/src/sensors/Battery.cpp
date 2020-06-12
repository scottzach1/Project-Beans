//
// Created by Ron Crisostomo on 12/06/20.
//

#include "Battery.h"
#include <iostream>

Battery::Battery(std::string name){
    std::cout << "Initializing Battery" << std::endl;

}

struct SensorReading Battery::read(){
    std::cout << "Called read() on battery" << std::endl;
}