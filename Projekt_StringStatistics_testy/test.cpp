#include "pch.h"
#include "../projekt_stringStatistics/StringStatistics.hpp"

TEST(TestCaseName, testlettersNumber) {
	StringStatistics testedString("lala");
	size_t result = 4;
	EXPECT_EQ(testedString.getLettersNumber(), result);
}
TEST(TestCaseName, testCyphersNumber) {
	StringStatistics testedString("a1b2c3d4e5f6");
	int result = 6;
	EXPECT_EQ(testedString.getCyphersNumber(), result);
}
TEST(TestCaseName, testSpecialSignsNumber) {
	StringStatistics testedString("a#b**");
	int result = 2;
	EXPECT_EQ(testedString.getSpecialSignsNumber(), result);
}