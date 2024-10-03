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

void Widget::on_btnCal_clicked()
{
    int num=ui->editNum->text().toInt();
    float price=ui->editPrice->text().toFloat();
    float total=num * price;

    QString str;
    str.setNum(total,'f',2);
    ui->editTotal->setText(str);
}

