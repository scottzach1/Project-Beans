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
    sensors::SensorReading batteryVal = battery->read();
    TEST_ASSERT_EQUAL(batteryVal.value, 1000); //current hardcoded value in battery class
    delete battery;
}

void test2_manuallyCreatedGPS(){
    GPS *gps = new GPS("gName");
    sensors::SensorReading gpsVal = gps->read();
    TEST_ASSERT_EQUAL(gpsVal.value, 1000); //current hardcoded value in gps class
    delete gps;
}

void test3_manuallyCreatedIMU(){
    IMU *imu = new IMU("iName");
    sensors::SensorReading imuVal = imu->read();
    TEST_ASSERT_EQUAL(imuVal.value, 1000); //current hardcoded value in imu class
    delete imu;
}

void test4_sensorManager(){
    sensors::SensorManager sensorManager;
    sensorManager.initSensors();

    sensors::SensorReading batteryVal = sensorManager.readBattery();
    sensors::SensorReading imuVal = sensorManager.readIMU();
    sensors::SensorReading gpsVal = sensorManager.readGPS();

    //current hardcoded values
    TEST_ASSERT_EQUAL(batteryVal.value, 1000);
    TEST_ASSERT_EQUAL(gpsVal.value, 1000);
    TEST_ASSERT_EQUAL(imuVal.value, 1000);
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