#ifndef CALCULATOR_INTERFACE_H
#define CALCULATOR_INTERFACE_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include <QKeyEvent>
#include "operations.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator_Interface; }
QT_END_NAMESPACE

class Calculator_Interface : public QMainWindow
{
    Q_OBJECT

public:
    Calculator_Interface(QWidget *parent = nullptr);
    ~Calculator_Interface();

protected:
    void keyPressEvent(QKeyEvent *event) override;


private slots:
    //Lógica dos botões
    void on_button_1_clicked();

    void on_button_2_clicked();

    void on_button_3_clicked();

    void on_button_4_clicked();

    void on_button_5_clicked();

    void on_button_6_clicked();

    void on_button_7_clicked();

    void on_button_8_clicked();

    void on_button_9_clicked();

    void on_button_0_clicked();

    void on_button_Clear_clicked();

    void on_plus_button_clicked();

    void on_minus_button_clicked();

    void on_product_button_clicked();

    void on_div_button_clicked();

    void on_button_equal_clicked();

    void on_float_button_clicked();

private:
    operations logic;
    Ui::Calculator_Interface *ui;
};
#endif // CALCULATOR_INTERFACE_H
