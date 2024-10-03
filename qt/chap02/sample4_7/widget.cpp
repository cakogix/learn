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

void Widget::on_pushButton_clicked()
{
    QDateTime curDateTime=QDateTime::currentDateTime();
    ui->timeEdit->setTime(curDateTime.time());
    ui->editDateTime->setText(curDateTime.toString("hh:mm:ss"));

    ui->dateEdit->setDate(curDateTime.date());
    ui->editDate->setText(curDateTime.toString("yyyy-MM-dd"));

    ui->dateTimeEdit->setDateTime(curDateTime);
    ui->editDateTime->setText(curDateTime.toString("yyyy-MM-dd hh:mm:ss"));
}

void Widget::on_btnTime_clicked()
{
    QTime TM1(13,24,5);
    QString str=TM1.toString("HH:mm:ss");
    qDebug("Original time=%s",str.toLocal8Bit().data());

    QTime TM2=TM2.addSecs(150);
    str=TM2.toString("HH::mm::ss");
    qDebug("150s later,time=%s",str.toLocal8Bit().data());

    TM2=QTime::currentTime();
    str=TM2.toString("HH:mm:ss zzz");

    qDebug("CurrentTime=%s",str.toLocal8Bit().data());
    qDebug("Hour=%d",TM2.hour());
    qDebug("Minute=%d",TM2.minute());
    qDebug("Second=%d",TM2.second());
}



