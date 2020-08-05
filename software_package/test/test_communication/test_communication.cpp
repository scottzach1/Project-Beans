#include <Logging/LogDB.h>
#include <Logging/Logger.h>
#include <Logging/SDCard.h>
#include <Radio/RadioImpl.h>
#include <Radio/RadioInterface.h>

#include <iostream>
#include <string>
#include <unity.h>

#ifdef UNIT_TEST

/**
 * Temp method for current static issue
 */
int resetDB(LogDB* logDB){
    for(int i = 0; i < 10; i++){
        logDB->databaseStore[i] = nullptr;
    }
    return 1;
}

// TODO(sargisfinl) - determine if termination verification is something we want to do

void test1_packageInit(){
    LogDB *logDb = new LogDB();
    logDb->printData();
    logDb->writeToSD();
    Logger *logger = new Logger(logDb);
    logger->readSensor();
    logger->readData();
    SDCard *sdCard = new SDCard();
    sdCard->readSensor();
    sdCard->readData();
    TEST_ASSERT_TRUE(true);

    //clear test data
    resetDB(logDb);
    delete logger;
    delete sdCard;
    delete logDb;
}

void test2_loggerWrite(){
    LogDB *logDb = new LogDB();
    Logger *logger = new Logger(logDb);
    char* testData = (char*)"test string";
    logger->storeData(testData);

    //verify test
    char** storedData = logDb->getDatabaseStore();
    TEST_ASSERT_EQUAL(storedData[0], "test string");

    //clear test data
    resetDB(logDb);
    delete logger;
    delete logDb;
}

void test3_loggerWriteMulti(){
    LogDB *logDb = new LogDB();
    Logger *logger = new Logger(logDb);
    char* testData1 = (char*)"test string0";
    char* testData2 = (char*)"test string1";
    char* testData3 = (char*)"test string2";
    char* testData4 = (char*)"test string3";
    logger->storeData(testData1);
    logger->storeData(testData2);
    logger->storeData(testData3);
    logger->storeData(testData4);

    //verify test
    char** storedData = logDb->getDatabaseStore();
    TEST_ASSERT_EQUAL(storedData[0], "test string0");
    TEST_ASSERT_EQUAL(storedData[1], "test string1");
    TEST_ASSERT_EQUAL(storedData[2], "test string2");
    TEST_ASSERT_EQUAL(storedData[3], "test string3");

    //clear test data
    resetDB(logDb);
    delete logger;
    delete logDb;
}

void test4_sdWrite(){
    LogDB *logDb = new LogDB();
    SDCard *sdCard = new SDCard(logDb);
    char* testData = (char*)"a random test string";
    sdCard->storeData(testData);

    //verify test
    char** storedData = logDb->getDatabaseStore();
    TEST_ASSERT_EQUAL(storedData[0], "a random test string");

    //clear test data
    resetDB(logDb);
    delete sdCard;
    delete logDb;
}

void test5_sdWriteMulti(){
    LogDB *logDb = new LogDB();
    SDCard *sdCard = new SDCard(logDb);
    char* testData1 = (char*)"sd1";
    char* testData2 = (char*)"sd12";
    char* testData3 = (char*)"sd123";
    sdCard->storeData(testData1);
    sdCard->storeData(testData2);
    sdCard->storeData(testData3);

    //verify test
    char** storedData = logDb->getDatabaseStore();
    TEST_ASSERT_EQUAL(storedData[0], "sd1");
    TEST_ASSERT_EQUAL(storedData[1], "sd12");
    TEST_ASSERT_EQUAL(storedData[2], "sd123");

    //clear test data
    resetDB(logDb);
    delete sdCard;
    delete logDb;
}


int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test1_packageInit);
    RUN_TEST(test2_loggerWrite);
    RUN_TEST(test3_loggerWriteMulti);
    RUN_TEST(test4_sdWrite);
    RUN_TEST(test5_sdWriteMulti);
    return UNITY_END();
}

#endif //UNIT_TEST
