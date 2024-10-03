#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QObject::connect(ui->radioButton_black,SIGNAL(clicked()),this,SLOT(do_FontColor()));
    QObject::connect(ui->radioButton_blue,SIGNAL(clicked()),this,SLOT(do_FontColor()));
    QObject::connect(ui->radioButton_red,SIGNAL(clicked()),this,SLOT(do_FontColor()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_Clear_clicked()
{
    ui->plainTextEdit->clear();
}

void Dialog::on_checkBox_underline_clicked(bool checked)
{
    QFont font=ui->plainTextEdit->font();
    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);
}


void Dialog::on_checkBox_italic_clicked(bool checked)
{
    QFont font=ui->plainTextEdit->font();
    font.setItalic(checked);
    ui->plainTextEdit->setFont(font);
}


void Dialog::on_checkBox_blod_clicked(bool checked)
{
    QFont font=ui->plainTextEdit->font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}

void Dialog::do_FontColor()
{
    QPalette paltee=ui->plainTextEdit->palette();
    if(ui->radioButton_black->isChecked())
        paltee.setColor(QPalette::Text,Qt::black);
    if(ui->radioButton_blue->isChecked())
        paltee.setColor(QPalette::Text,Qt::blue);
    if(ui->radioButton_red->isChecked())
        paltee.setColor(QPalette::Text,Qt::red);

    ui->plainTextEdit->setPalette(paltee);
}



