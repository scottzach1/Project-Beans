#ifndef SOFTWARE_PACKAGE_SRC_COMMUNICATION_RADIO_RADIOIMPL_H_
#define SOFTWARE_PACKAGE_SRC_COMMUNICATION_RADIO_RADIOIMPL_H_

#include "RadioInterface.h"

class RadioImpl : RadioInterface {
 public:
    // constructor / destructor
    RadioImpl();
    ~RadioImpl();

    // fields

    // inherited methods
    int runDiagnostics() override;
    int getPostFlightData() override;
    int getInflightData() override;

 private:
    static int pollSensors();
    static int pollServos();
    static int getCurrentPos();
    static int getRocketState();
};

#endif  // SOFTWARE_PACKAGE_SRC_COMMUNICATION_RADIO_RADIOIMPL_H_
