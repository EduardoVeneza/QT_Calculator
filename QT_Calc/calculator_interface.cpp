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

void Calculator_Interface::on_button_1_clicked()
{
    logic.verifyConcat(1);
    ui->lcdNumber->display(logic.getLcdDisplayNumber());

}

void Calculator_Interface::on_button_2_clicked()
{
    logic.verifyConcat(2);
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

void Calculator_Interface::on_button_3_clicked()
{
    logic.verifyConcat(3);
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

void Calculator_Interface::on_button_4_clicked()
{
    logic.verifyConcat(4);
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

void Calculator_Interface::on_button_5_clicked()
{
    logic.verifyConcat(5);
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

void Calculator_Interface::on_button_6_clicked()
{
    logic.verifyConcat(6);
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

void Calculator_Interface::on_button_7_clicked()
{
    logic.verifyConcat(7);
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

void Calculator_Interface::on_button_8_clicked()
{
    logic.verifyConcat(8);
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

void Calculator_Interface::on_button_9_clicked()
{
    logic.verifyConcat(9);
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

void Calculator_Interface::on_button_0_clicked()
{
    logic.verifyConcat(0);
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}


void Calculator_Interface::on_button_Clear_clicked()
{
    //Rever bug de crash ao usar set operation e Clear
    logic.clearOperationVariables();
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}


void Calculator_Interface::on_plus_button_clicked()
{
    logic.sum();
}


void Calculator_Interface::on_minus_button_clicked()
{
    logic.sub();
}


void Calculator_Interface::on_product_button_clicked()
{
    logic.mult();
}


void Calculator_Interface::on_div_button_clicked()
{
    logic.division();
}


void Calculator_Interface::on_button_equal_clicked()
{
    logic.calculate();
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

