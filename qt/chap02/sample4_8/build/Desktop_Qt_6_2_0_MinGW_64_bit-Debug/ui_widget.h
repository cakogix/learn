/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnStart;
    QPushButton *btnEnd;
    QPushButton *btnOneShot;
    QLabel *label;
    QSpinBox *spinBoxIntv;
    QRadioButton *radioCoutinue;
    QRadioButton *radioOneShot;
    QGroupBox *groupBox_2;
    QRadioButton *radioPrecse;
    QRadioButton *radioCoarse;
    QRadioButton *radioVeryCoarse;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdHour;
    QLCDNumber *lcdMinute;
    QLCDNumber *lcdSecond;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(371, 353);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(9, 9, 351, 101));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnStart = new QPushButton(groupBox);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));

        gridLayout->addWidget(btnStart, 0, 0, 1, 2);

        btnEnd = new QPushButton(groupBox);
        btnEnd->setObjectName(QString::fromUtf8("btnEnd"));

        gridLayout->addWidget(btnEnd, 0, 2, 1, 1);

        btnOneShot = new QPushButton(groupBox);
        btnOneShot->setObjectName(QString::fromUtf8("btnOneShot"));

        gridLayout->addWidget(btnOneShot, 0, 3, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spinBoxIntv = new QSpinBox(groupBox);
        spinBoxIntv->setObjectName(QString::fromUtf8("spinBoxIntv"));

        gridLayout->addWidget(spinBoxIntv, 1, 1, 1, 2);

        radioCoutinue = new QRadioButton(groupBox);
        radioCoutinue->setObjectName(QString::fromUtf8("radioCoutinue"));
        radioCoutinue->setChecked(true);

        gridLayout->addWidget(radioCoutinue, 1, 3, 1, 1);

        radioOneShot = new QRadioButton(groupBox);
        radioOneShot->setObjectName(QString::fromUtf8("radioOneShot"));

        gridLayout->addWidget(radioOneShot, 1, 4, 1, 1);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(9, 123, 353, 191));
        radioPrecse = new QRadioButton(groupBox_2);
        radioPrecse->setObjectName(QString::fromUtf8("radioPrecse"));
        radioPrecse->setGeometry(QRect(0, 20, 97, 19));
        radioCoarse = new QRadioButton(groupBox_2);
        radioCoarse->setObjectName(QString::fromUtf8("radioCoarse"));
        radioCoarse->setGeometry(QRect(100, 20, 95, 19));
        radioCoarse->setChecked(true);
        radioVeryCoarse = new QRadioButton(groupBox_2);
        radioVeryCoarse->setObjectName(QString::fromUtf8("radioVeryCoarse"));
        radioVeryCoarse->setGeometry(QRect(200, 20, 121, 19));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 50, 353, 131));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lcdHour = new QLCDNumber(groupBox_3);
        lcdHour->setObjectName(QString::fromUtf8("lcdHour"));
        lcdHour->setDigitCount(2);
        lcdHour->setProperty("value", QVariant(23.000000000000000));

        horizontalLayout->addWidget(lcdHour);

        lcdMinute = new QLCDNumber(groupBox_3);
        lcdMinute->setObjectName(QString::fromUtf8("lcdMinute"));
        lcdMinute->setDigitCount(2);
        lcdMinute->setProperty("value", QVariant(23.000000000000000));

        horizontalLayout->addWidget(lcdMinute);

        lcdSecond = new QLCDNumber(groupBox_3);
        lcdSecond->setObjectName(QString::fromUtf8("lcdSecond"));
        lcdSecond->setDigitCount(2);
        lcdSecond->setProperty("value", QVariant(23.000000000000000));

        horizontalLayout->addWidget(lcdSecond);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 320, 341, 16));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250", nullptr));
        btnStart->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        btnEnd->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242", nullptr));
        btnOneShot->setText(QCoreApplication::translate("Widget", "\345\212\250\346\200\201\345\210\233\345\273\272\345\215\225\346\254\241\345\256\232\346\227\266\345\231\250", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\221\250\346\234\237", nullptr));
        radioCoutinue->setText(QCoreApplication::translate("Widget", "\350\277\236\347\273\255\345\256\232\346\227\266", nullptr));
        radioOneShot->setText(QCoreApplication::translate("Widget", "\345\215\225\346\254\241\345\256\232\346\227\266", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250\347\262\276\345\272\246", nullptr));
        radioPrecse->setText(QCoreApplication::translate("Widget", "PreciseTimer", nullptr));
        radioCoarse->setText(QCoreApplication::translate("Widget", "CoarseTimer", nullptr));
        radioVeryCoarse->setText(QCoreApplication::translate("Widget", "VeryCoarseTimer", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\345\275\223\345\211\215\346\227\266\351\227\264(\345\260\217\346\227\266\357\274\232\345\210\206\357\274\232\347\247\222)", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\265\201\351\200\235\347\232\204\346\227\266\351\227\264\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
