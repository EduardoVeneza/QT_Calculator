#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <QObject>
#include <QWidget>
#include <iostream>
#include <QDebug>
#include <QString>
#include <string>

class operations
{
private:
    double lcdDisplayedNumber;
    double lastlcdDisplayedNumber;
    QString operation;
    bool isInOperation;

public:
    void sum(); //Função deverá retornar o resultado da soma de 2 números
    void sub(); //Função deverá retornar o resultado da subtração de 2 números
    void division(); //Função deverá retornar o resultado da divisão de 2 números
    void mult(); //Função deverá retornar o resultado da multiplicação de 2 números

    double calculate();

    void verifyConcat(int n);

    void setLcdDisplayNumber(double n);
    double getLcdDisplayNumber();

    operations(); //Construtor da classe
};

#endif // OPERATIONS_H
