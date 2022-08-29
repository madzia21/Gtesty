#include "StringStatistics.hpp"
#include <algorithm>

size_t StringStatistics::getLettersNumber() const
{
    return _testedString.size();
}

int StringStatistics::getCyphersNumber() const
{
    // ,'6','7','8','9'
    int count = 0;
    auto findCypher = [&count](char c) {

        for (auto ch : { '0','1','2','3','4','5'})
        {
            if(c==ch)
            count++;
        }
    };
    std::for_each(_testedString.begin(), _testedString.end(), findCypher);
    return count;
}

int StringStatistics::getSpecialSignsNumber() const
{
    int count = 0;
    auto findSpecialSign= [&count](char c) {

        for (auto ch : { '#','*'})
        {
            if (c == ch)
                count++;
        }
    };
    std::for_each(_testedString.begin(), _testedString.end(), findSpecialSign);
    return count;
}
