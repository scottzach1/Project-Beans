#include <Gimbal.h>
#include <GuidanceSystem.h>
#include <Lander.h>
#include <Parachute.h>
#include <Servo.h>
#include <unity.h>

#include <iostream>
#include <sstream>

#ifdef UNIT_TEST

std::string printPosition(GuidanceSystem::Position position) {
    std::ostringstream stream;
    // Concatenate values
    stream << "(" << position.longitude << ", " << position.latitude << ", "
           << position.altitude << ")";
    return stream.str();
}

void test_guidance_system() {
    // Guidance System
    std::cout << "Beginning Test 'Guidance System'" << std::endl;

    std::cout << "Creating GuidanceSystem" << std::endl;
    GuidanceSystem *guidance = new GuidanceSystem();

    for (int16_t i = 0; i < 12; ++i) {
        GuidanceSystem::Position position = guidance->getCurrentPosition();
        std::cout << "Position " << i << ": " << printPosition(position)
                  << std::endl;
        guidance->updatePosition();
    }

    GuidanceSystem::Position position = guidance->getCurrentPosition();
    std::cout << "Final Position " << printPosition(position) << std::endl;
    TEST_ASSERT_EQUAL(position.altitude, 1);
    TEST_ASSERT_EQUAL(position.longitude, 1);
    TEST_ASSERT_EQUAL(position.latitude, 1);

    delete guidance;

    // TEST_ASSERT_EQUAL(50, 50);
    std::cout << "Finished Test 'Guidance System'" << std::endl;
}

void test_lander() {
    std::cout << std::endl << "Beginning Test 'Lander'" << std::endl;
    GuidanceSystem::Position *position = (GuidanceSystem::Position *)malloc(
        sizeof(struct GuidanceSystem::Position));

    // Lander
    std::cout << "Creating Lander:" << std::endl;
    Lander *lander = new Lander();
    std::cout << "Lander Created" << std::endl;

    lander->isSafeToDeploy(*position);
    position->altitude = 51;
    lander->isSafeToDeploy(*position);

    TEST_ASSERT_EQUAL(position->altitude, 51);
    TEST_ASSERT_EQUAL(position->longitude, 0);
    TEST_ASSERT_EQUAL(position->latitude, 0);

    delete lander;

    std::cout << "Finished Test 'Lander'" << std::endl;
}

void test_gimbal() {
    std::cout << std::endl << "Beginning Test 'Gimbal'" << std::endl;
    // Gimbal
    std::cout << "Creating Gimbal:" << std::endl;
    Gimbal *gimbal = new Gimbal();

    int16_t num_servos = gimbal->getNumServos();
    std::cout << "Number of servos" << num_servos << std::endl;
    for (int16_t i = 0; i < num_servos; ++i) {
        int16_t servo_reading = gimbal->readServo(i);
        std::cout << "Value: " << servo_reading << std::endl;
        TEST_ASSERT_EQUAL(servo_reading, 0);
    }
    delete gimbal;

    std::cout << "Finished Test 'Gimbal'" << std::endl << std::endl;
}

void process() {
    std::cout << std::endl;
    // delay(2000);    // for Arduino framework (fails on desktop)
    // wait(2);        // for Framework (fails on desktop)
    UNITY_BEGIN();  // these sleeps may need tweaking!
    test_guidance_system();
    test_lander();
    test_gimbal();

    UNITY_END();
}

#ifdef ARDUINO

#include <Arduino.h>
void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    process();
}

void loop() {}

#else

int main(int argc, char **argv) {
    process();
    return 0;
}

#endif  // ARDUINO

#endif  // UNIT_TEST
