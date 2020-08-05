#ifndef SOFTWARE_PACKAGE_SRC_COMMUNICATION_RADIO_RADIOINTERFACE_H_
#define SOFTWARE_PACKAGE_SRC_COMMUNICATION_RADIO_RADIOINTERFACE_H_

class RadioInterface {
 public:
    // constructor / destructor
    RadioInterface();

    ~RadioInterface();

    // methods
    virtual int runDiagnostics() = 0;

    virtual int getPostFlightData() = 0;

    virtual int getInflightData() = 0;
};

#endif  // SOFTWARE_PACKAGE_SRC_COMMUNICATION_RADIO_RADIOINTERFACE_H_
