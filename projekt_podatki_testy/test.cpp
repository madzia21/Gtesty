#include "pch.h"
#include "../projekt_podatki/Tax_Calculator.hpp"

TEST(TaxCalculation, taxCalculation_InvalidIncomeInFirstThreshold_Minus1_ReturnsZero)
{
	TaxCalculator calculator(-1);
	EXPECT_DOUBLE_EQ(calculator.calculateTax(), 0);
}
TEST(TaxCalculation, taxCalculation_InvalidIncomeInFirstThreshold_10001_Returns01)
{
	TaxCalculator calculator(10001);
	EXPECT_DOUBLE_EQ(calculator.calculateTax(), 0.1);
}
TEST(TaxCalculation, taxCalculation_IncomeBelowFirstThreshold_ReturnsZero) 
{
	TaxCalculator calculator(9999);
    EXPECT_DOUBLE_EQ(calculator.calculateTax(), 0);
}
TEST(TaxCalculation, taxCalculation_IncomeBelowSecondThreshold)
{
	TaxCalculator calculator(29999);
	EXPECT_DOUBLE_EQ(calculator.calculateTax(), 1999.9);
}
TEST(TaxCalculation, taxCalculation_InvalidIncomeBelowSecondThreshold_b)
{
	TaxCalculator calculator(30000);
	EXPECT_DOUBLE_EQ(calculator.calculateTax(), 2000);
}
TEST(TaxCalculation, taxCalculation_IncomeBelowThirdThreshold)
{
	TaxCalculator calculator(119999);
	EXPECT_DOUBLE_EQ(calculator.calculateTax(), 24499.75);
}
TEST(TaxCalculation, taxCalculation_IncomeAboveThirdThreshold)
{
	TaxCalculator calculator(256250);
	EXPECT_DOUBLE_EQ(calculator.calculateTax(), 79000);
}
TEST(TaxCalculation, taxCalculation_newThreshold)
{
	TaxCalculator calculator(59999);
	EXPECT_DOUBLE_EQ(calculator.calculateTax(), 10999.7);
}