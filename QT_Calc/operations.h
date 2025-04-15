#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <QObject>
#include <QWidget>
#include <iostream>

class operations
{
private:
    double lcdDisplayedNumber;
public:
    double sum(); //Função deverá retornar o resultado da soma de 2 números
    double sub(); //Função deverá retornar o resultado da subtração de 2 números
    double division(); //Função deverá retornar o resultado da divisão de 2 números
    double mult(); //Função deverá retornar o resultado da multiplicação de 2 números
    void verifyConcat(int n);
    void setLcdDisplayNumber(double n);
    double getLcdDisplayNumber();
    operations(); //Construtor da classe
};

#endif // OPERATIONS_H
