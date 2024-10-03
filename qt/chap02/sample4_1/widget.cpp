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

void Widget::on_btnGetChar_clicked()
{
    QString str=ui->editString->text();
    if(str.isNull()) return;
    for(qint16 i=0;i<str.size();i++){
        QChar ch=str[i];
        char16_t uniCode = ch.unicode();

        QString chStr(ch);
        QString info=chStr+QString::asprintf("\t,Unicode编码=0x%x",uniCode);
        ui->plainTextEdit->appendPlainText(info);

    }
}


void Widget::on_btnCharJugde_clicked()
{
    QString str=ui->editChar->text();
    if(str.isNull()||str.size()>1) return;

    QChar ch=str.at(0);
    char16_t uniCode = ch.unicode();

    QString info=str+QString::asprintf("\t,Unicode编码=0x%x",uniCode);
    ui->plainTextEdit->appendPlainText(info);

    ui->checkDigit->setChecked(ch.isDigit());
    ui->checkLetter->setChecked(ch.isLetter());
    ui->checkLetterOrNum->setChecked(ch.isLetterOrNumber());
    ui->checkUpper->setChecked(ch.isUpper());
    ui->checkLower->setChecked(ch.isLower());
    ui->checkMark->setChecked(ch.isMark());
    ui->checkSpace->setChecked(ch.isSpace());
    ui->checkPunct->setChecked(ch.isPunct());

}


void Widget::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_btnConvLatin1_clicked()
{

}


void Widget::on_btnConvUTF16_clicked()
{

}


void Widget::on_btnCompare_clicked()
{

}

