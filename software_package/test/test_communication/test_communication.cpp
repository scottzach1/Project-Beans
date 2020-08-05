#include <Logging/LogDB.h>
#include <Logging/Logger.h>
#include <Logging/SDCard.h>
#include <Radio/RadioImpl.h>
#include <Radio/RadioInterface.h>

#include <iostream>
#include <string>
#include <unity.h>

#ifdef UNIT_TEST

const int TEST_AMOUNT = 3;

void test1_loggerCreation(){
    // Logger *logger = new Logger();
    TEST_ASSERT_TRUE(true);
}

void test2(){
    TEST_ASSERT_TRUE(true);
}

void test3(){
    TEST_ASSERT_EQUAL(1,1);
}


int main(void) {
    UNITY_BEGIN();
    // RUN_TEST(test1);
    RUN_TEST(test2);
    RUN_TEST(test3);
    return UNITY_END();
}

#endif //UNIT_TEST
