#include "floatnumber.h"

FloatNumber::FloatNumber()
{
    this->decimalPart = 0.0;
    this->currentFloatNumber = 0;
    this->integerPart = 0;
}

//Constructor that receives a previous number, then separes the integer part from the decimal part
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
    this->separateParts(); // Separate the decimal and the integer part

    qDebug() << "Integer part (EXPECTED 3): " << this->integerPart;
    qDebug() << "Decimal part (EXPECTED 0.14)" << this->decimalPart;
}

double FloatNumber::getDecimalPart()
{
    return this->decimalPart;
}

double FloatNumber::getIntegerPart()
{
    return this->integerPart;
}

void FloatNumber::separateParts()
{
    this->decimalPart = modf(this->currentFloatNumber, &integerPart);
}

