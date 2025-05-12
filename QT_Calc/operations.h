#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <QObject>
#include <QWidget>
#include "floatnumber.h"
#include <iostream>
#include <QDebug>
#include <QString>
#include <string>

class operations
{
private:
    FloatNumber fnumber;
    QString operation;
    double lcdDisplayedNumber;
    double lastlcdDisplayedNumber;
    double constantIterator;
    bool isInOperation;
    bool isIterating;

public:
    //Comentários errados aqui!!
    void sum(); //Função deverá retornar o resultado da soma de 2 números
    void sub(); //Função deverá retornar o resultado da subtração de 2 números
    void division(); //Função deverá retornar o resultado da divisão de 2 números
    void mult(); //Função deverá retornar o resultado da multiplicação de 2 números

    void calculate();

    void verifyConcat(int n);

    double operateWithIteration(const std::string &operation);

    void clearOperationVariables();

    void setLcdDisplayNumber(double n);
    double getLcdDisplayNumber();

    void floatButton();

    operations(); //Construtor da classe
};

#endif // OPERATIONS_H
