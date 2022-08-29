#include "Tax_Calculator.hpp"
#include <iostream>
//void TaxCalculator::calculatePartialTax(TaxScale tax)
//{
//	_tax += ((_incomeMinusThreshold * static_cast<double>(tax))/100.0);
//}
int TaxCalculator::getThreshold()
{
	int lastIndex = taxScalesAndTresholds.size() - 1;
	for (int i = 0; i < lastIndex; ++i)
	{
		if (_income < taxScalesAndTresholds[i].treshold)
		{
			return i;
		}
		if(_income == taxScalesAndTresholds[lastIndex].treshold)
		{
			return lastIndex;
		}
	}
}

 double TaxCalculator::calculateTax()
{
	setTaxableAmounts();
	int index = getThreshold();

	if (index == 0)
	{
		return _tax;
	}
	int i = 0;
		double podstawa = 0;
		for (i; i < index; ++i)
		{
			if (i >= 1)
			{
				_tax += (taxScalesAndTresholds[i].taxableAmount * taxScalesAndTresholds[i].taxscale)/100; 
			}
			podstawa += taxScalesAndTresholds[i].taxableAmount; // _tax = ((_income-10000) * 10) / 100;
		}
		
		_tax += ((_income - podstawa) * taxScalesAndTresholds[i].taxscale) / 100; // income above ?
		return _tax;
	
	return -1;
}



void TaxScalesAndTresholds::setTaxableAmounts()
{
	auto itPrevious = taxScalesAndTresholds.begin(); // 0
	for (auto it = taxScalesAndTresholds.begin(); it != taxScalesAndTresholds.end(); ++it)
	{
		if (it == taxScalesAndTresholds.begin())
		{
			(*it).taxableAmount = (*it).treshold - 0;
		}
		else 
		{
			(*it).taxableAmount = (*it).treshold - (*itPrevious).treshold;
			itPrevious++;
		}
	}
}
void TaxScalesAndTresholds::addThreshold(double threshold, double taxScale)
{
	TaxScale newThreshold = { threshold,taxScale };
	taxScalesAndTresholds.push_back(newThreshold);
	auto compare = [](TaxScale compA, TaxScale compB) {return compA.treshold < compB.treshold; };
	std::sort(taxScalesAndTresholds.begin(), taxScalesAndTresholds.end(), compare);
}

void TaxScalesAndTresholds::printThresholds() const
{
	for (auto x : taxScalesAndTresholds)
	{
		std::cout << x.treshold << ", ";
	}
}
//double TaxCalculator::calculateTax()
//{
//	setTaxableAmounts();
//	int index = getThreshold();
//
//	if (isIncomeBelowFirstThreshold())
//	{
//		return _tax;
//	}
//
//	if (isIncomeBelowSecondThreshold()) // 18 000
//	{
//		int index = 1;
//		_tax = ((_income - 10000) * 10) / 100;
//		return _tax;
//	}
//	if (isIncomeBelowThirdThreshold()) //89 000
//	{
//
//		_tax += (20000 * 10) / 100;
//		_tax += ((_income - 10000 - 20000) * 25) / 100;
//		return _tax;
//	}
//	if (isIncomeAboveThirdThreshold()) //256250
//	{
//		_tax += (20000 * 10) / 100; //2000
//		_tax += (90000 * 25) / 100; //22500
//		_tax += ((_income - 10000 - 20000 - 90000) * 40) / 100; //54500
//		return _tax;
//	}
//	return -1;
//}
//bool TaxCalculator::isIncomeBelowFirstThreshold()
//{
//	if (_income < taxScalesAndTresholds[0].treshold)
//		return true;
//	else
//		return false;
//}
//
//bool TaxCalculator::isIncomeBelowSecondThreshold()
//{
//	if (_income < taxScalesAndTresholds[1].treshold)
//	{
//		return true;
//	}
//	else
//		return false;
//}
//bool TaxCalculator::isIncomeBelowThirdThreshold()
//{
//	if (_income < taxScalesAndTresholds[2].treshold)
//	{
//		return true;
//	}
//	else
//		return false;
//}
//bool TaxCalculator::isIncomeAboveThirdThreshold()
//{
//	if (_income > taxScalesAndTresholds[3].treshold)
//	{
//		return true;
//	}
//	else
//		return false;
//}



//TaxScale& operator++(TaxScale& ts) // postfix operator
//{
//	switch (ts)
//	{
//	case TaxScale::_tax_0: return ts = TaxScale::_tax_10;
//		break;
//	case TaxScale::_tax_10: return ts = TaxScale::_tax_25;
//		break;
//	case TaxScale::_tax_25: return ts = TaxScale::_tax_40;
//		break;
//	case TaxScale::_tax_40: return ts = TaxScale::_tax_0;
//		break;
//	}
//}
//double TaxCalculator::calculateTax()
//{
//	TaxScale tax = TaxScale::_tax_0;
//	while (_income)
//	{
//		_income -= _firstThreshold;
//		_tax += ((_income * static_cast<double>(tax)) / 100.0);
//		tax++;
//	}
//	return _tax;
//}
//double TaxCalculator::calculateTax()
//{
//	for (auto it = taxScaleAndTreshold.begin(); it != taxScaleAndTreshold.end(); ++it)
//	{
//		double podstawaOpodatkowania = 0;
//		podstawaOpodatkowania = _income - (*it).treshold;
//		if (_income>0)
//		{
//			if ((*it).taxscale != 0)
//			{
//				_tax += (((*it).treshold * (*it).taxscale) / 100.0);
//			}
//		}
//	}
//	return _tax;
//}