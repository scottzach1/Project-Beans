#include <iostream>
#include "Logging/LogDB.cpp"
#include "Logging/Logger.cpp"
#include "Logging/SDCard.cpp"
#include "Radio/RadioImpl.cpp"
#include "Radio/RadioInterface.cpp"



int main() {
    //test RadioImpl
    RadioImpl radio = RadioImpl();
    radio.runDiagnostics();
    radio.getInflightData();
    radio.getPostFlightData();

    return 0;
}
