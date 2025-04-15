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
    logic.setLcdDisplayNumber(0);
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

