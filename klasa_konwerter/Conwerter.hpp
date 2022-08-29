#pragma once


// numeric_limits cpp ref
// https://en.cppreference.com/w/cpp/types/numeric_limits


class Conwerter
{
private:
	double _celsius;
	double _farenheit;
	double _meter;
	double _feet;
	const double feetToMeterFactor = 3.281;
public:
	double celsiusToFarenheit(double celsius);
	double farenheitToCelsius(double farenheit);
};

