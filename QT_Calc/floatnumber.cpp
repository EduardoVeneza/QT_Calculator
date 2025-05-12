#include "floatnumber.h"

FloatNumber::FloatNumber()
{
    this->currentFloatNumber = 0;
}

FloatNumber::FloatNumber(double currentFloatNumber)
{
    this->currentFloatNumber = currentFloatNumber;
}

double FloatNumber::getCFloatNumberurrentFloatNumber()
{
    return this->currentFloatNumber;
}

void FloatNumber::setCurrentFloatNumber(double currentFloatNumber)
{
    this->currentFloatNumber = currentFloatNumber;
}

