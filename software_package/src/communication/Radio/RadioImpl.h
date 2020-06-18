#ifndef RADIOIMPL_H
#define RADIOIMPL_H

#include "RadioInterface.h"

class RadioImpl : RadioInterface {
public:
    //constructor / destructor
    RadioImpl();
    ~RadioImpl();

    //fields

    //inherited methods
    int runDiagnostics() override;
    int getPostFlightData() override;
    int getInflightData() override;


private:
    int pollSensors();
    int pollServos();
    int getCurrentPos();
    int getRocketState();

};

#endif //RADIOIMPL_H
