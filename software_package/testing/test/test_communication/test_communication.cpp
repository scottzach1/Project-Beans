// #include <Logging/LogDB.h>
// #include <Logging/Logger.h>
// #include <Logging/SDCard.h>
// #include <Radio/RadioImpl.h>
// #include <Radio/RadioInterface.h>

#include <iostream>
#include <string>
#include <unity.h>

#ifdef UNIT_TEST

const int TEST_AMOUNT = 3;

void testOutput(){
    /*
        Test failed at line: Unity.CurrentTestLineNumber 
        Test failed in file: Unity.CurrentTestLineNumber
        Full Details:        Unity.CurrentDetail1
    */
}


void test1(){
    TEST_ASSERT_TRUE(false);
}

void test2(){
    TEST_ASSERT_TRUE(true);
    testOutput();
}

void test3(){
    TEST_ASSERT_EQUAL(1,1);
}


int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test1);
    RUN_TEST(test2);
    RUN_TEST(test3);
    return UNITY_END();
}

#endif //UNIT_TEST
