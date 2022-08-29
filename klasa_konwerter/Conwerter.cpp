#include "Conwerter.hpp"

double Conwerter::celsiusToFarenheit(double celsius)
{
    return (celsius *9/5) + 32;
}

double Conwerter::farenheitToCelsius(double farenheit)
{
    return (farenheit - 32) * 9/5;
}
