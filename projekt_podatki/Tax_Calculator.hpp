#pragma once
#include <vector>
#include <algorithm>

//Zadanie 8
//Klasa TaxCalculator
//- metoda która wyliczy kwotę progresywnego podatku dla podanej wartości :
//*poniżej 10000 - 0 % podatku
//* 10000 - 30000 - 10 % podatku od kwoty ponad 10000
//* 30000 - 120000 - 25 % podatku od kwoty ponad 30000
//* powyżej 120000 - 40 % podatku od kwoty ponad 120000
//
//przykłady :
//	kwota->podatek
//	8000 -> 0
//	18000 -> 800 (0.0 x 10000 + 0.10 * 8000)
//	256250 -> 79000 (0.0 × 10000 + 0.10 × 20000 + 0.25 × 90000 + 0.40 × 136250)
//
//	2000 + 22500 + 54 500
//	0 % -> 10000
//	10 % -> 20000
//	25 % -> 90000
//	40 % -> 136250
//
//	(Dla chętnych 1) zrób tak aby można było zmieniać wysokości podatków i progów
//	(Dla chętncyh 2) dodaj możliwość dodawania i usuwania progów
//enum class TaxScale
//{
//	_tax_0 = 0,
//	_tax_10 = 10,
//	_tax_25 = 25,
//	_tax_40 = 40
//};
// 
//class TaxThreshold
//{
//protected:
//	int _firstThreshold = 10000;
//	int _secondThreshold = 30000;
//	int _thirdThreshold = 120000;
//};
struct TaxScale
{
	double treshold;
	double taxscale;
	double taxableAmount;
};
class TaxScalesAndTresholds
{
public:
	std::vector<TaxScale> taxScalesAndTresholds = {
		{10000,0}, // 10000 - 0 = 10000
		{30000,10}, // 30000 - 10000 = 20 000
		{120000,25},  // 120000 -30000 = 90 000
		{120000,40}  // x - 120 000 = y
	};
public:
	void setTaxableAmounts();
	void addThreshold(double threshold, double taxScale);
	void printThresholds() const;
};
class TaxCalculator : public TaxScalesAndTresholds
{
protected:
	double _income;
	double _tax;
	
public:
	TaxCalculator(double income) : _income(income), _tax(0) {};
	double calculateTax();
	//bool isIncomeBelowFirstThreshold();
	//bool isIncomeBelowSecondThreshold();
	//bool isIncomeBelowThirdThreshold();
	//bool isIncomeAboveThirdThreshold();
	int getThreshold();
	//void calculatePartialTax(TaxScale tax);
};

