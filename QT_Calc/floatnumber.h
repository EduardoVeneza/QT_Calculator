#ifndef FLOATNUMBER_H
#define FLOATNUMBER_H

#include <QObject>
#include <QDebug>
#include <iostream>
#include <cmath>

class FloatNumber
{
private:
    double currentFloatNumber;
    double decimalPart;
    double integerPart;
public:
    FloatNumber();
    FloatNumber(double currentFloatNumber);

    double getCFloatNumberurrentFloatNumber();
    void setCurrentFloatNumber(double currentFloatNumber);

    double getDecimalPart();
    double getIntegerPart();

    void separateParts();
};

#endif // FLOATNUMBER_H
