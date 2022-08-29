// projekt_podatki.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Tax_Calculator.hpp"
int main()
{
    //TaxScale tax = TaxScale::_tax_10;
    ////tax = static_cast<TaxScale>(tax + 1);
    //TaxScale t = ++tax;
    //std::cout << tax;
    TaxScalesAndTresholds a;
    a.addThreshold(60000, 30);
    a.printThresholds();
    //a.setTaxableAmounts();
    //std::cout << a.taxScalesAndTresholds[0].taxableAmount;
    //TaxCalculator calculator(119999);
    //calculator.calculateTax(); // , 24499.75);
}