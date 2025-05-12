#include "operations.h"

operations::operations()
{
    this->lcdDisplayedNumber = 0;
    this->lastlcdDisplayedNumber = 0;
    this->operation = "nulloperation";
    this->isInOperation = false;
    this->isIterating = false;
    this->constantIterator = 0;
}

//Simple get
double operations::getLcdDisplayNumber()
{
    return this->lcdDisplayedNumber;
}

//Holds the interaction with "fnumber" object
void operations::floatButton()
{
    qDebug() << "FloatButton pressed";
    this->lcdDisplayedNumber = this->lastlcdDisplayedNumber;


}

//sets the operation to "sum"
void operations::sum()
{
    this->operation = "sum";
    this->lastlcdDisplayedNumber = this->lcdDisplayedNumber;
    this->isInOperation = true;
    qDebug() << "Operation set: " << this->operation;
    fnumber.setCurrentFloatNumber(3.14);
}

//sets the operation to "sub"
void operations::sub()
{

    this->operation = "sub";
    this->lastlcdDisplayedNumber = this->lcdDisplayedNumber;
    this->isInOperation = true;
    qDebug() << "Operation set: " << this->operation;
}

//sets the operation to "division"
void operations::division()
{

    this->operation = "division";
    this->lastlcdDisplayedNumber = this->lcdDisplayedNumber;
    this->isInOperation = true;
    qDebug() << "Operation set: " << this->operation;
}

//sets the operation to "mult"
void operations::mult()
{

    this->operation = "mult";
    this->lastlcdDisplayedNumber = this->lcdDisplayedNumber;
    this->isInOperation = true;
    qDebug() << "Operation set: " << this->operation;
}

//calculate the result of (lastDisplyedNumber) "operation that is already set" (current displayed number)
//and than shows the result in the LCD display
void operations::calculate()
{
    //It's used to store the constant iterator ONLY ONCE on the variable.
    //When it's iterating, the constantIterator variable won't be changed.
    if(!this->isIterating){
        this->constantIterator = lcdDisplayedNumber;
    }

    //initialize variables and transform QString to Std::String
    double result = 0;
    std::string operationStd = this->operation.toStdString();

    //Use a function to operate and return the result
    result = this->operateWithIteration(operationStd);

    this->lastlcdDisplayedNumber = this->lcdDisplayedNumber;
    this->lcdDisplayedNumber = result;
    this->isIterating = true;

    qDebug() << "Current expected display: " << this->lcdDisplayedNumber;
    qDebug() << "Last expected display: " << this->lastlcdDisplayedNumber;
    qDebug() << "Constant iterator: " << this->constantIterator;
}

//This function vertify the concatonation, if the user press 5, then 4, the expected output should be 54.
//so the function verifies if the current number is 0 or is in operation is true
//because if the number is 0, so the next digit should be in 0 to 9.
//and if the user is in operation, than he is going to input the other factor in the operation.
//else, the algorithm is going to concat the number using simple arithmetics.
void operations::verifyConcat(int n)
{
    //If this function is running, the user pressed a number button, so he's not iterating anymore
    //Then isIterating button is now, false.
    this->isIterating = false;

    //Holds the logic to concat the numbers by pressing twice a number button.
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

//If it's iterating this function is going to operate with it.
//Instead of using last and current displayed number, the operations are going to be used with the iterator
//and the last displayed number.
double operations::operateWithIteration(const std::string &operation)
{
    if(operation == "sum")
    {
        if(this->isIterating){
            return this->constantIterator + this->lcdDisplayedNumber;
        }
        else{
            return this->lastlcdDisplayedNumber + this->lcdDisplayedNumber;
        }
    }
    else if(operation == "sub")
    {
        if(this->isIterating){
            return this->lcdDisplayedNumber - this->constantIterator;
        }
        else{
            return this->lastlcdDisplayedNumber - this->lcdDisplayedNumber;
        }
    }
    else if(operation == "mult")
    {
        if(this->isIterating){
            return this->constantIterator * this->lcdDisplayedNumber;
        }
        else{
            return this->lastlcdDisplayedNumber * this->lcdDisplayedNumber;
        }
    }
    else if(operation == "division")
    {
        if(this->isIterating){
            return this->lcdDisplayedNumber / this->constantIterator;
        }
        else{
            return this->lastlcdDisplayedNumber / this->lcdDisplayedNumber;
        }
    } else {
        qDebug() << "Invalid operation";
        return 0;
    }
}

//Clear everything to start new calculations
void operations::clearOperationVariables()
{
    this->isIterating = false;
    this->isInOperation = false;
    this->lastlcdDisplayedNumber = 0;
    this->lcdDisplayedNumber = 0;
    this->constantIterator = 0;
    qDebug() << "Current expected display: " << this->lcdDisplayedNumber;
    qDebug() << "Last expected display: " << this->lastlcdDisplayedNumber;
    qDebug() << "Constant iterator: " << this->constantIterator;
    qDebug() << "isInOperation bool state: " << this->isInOperation;
    qDebug() << "isIterating bool state: " << this->isIterating;
}

//Simple set
void operations::setLcdDisplayNumber(double n)
{
    this->lcdDisplayedNumber = n;
}
