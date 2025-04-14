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
    if(logic.getLcdDisplayNumber() == 0){
        logic.setLcdDisplayNumber(1);
    } else {
        logic.setLcdDisplayNumber((logic.getLcdDisplayNumber() * 10) + 1);
    }
    ui->lcdNumber->display(logic.getLcdDisplayNumber());

}

void Calculator_Interface::on_button_2_clicked()
{
    if(logic.getLcdDisplayNumber() == 0){
        logic.setLcdDisplayNumber(2);
    } else {
        logic.setLcdDisplayNumber((logic.getLcdDisplayNumber() * 10) + 2);
    }
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

void Calculator_Interface::on_button_3_clicked()
{
    if(logic.getLcdDisplayNumber() == 0){
        logic.setLcdDisplayNumber(3);
    } else {
        logic.setLcdDisplayNumber((logic.getLcdDisplayNumber() * 10) + 3);
    }
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

void Calculator_Interface::on_button_4_clicked()
{
    if(logic.getLcdDisplayNumber() == 0){
        logic.setLcdDisplayNumber(4);
    } else {
        logic.setLcdDisplayNumber((logic.getLcdDisplayNumber() * 10) + 4);
    }
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

void Calculator_Interface::on_button_5_clicked()
{
    if(logic.getLcdDisplayNumber() == 0){
        logic.setLcdDisplayNumber(5);
    } else {
        logic.setLcdDisplayNumber((logic.getLcdDisplayNumber() * 10) + 5);
    }
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

void Calculator_Interface::on_button_6_clicked()
{
    if(logic.getLcdDisplayNumber() == 0){
        logic.setLcdDisplayNumber(6);
    } else {
        logic.setLcdDisplayNumber((logic.getLcdDisplayNumber() * 10) + 6);
    }
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

void Calculator_Interface::on_button_7_clicked()
{
    if(logic.getLcdDisplayNumber() == 0){
        logic.setLcdDisplayNumber(7);
    } else {
        logic.setLcdDisplayNumber((logic.getLcdDisplayNumber() * 10) + 7);
    }
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

void Calculator_Interface::on_button_8_clicked()
{
    if(logic.getLcdDisplayNumber() == 0){
        logic.setLcdDisplayNumber(8);
    } else {
        logic.setLcdDisplayNumber((logic.getLcdDisplayNumber() * 10) + 8);
    }
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

void Calculator_Interface::on_button_9_clicked()
{
    if(logic.getLcdDisplayNumber() == 0){
        logic.setLcdDisplayNumber(9);
    } else {
        logic.setLcdDisplayNumber((logic.getLcdDisplayNumber() * 10) + 9);
    }
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

void Calculator_Interface::on_button_0_clicked()
{
    logic.setLcdDisplayNumber(logic.getLcdDisplayNumber() * 10);
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}


void Calculator_Interface::on_button_Clear_clicked()
{
    logic.setLcdDisplayNumber(0);
    ui->lcdNumber->display(logic.getLcdDisplayNumber());
}

