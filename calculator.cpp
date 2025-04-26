#include "calculator.h"
#include "./ui_calculator.h"
#include "baseCalculator.hpp"
#include <QString>

const int maxBufferSize = 10;
std::string buffer;

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);
}

calculator::~calculator()
{
    delete ui;
}

void calculator::appendBuffer(char inp) {
    if(buffer.size() < maxBufferSize) {
        buffer += inp;
        updateInp();
    }
}

void calculator::updateInp() {
    QString bufferInp = QString::fromStdString(buffer);
    ui->input->setPlainText(bufferInp);
}

void calculator::on_zero_clicked() {appendBuffer('0');}
void calculator::on_one_clicked() {appendBuffer('1');}
void calculator::on_two_clicked() {appendBuffer('2');}
void calculator::on_three_clicked() {appendBuffer('3');}
void calculator::on_four_clicked() {appendBuffer('4');}
void calculator::on_five_clicked() {appendBuffer('5');}
void calculator::on_six_clicked() {appendBuffer('6');}
void calculator::on_seven_clicked() {appendBuffer('7');}
void calculator::on_eight_clicked() {appendBuffer('8');}
void calculator::on_nine_clicked() {appendBuffer('9');}
void calculator::on_add_clicked() {appendBuffer('+');}
void calculator::on_sub_clicked() {appendBuffer('-');}
void calculator::on_mul_clicked() {appendBuffer('x');}
void calculator::on_quo_clicked() {appendBuffer('/');}
void calculator::on_exp_clicked() {appendBuffer('^');}
void calculator::on_deci_clicked() {appendBuffer('.');}

void calculator::on_clear_clicked() {
    buffer = "";
    updateInp();
}

void calculator::on_erase_clicked() {
    buffer.erase(buffer.size() - 1);
    updateInp();
}


void calculator::on_off_clicked() {
    this->close();
}

void calculator::on_equal_clicked() {

}

