#include "operations.h"

operations::operations()
{
    this->lcdDisplayedNumber = 0;
}

double operations::getLcdDisplayNumber()
{
    return this->lcdDisplayedNumber;
}

void operations::verifyConcat(int n)
{
    switch (n)
    {
    case 1:
        if(this->getLcdDisplayNumber() == 0){
            this->setLcdDisplayNumber(1);
        } else {
            this->setLcdDisplayNumber((this->getLcdDisplayNumber() * 10) + 1);
        }
        break;
    case 2:
        if(this->getLcdDisplayNumber() == 0){
            this->setLcdDisplayNumber(2);
        } else {
            this->setLcdDisplayNumber((this->getLcdDisplayNumber() * 10) + 2);
        }
        break;
    case 3:
        if(this->getLcdDisplayNumber() == 0){
            this->setLcdDisplayNumber(3);
        } else {
            this->setLcdDisplayNumber((this->getLcdDisplayNumber() * 10) + 3);
        }
        break;
    case 4:
        if(this->getLcdDisplayNumber() == 0){
            this->setLcdDisplayNumber(4);
        } else {
            this->setLcdDisplayNumber((this->getLcdDisplayNumber() * 10) + 4);
        }
        break;
    case 5:
        if(this->getLcdDisplayNumber() == 0){
            this->setLcdDisplayNumber(5);
        } else {
            this->setLcdDisplayNumber((this->getLcdDisplayNumber() * 10) + 5);
        }
        break;
    case 6:
        if(this->getLcdDisplayNumber() == 0){
            this->setLcdDisplayNumber(6);
        } else {
            this->setLcdDisplayNumber((this->getLcdDisplayNumber() * 10) + 6);
        }
        break;
    case 7:
        if(this->getLcdDisplayNumber() == 0){
            this->setLcdDisplayNumber(7);
        } else {
            this->setLcdDisplayNumber((this->getLcdDisplayNumber() * 10) + 7);
        }
        break;
    case 8:
        if(this->getLcdDisplayNumber() == 0){
            this->setLcdDisplayNumber(8);
        } else {
            this->setLcdDisplayNumber((this->getLcdDisplayNumber() * 10) + 8);
        }
        break;
    case 9:
        if(this->getLcdDisplayNumber() == 0){
            this->setLcdDisplayNumber(9);
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
