#ifndef CALCULATOR_INTERFACE_H
#define CALCULATOR_INTERFACE_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
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

private slots:
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

private:
    operations logic;
    Ui::Calculator_Interface *ui;
};
#endif // CALCULATOR_INTERFACE_H
