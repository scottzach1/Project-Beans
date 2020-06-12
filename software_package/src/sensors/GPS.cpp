//
// Created by Ron Crisostomo on 12/06/20.
//

#include "GPS.h"
#include <iostream>

GPS::GPS(std::string name){
    std::cout << "Initializing GPS" << std::endl;

}

struct SensorReading GPS::read(){
    std::cout << "Called read() on GPS" << std::endl;
}