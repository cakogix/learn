#include "dialog.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QDialog>
#include <QCheckBox>
#include <QRadioButton>
#include <QPlainTextEdit>
#include <QPushButton>
#include <QPalette>

void Dialog::do_checkBoxUnderLine(bool checked)
{
    QFont font=txtEdit->font();
    font.setUnderline(checked);
    txtEdit->setFont(font);
}

void Dialog::do_checkBoxBold(bool checked)
{
    QFont font=txtEdit->font();
    font.setBold(checked);
    txtEdit->setFont(font);
}

void Dialog::do_checkBoxItalic(bool checked)
{
    QFont font=txtEdit->font();
    font.setItalic(checked);
    txtEdit->setFont(font);
}

void Dialog::do_radioFontColor()
{
    QPalette plet=txtEdit->palette();
    if(radioBlack->isChecked())
        plet.setColor(QPalette::Text,Qt::black);
    if(radioRed->isChecked())
        plet.setColor(QPalette::Text,Qt::red);
    if(radioBlue->isChecked())
        plet.setColor(QPalette::Text,Qt::blue);

    txtEdit->setPalette(plet);
}


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    QVBoxLayout *VlayOut=new QVBoxLayout();

    checkBoxUnderLine =new QCheckBox("下划线");
    checkBoxBold = new QCheckBox("加粗");
    checkBoxItalic = new QCheckBox("斜体");
    QHBoxLayout *HLayOut=new QHBoxLayout();
    HLayOut->addWidget(checkBoxUnderLine);
    HLayOut->addWidget(checkBoxBold);
    HLayOut->addWidget(checkBoxItalic);
    VlayOut->addLayout(HLayOut);

    radioBlack =new QRadioButton("黑色");
    radioRed=new QRadioButton("红色");
    radioBlue=new QRadioButton("蓝色");
    QHBoxLayout *HLayOut2=new QHBoxLayout();
    HLayOut2->addWidget(radioBlack);
    HLayOut2->addWidget(radioRed);
    HLayOut2->addWidget(radioBlue);
    VlayOut->addLayout(HLayOut2);

    txtEdit =new  QPlainTextEdit("qt6 C++开发指南");
    QFont font=txtEdit->font();
    font.setPointSize(20);
    txtEdit->setFont(font);
    QHBoxLayout *HLayOut3=new QHBoxLayout();
    HLayOut3->addWidget(txtEdit);
    VlayOut->addLayout(HLayOut3);

    btnClose =new QPushButton("退出");
    btnOk =new QPushButton("确定");
    btnCancel =new QPushButton("取消");
    QHBoxLayout *HLayout4=new QHBoxLayout();
    HLayout4->addStretch();
    HLayout4->addWidget(btnClose);
    HLayout4->addWidget(btnOk);
    HLayout4->addWidget(btnCancel);
    VlayOut ->addLayout(HLayout4);

    setLayout(VlayOut);

    connect(checkBoxUnderLine,SIGNAL(clicked(bool)),this,SLOT(do_checkBoxUnderLine(bool)));
    connect(checkBoxBold,SIGNAL(clicked(bool)),this,SLOT(do_checkBoxBold(bool)));
    connect(checkBoxItalic,SIGNAL(clicked(bool)),this,SLOT(do_checkBoxItalic(bool)));

    connect(radioBlack,SIGNAL(clicked(bool)),this,SLOT(do_radioFontColor()));
    connect(radioBlue,SIGNAL(clicked(bool)),this,SLOT(do_radioFontColor()));
    connect(radioRed,SIGNAL(clicked(bool)),this,SLOT(do_radioFontColor()));

    connect(btnClose,SIGNAL(clicked()),this,SLOT(accept()));
    connect(btnOk,SIGNAL(clicked()),this,SLOT(reject()));
    connect(btnCancel,SIGNAL(clicked()),this,SLOT(close()));

}

Dialog::~Dialog() {}
