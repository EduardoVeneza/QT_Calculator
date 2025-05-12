#ifndef FLOATNUMBER_H
#define FLOATNUMBER_H

#include <QObject>

class FloatNumber
{
private:
    double currentFloatNumber;
public:
    FloatNumber();
    FloatNumber(double currentFloatNumber);
    double getCFloatNumberurrentFloatNumber();
    void setCurrentFloatNumber(double currentFloatNumber);
};

#endif // FLOATNUMBER_H
