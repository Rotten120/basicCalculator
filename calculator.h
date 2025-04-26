#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class calculator;
}
QT_END_NAMESPACE

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();

private slots:
    void appendBuffer(char);

    void updateInp();

    void on_zero_clicked();

    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_add_clicked();

    void on_sub_clicked();

    void on_mul_clicked();

    void on_quo_clicked();

    void on_exp_clicked();

    void on_deci_clicked();

    void on_clear_clicked();

    void on_erase_clicked();

    void on_off_clicked();

    void on_equal_clicked();

private:
    Ui::calculator *ui;
};
#endif // CALCULATOR_H
