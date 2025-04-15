#include "operations.h"

operations::operations()
{
    this->lcdDisplayedNumber = 0;
    this->lastlcdDisplayedNumber = 0;
    this->operation = "nulloperation";
    this->isInOperation = false;
}

double operations::getLcdDisplayNumber()
{
    return this->lcdDisplayedNumber;
}

void operations::sum()
{
    this->operation = "sum";
    this->lastlcdDisplayedNumber = this->lcdDisplayedNumber;
    this->isInOperation = true;
    qDebug() << "Operation set: " << this->operation;
}

void operations::sub()
{
    this->operation = "sub";
    this->lastlcdDisplayedNumber = this->lcdDisplayedNumber;
    this->isInOperation = true;
    qDebug() << "Operation set: " << this->operation;
}

void operations::division()
{
    this->operation = "division";
    this->lastlcdDisplayedNumber = this->lcdDisplayedNumber;
    this->isInOperation = true;
    qDebug() << "Operation set: " << this->operation;
}

void operations::mult()
{
    this->operation = "mult";
    this->lastlcdDisplayedNumber = this->lcdDisplayedNumber;
    this->isInOperation = true;
    qDebug() << "Operation set: " << this->operation;
}

void operations::calculate()
{
    double result = 0;
    std::string operationStd = this->operation.toStdString();

    if(operationStd == "sum"){
        result = this->lastlcdDisplayedNumber + this->lcdDisplayedNumber;
    }
    else if(operationStd == "sub")
    {
        result = this->lastlcdDisplayedNumber - this->lcdDisplayedNumber;
    }
    else if(operationStd == "mult")
    {
        result = this->lastlcdDisplayedNumber * this->lcdDisplayedNumber;
    }
    else if(operationStd == "division")
    {
        result = this->lastlcdDisplayedNumber / this->lcdDisplayedNumber;
    } else {
        qDebug() << "Invalid operation";
    }

    this->lastlcdDisplayedNumber = this->lcdDisplayedNumber;
    this->lcdDisplayedNumber = result;
}

void operations::verifyConcat(int n)
{
    switch (n)
    {
    case 1:
        if(this->getLcdDisplayNumber() == 0 || this->isInOperation){
            this->setLcdDisplayNumber(1);
            this->isInOperation = false;
        } else {
            this->setLcdDisplayNumber((this->getLcdDisplayNumber() * 10) + 1);
        }
        break;
    case 2:
        if(this->getLcdDisplayNumber() == 0 || this->isInOperation){
            this->setLcdDisplayNumber(2);
            this->isInOperation = false;
        } else {
            this->setLcdDisplayNumber((this->getLcdDisplayNumber() * 10) + 2);
        }
        break;
    case 3:
        if(this->getLcdDisplayNumber() == 0 || this->isInOperation){
            this->setLcdDisplayNumber(3);
            this->isInOperation = false;
        } else {
            this->setLcdDisplayNumber((this->getLcdDisplayNumber() * 10) + 3);
        }
        break;
    case 4:
        if(this->getLcdDisplayNumber() == 0 || this->isInOperation){
            this->setLcdDisplayNumber(4);
            this->isInOperation = false;
        } else {
            this->setLcdDisplayNumber((this->getLcdDisplayNumber() * 10) + 4);
        }
        break;
    case 5:
        if(this->getLcdDisplayNumber() == 0 || this->isInOperation){
            this->setLcdDisplayNumber(5);
            this->isInOperation = false;
        } else {
            this->setLcdDisplayNumber((this->getLcdDisplayNumber() * 10) + 5);
        }
        break;
    case 6:
        if(this->getLcdDisplayNumber() == 0 || this->isInOperation){
            qDebug() << "entrou no if";
            this->setLcdDisplayNumber(6);
            this->isInOperation = false;
        } else {
            this->setLcdDisplayNumber((this->getLcdDisplayNumber() * 10) + 6);
        }
        break;
    case 7:
        if(this->getLcdDisplayNumber() == 0 || this->isInOperation){
            this->setLcdDisplayNumber(7);
            this->isInOperation = false;
        } else {
            this->setLcdDisplayNumber((this->getLcdDisplayNumber() * 10) + 7);
        }
        break;
    case 8:
        if(this->getLcdDisplayNumber() == 0 || this->isInOperation){
            this->setLcdDisplayNumber(8);
            this->isInOperation = false;
        } else {
            this->setLcdDisplayNumber((this->getLcdDisplayNumber() * 10) + 8);
        }
        break;
    case 9:
        if(this->getLcdDisplayNumber() == 0 || this->isInOperation){
            this->setLcdDisplayNumber(9);
            this->isInOperation = false;
        } else {
            this->setLcdDisplayNumber((this->getLcdDisplayNumber() * 10) + 9);
        }
        break;
    case 0:
        this->setLcdDisplayNumber(this->getLcdDisplayNumber() * 10);
        break;
    default:
        break;
    }
}

void operations::setLcdDisplayNumber(double n)
{
    this->lcdDisplayedNumber = n;
}
