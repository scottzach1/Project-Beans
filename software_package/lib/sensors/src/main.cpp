#include <iostream>
#include "SensorManager.h"
#include "assert.h"
#include <ctime>
#include <unistd.h>
using namespace sensors;

using std::cout;
using std::endl;


void printReadings(SensorManager sensorManager, AbstractSensor * sensor, int numReadingsToDisplay){

    // Displaying some readings samples
    cout << "---------------------------- Displaying " << numReadingsToDisplay << " readings for " << sensor->getName() << "----------------------------" << endl;
    for(int i = 0; i < numReadingsToDisplay; i++) {
        SensorReading sensorReading = sensor -> getSensorReadings()[i];
        cout << sensor -> getName() << " reading - timestamp: " << std::ctime(&(sensorReading.timestamp)) << " value: " << sensorReading.value << endl;
    }
}

int main() {
    SensorManager sensorManager;
    sensorManager.initSensors();

    int numReads = 50;

    // Performing numReads reads on each sensor
    cout << "Performing " << numReads << " on each sensor" << endl;
    for(int i = 0; i < numReads; i++){
        sensorManager.readBattery();
        sensorManager.readIMU();
        sensorManager.readGPS();
        usleep(250000); // Sleep for 1/4 second
    }

    // Checking that reads were performed
    cout << "Asserting all read values are stored by each sensor " << endl;
    assert(sensorManager.getBatterySensor() -> getSensorReadings().size() == numReads);
    assert(sensorManager.getIMUSensor() -> getSensorReadings().size() == numReads);
    assert(sensorManager.getGPSSensor() -> getSensorReadings().size() == numReads);
    cout << "Assertions passed " << endl;

    // Displaying some readings samples
    int numReadingsToDisplay = 10;
    printReadings(sensorManager, sensorManager.getBatterySensor(), numReadingsToDisplay);
    printReadings(sensorManager, sensorManager.getIMUSensor(), numReadingsToDisplay);
    printReadings(sensorManager, sensorManager.getGPSSensor(), numReadingsToDisplay);
    
    return 0;
}
