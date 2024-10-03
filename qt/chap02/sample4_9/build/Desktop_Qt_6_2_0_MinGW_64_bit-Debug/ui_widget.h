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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *btnInit;
    QPushButton *btnClearItem;
    QCheckBox *checkEditable;
    QComboBox *comboItems;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QPushButton *btnCityInit;
    QComboBox *comboCity;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QPushButton *btnClear;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(422, 300);
        gridLayout_4 = new QGridLayout(Widget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btnInit = new QPushButton(groupBox);
        btnInit->setObjectName(QString::fromUtf8("btnInit"));

        gridLayout_2->addWidget(btnInit, 0, 0, 1, 1);

        btnClearItem = new QPushButton(groupBox);
        btnClearItem->setObjectName(QString::fromUtf8("btnClearItem"));

        gridLayout_2->addWidget(btnClearItem, 0, 1, 1, 1);

        checkEditable = new QCheckBox(groupBox);
        checkEditable->setObjectName(QString::fromUtf8("checkEditable"));

        gridLayout_2->addWidget(checkEditable, 0, 2, 1, 1);

        comboItems = new QComboBox(groupBox);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/image1.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboItems->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/image5.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboItems->addItem(icon1, QString());
        comboItems->setObjectName(QString::fromUtf8("comboItems"));

        gridLayout_2->addWidget(comboItems, 1, 0, 1, 3);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        btnCityInit = new QPushButton(groupBox_2);
        btnCityInit->setObjectName(QString::fromUtf8("btnCityInit"));

        gridLayout_3->addWidget(btnCityInit, 0, 0, 1, 1);

        comboCity = new QComboBox(groupBox_2);
        comboCity->setObjectName(QString::fromUtf8("comboCity"));
        comboCity->setDuplicatesEnabled(false);

        gridLayout_3->addWidget(comboCity, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnClear = new QPushButton(groupBox_3);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        verticalLayout->addWidget(btnClear);

        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        gridLayout_4->addWidget(groupBox_3, 1, 0, 1, 2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\347\256\200\345\215\225ComboBox", nullptr));
        btnInit->setText(QCoreApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
        btnClearItem->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\345\210\227\350\241\250", nullptr));
        checkEditable->setText(QCoreApplication::translate("Widget", "\345\217\257\347\274\226\350\276\221", nullptr));
        comboItems->setItemText(0, QCoreApplication::translate("Widget", "\345\215\227\346\230\214", nullptr));
        comboItems->setItemText(1, QCoreApplication::translate("Widget", "\346\235\255\345\267\236", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\234\211\347\224\250\346\210\267\346\225\260\346\215\256\347\232\204ComboBox", nullptr));
        btnCityInit->setText(QCoreApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\237\216\345\270\202+\345\214\272\345\217\267", nullptr));
        comboCity->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\351\200\211\346\213\251\344\270\200\344\270\252\345\237\216\345\270\202", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\344\277\241\346\201\257\346\230\276\347\244\272", nullptr));
        btnClear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
