#include <catch2/catch_test_macros.hpp>
#include "../src/factorial.h"

TEST_CASE("Factorial function works", "[factorial]") {
    REQUIRE(factorial(0) == 1);
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(2) == 2);
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(5) == 120);
    REQUIRE(factorial(-1) == 0); // By our definition above
}
