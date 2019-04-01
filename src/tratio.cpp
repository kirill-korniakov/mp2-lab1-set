// Реализация класс рационального числа

#include "tratio.h"

TRatio::TRatio(int num, int den)
{
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
