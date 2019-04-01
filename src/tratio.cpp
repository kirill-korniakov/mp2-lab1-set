// Реализация класс рационального числа

#include "tratio.h"
#include <string>

TRatio::TRatio(int num, int den)
{
    if (den == 0)
        throw std::string("Error: can't give zero as denominator!");

    this->num = num;
    this->den = den;
}

int TRatio::GetNumerator()
{
    return num;
}

int TRatio::GetDenominator()
{
    return den;
}
