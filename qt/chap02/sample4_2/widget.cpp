#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnFrontBack_clicked()
{
    ui->plainTextEdit->appendPlainText("front(),back()函数测试");
    QString str1=ui->comboBoxStr1->currentText();
    ui->plainTextEdit->appendPlainText(str1);
    ui->plainTextEdit->appendPlainText("front="+QString(str1.front()));
    ui->plainTextEdit->appendPlainText("back="+QString(str1.back()));
}


void Widget::on_btnLeftRight_clicked()
{
    ui->plainTextEdit->appendPlainText("right(),left()函数测试");
    QString str1=ui->comboBoxStr1->currentText();
    ui->plainTextEdit->appendPlainText(str1);
    ui->plainTextEdit->appendPlainText("right="+QString(str1.right(9)));
    ui->plainTextEdit->appendPlainText("back="+QString(str1.left(2)));
}

