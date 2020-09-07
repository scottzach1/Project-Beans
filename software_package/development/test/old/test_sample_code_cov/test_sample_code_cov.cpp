#include "unity.h"
#include "basic_math_ops.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}


void testAdd(){
    TEST_ASSERT_EQUAL(2, add(1, 1));

}

void testSub(){
    TEST_ASSERT_EQUAL(0, sub(1, 1));
}

int main(){
    UNITY_BEGIN();
    RUN_TEST(testAdd);
    RUN_TEST(testSub);
    return UNITY_END();
}