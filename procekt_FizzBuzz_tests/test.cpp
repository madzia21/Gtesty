#include "pch.h"
#include "../project_FizzBuzz/FizzBuzz.hpp"
//1 -> "1"
//2 -> "2"
//3 -> "Fizz"
//4 -> "4"
//5 -> "Buzz"
//6 -> "Fizz"
//...
//15 -> "FizzBuzz"
TEST(TestCaseName, TestName) 
{
	FizzBuzz object;
	EXPECT_EQ(object.fizzBuzz(1), "1");
	EXPECT_EQ(object.fizzBuzz(2), "2");
	EXPECT_EQ(object.fizzBuzz(3), "Fizz");
	EXPECT_EQ(object.fizzBuzz(4), "4");
	EXPECT_EQ(object.fizzBuzz(5), "Buzz");
	EXPECT_EQ(object.fizzBuzz(6), "Fizz");
	EXPECT_EQ(object.fizzBuzz(15), "FizzBuzz");
}