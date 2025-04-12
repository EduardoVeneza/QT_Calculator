#ifndef CALCULATOR_INTERFACE_H
#define CALCULATOR_INTERFACE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator_Interface; }
QT_END_NAMESPACE

class Calculator_Interface : public QMainWindow
{
    Q_OBJECT

public:
    Calculator_Interface(QWidget *parent = nullptr);
    ~Calculator_Interface();

private:
    Ui::Calculator_Interface *ui;
};
#endif // CALCULATOR_INTERFACE_H
