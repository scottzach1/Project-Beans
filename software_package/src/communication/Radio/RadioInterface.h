#ifndef RADIOINTERFACE_H
#define RADIOINTERFACE_H

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

#endif  // RADIOINTERFACE_H
