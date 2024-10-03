#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setText("我是陈冠先");
    ui->pushButton->setText("关闭");
}

Widget::~Widget()
{
    delete ui;
}
