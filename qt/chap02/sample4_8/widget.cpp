#include "widget.h"
#include "ui_widget.h"
#include "QTimer"
#include "QElapsedTimer"
#include "QTime"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_timer=new QTimer(this);
    m_counter=new QElapsedTimer(this);
    m_timer->stop();
    m_timer->setTimerType(Qt::CoarseTimer);
    ui->radioCoarse->setChecked(true);
    connect(m_timer,&QTimer::timeout,this,&Widget::do_timer_timeout);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::do_timer_timeout()
{
    QApplication::beep();
    QTime curTime=QTime::currentTime();
    ui->lcdHour->display(curTime.hour());
    ui->lcdMinute->display(curTime.minute());
    ui->lcdSecond->display(curTime.second());
    if(m_timer->isSingleShot()){
        int tmMsec=m_counter->elapsed();
        QString str=QString("流逝的时间：%1毫秒").arg(tmMsec);
        ui->btnStart->setEnabled(true);
        ui->btnOneShot->setEnabled(true);
        ui->btnEnd->setEnabled(false);
    }
}

void Widget::on_btnStart_clicked()
{

}

