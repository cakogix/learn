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

void Widget::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_btnClearItem_clicked()
{
    ui->comboItems->clear();
}


void Widget::on_btnInit_clicked()
{
    QIcon icon;
    icon.addFile(":/images/icons/image1.png");
    ui->comboItems->clear();
    for(int i=0;i<20;i++){
        ui->comboItems->addItem(icon,QString("Item %1").arg(i));
        ui->comboItems->addItem(QString("Item %1").arg(i));
    }
}


void Widget::on_btnCityInit_clicked()
{
    QMap<QString,int> City_Zone;
    City_Zone.insert("北京",10);
    City_Zone.insert("上海",21);
    City_Zone.insert("天津",22);
    City_Zone.insert("大连",411);
    City_Zone.insert("锦州",416);
    City_Zone.insert("徐州",516);
    City_Zone.insert("福州",591);
    City_Zone.insert("青岛",532);
    ui->comboCity->clear();
    foreach (const QString &str, City_Zone.keys()) {
        ui->comboCity->addItem(str,City_Zone.value(str));
    }
}


void Widget::on_comboCity_currentTextChanged(const QString &arg1)
{
    ui->plainTextEdit->appendPlainText(arg1);
}

