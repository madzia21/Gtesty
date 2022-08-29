#pragma once
#include <string>


//Zadanie 7
//Napisz klasę StringStatistics, która:
//-przechowuje stringa dla którego wylicy różne statystyki :
//-ilosc liter
//- ilosc cyfr
//- ilosc znakow specjlanych

class StringStatistics
{
private:
	std::string _testedString;
public:
	StringStatistics() = delete;
	StringStatistics(std::string testedString) : _testedString(testedString) {};
	size_t getLettersNumber() const;
	int getCyphersNumber() const;
	int getSpecialSignsNumber() const;
};

