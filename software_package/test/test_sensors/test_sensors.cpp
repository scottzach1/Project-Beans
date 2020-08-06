#include <Battery.h>
#include <GPS.h>
#include <IMU.h>
#include <SensorManager.h>
#include <sensors.h>

#include <iostream>
#include <string>
#include <unity.h>

#ifdef UNIT_TEST

void test1(){

}


int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test1);

    return UNITY_END();
}

#endif //UNIT_TEST