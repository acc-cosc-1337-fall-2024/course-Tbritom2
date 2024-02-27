#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("factorial test") {
    (factorial(3), 6);
    (factorial(5), 120);
    (factorial(6), 720);
}

// Test cases for gcd function
TEST_CASE("gcd test") {
	(gcd(5, 15), 5);
    (gcd(21, 28), 7);
    (gcd(25, 100), 25);
}