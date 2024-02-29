#include "gtest/gtest.h"
#include "../src/fizz.h"
using namespace fizz;

TEST(FizzTesting, test1) {
    EXPECT_EQ(Fizz(2), "2");
}

TEST(FizzTesting, tesMult3) {
    EXPECT_EQ(Fizz(3), "Fizz");
}

TEST(FizzTesting, tesMult5) {
    EXPECT_EQ(Fizz(5), "Buzz");
}
TEST(FizzTesting, tesMult3and5) {
    EXPECT_EQ(Fizz(30), "FizzBuzz");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

