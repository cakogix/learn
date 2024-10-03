#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider,&QSlider::valueChanged,this,&Widget::do_valueChanged);
    connect(ui->horizontalScrollBar,&QSlider::valueChanged,this,&Widget::do_valueChanged);
    connect(ui->dial,&QSlider::valueChanged,this,&Widget::do_valueChanged);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::do_valueChanged(int value)
{
    ui->progressBar->setValue(value);
}

void Widget::on_checkBoxVisible_clicked(bool checked)
{
    ui->progressBar->setTextVisible(checked);
}


void Widget::on_checkBoxInverted_clicked(bool checked)
{
    ui->progressBar->setInvertedAppearance(checked);
}


void Widget::on_radioButtonPercent_clicked()
{
    ui->progressBar->setFormat("%p%");
}


void Widget::on_radioButtonValue_clicked()
{
    ui->progressBar->setFormat("%v");
}

