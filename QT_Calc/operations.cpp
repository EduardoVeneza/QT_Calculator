#include "operations.h"

operations::operations()
{
    this->lcdDisplayedNumber = 0;
}

double operations::getLcdDisplayNumber()
{
    return this->lcdDisplayedNumber;
}

void operations::setLcdDisplayNumber(double n)
{
    this->lcdDisplayedNumber = n;
}
