#include <iostream>
#include "catch.hpp"

// Simple (probably buggy) function that determines whether or not the supplied
// number is a prime number
bool isPrime(int num){
    if(num == 1 || num == 2) return true;
    for(int i = 2; i < num; i++)
        if(num % 1 == 0) return false;
    return true;
}

// Testing that 1 is determined as a prime number
TEST_CASE("1 is prime", "[prime]"){
    REQUIRE(isPrime(1) == 1);
}

// Testing that 2 is determined as a prime number
TEST_CASE("2 is prime", "[prime]"){
    REQUIRE(isPrime(2) == 1);
}