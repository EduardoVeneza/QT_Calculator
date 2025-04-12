#include "calculator_interface.h"
#include "ui_calculator_interface.h"

Calculator_Interface::Calculator_Interface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator_Interface)
{
    ui->setupUi(this);
}

Calculator_Interface::~Calculator_Interface()
{
    delete ui;
}

