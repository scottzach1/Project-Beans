#include <Battery.h>
#include <GPS.h>
#include <IMU.h>
#include <SensorManager.h>
#include <sensors.h>

#include <iostream>
#include <string>
#include <unity.h>

#ifdef UNIT_TEST

void test1_manuallyCreatedBattery(){
    Battery *battery = new Battery("bName");
    battery->read();
    delete battery;
}

void test2_manuallyCreatedGPS(){
    GPS *gps = new GPS("gName");
    gps->read();
    delete gps;
}

void test3_manuallyCreatedIMU(){
    IMU *imu = new IMU("iName");
    imu->read();
    delete imu;
}




int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test1_manuallyCreatedBattery);
    RUN_TEST(test2_manuallyCreatedGPS);
    RUN_TEST(test3_manuallyCreatedIMU);
    RUN_TEST(test4_sensorManager);

    return UNITY_END();
}

#endif //UNIT_TEST