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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editString;
    QPushButton *btnGetChar;
    QLabel *label_2;
    QLineEdit *editChar;
    QPushButton *btnCharJugde;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *btnConvLatin1;
    QPushButton *btnConvUTF16;
    QPushButton *btnCompare;
    QPushButton *btnClear;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QCheckBox *checkDigit;
    QCheckBox *checkLetter;
    QCheckBox *checkLetterOrNum;
    QCheckBox *checkUpper;
    QCheckBox *checkLower;
    QCheckBox *checkMark;
    QCheckBox *checkSpace;
    QCheckBox *checkSymbol;
    QCheckBox *checkPunct;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(647, 600);
        gridLayout_5 = new QGridLayout(Widget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editString = new QLineEdit(groupBox);
        editString->setObjectName(QString::fromUtf8("editString"));

        gridLayout->addWidget(editString, 0, 1, 1, 1);

        btnGetChar = new QPushButton(groupBox);
        btnGetChar->setObjectName(QString::fromUtf8("btnGetChar"));

        gridLayout->addWidget(btnGetChar, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        editChar = new QLineEdit(groupBox);
        editChar->setObjectName(QString::fromUtf8("editChar"));

        gridLayout->addWidget(editChar, 1, 1, 1, 1);

        btnCharJugde = new QPushButton(groupBox);
        btnCharJugde->setObjectName(QString::fromUtf8("btnCharJugde"));

        gridLayout->addWidget(btnCharJugde, 1, 2, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btnConvLatin1 = new QPushButton(groupBox_2);
        btnConvLatin1->setObjectName(QString::fromUtf8("btnConvLatin1"));

        gridLayout_2->addWidget(btnConvLatin1, 0, 0, 1, 1);

        btnConvUTF16 = new QPushButton(groupBox_2);
        btnConvUTF16->setObjectName(QString::fromUtf8("btnConvUTF16"));

        gridLayout_2->addWidget(btnConvUTF16, 0, 1, 1, 1);

        btnCompare = new QPushButton(groupBox_2);
        btnCompare->setObjectName(QString::fromUtf8("btnCompare"));

        gridLayout_2->addWidget(btnCompare, 1, 0, 1, 1);

        btnClear = new QPushButton(groupBox_2);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        gridLayout_2->addWidget(btnClear, 1, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 1, 0, 1, 2);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_3->addWidget(plainTextEdit, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 2, 0, 1, 1);

        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        checkDigit = new QCheckBox(groupBox_4);
        checkDigit->setObjectName(QString::fromUtf8("checkDigit"));

        gridLayout_4->addWidget(checkDigit, 0, 0, 1, 1);

        checkLetter = new QCheckBox(groupBox_4);
        checkLetter->setObjectName(QString::fromUtf8("checkLetter"));

        gridLayout_4->addWidget(checkLetter, 1, 0, 1, 1);

        checkLetterOrNum = new QCheckBox(groupBox_4);
        checkLetterOrNum->setObjectName(QString::fromUtf8("checkLetterOrNum"));

        gridLayout_4->addWidget(checkLetterOrNum, 2, 0, 1, 1);

        checkUpper = new QCheckBox(groupBox_4);
        checkUpper->setObjectName(QString::fromUtf8("checkUpper"));

        gridLayout_4->addWidget(checkUpper, 3, 0, 1, 1);

        checkLower = new QCheckBox(groupBox_4);
        checkLower->setObjectName(QString::fromUtf8("checkLower"));

        gridLayout_4->addWidget(checkLower, 4, 0, 1, 1);

        checkMark = new QCheckBox(groupBox_4);
        checkMark->setObjectName(QString::fromUtf8("checkMark"));

        gridLayout_4->addWidget(checkMark, 5, 0, 1, 1);

        checkSpace = new QCheckBox(groupBox_4);
        checkSpace->setObjectName(QString::fromUtf8("checkSpace"));

        gridLayout_4->addWidget(checkSpace, 6, 0, 1, 1);

        checkSymbol = new QCheckBox(groupBox_4);
        checkSymbol->setObjectName(QString::fromUtf8("checkSymbol"));

        gridLayout_4->addWidget(checkSymbol, 7, 0, 1, 1);

        checkPunct = new QCheckBox(groupBox_4);
        checkPunct->setObjectName(QString::fromUtf8("checkPunct"));

        gridLayout_4->addWidget(checkPunct, 8, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 2, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\345\255\227\347\254\246\344\270\262", nullptr));
        btnGetChar->setText(QCoreApplication::translate("Widget", "\346\257\217\344\270\252\345\255\227\347\254\246\347\232\204unicode", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\345\215\225\344\270\252\345\255\227\347\254\246", nullptr));
        btnCharJugde->setText(QCoreApplication::translate("Widget", "\346\257\217\344\270\252\345\255\227\347\254\246\347\232\204\347\211\271\346\200\247\345\210\244\346\226\255", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\205\266\344\273\226\346\265\213\350\257\225\345\222\214\345\212\237\350\203\275", nullptr));
        btnConvLatin1->setText(QCoreApplication::translate("Widget", "\344\270\216Latin1\347\232\204\350\275\254\346\215\242", nullptr));
        btnConvUTF16->setText(QCoreApplication::translate("Widget", "\344\270\216UTF-16\347\232\204\350\275\254\346\215\242", nullptr));
        btnCompare->setText(QCoreApplication::translate("Widget", "QChar\346\257\224\350\276\203\345\222\214\346\233\277\346\215\242", nullptr));
        btnClear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\347\273\223\346\236\234\346\230\276\347\244\272", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Widget", "QChar\347\211\271\346\200\247\345\210\244\346\226\255", nullptr));
        checkDigit->setText(QCoreApplication::translate("Widget", "isDigit", nullptr));
        checkLetter->setText(QCoreApplication::translate("Widget", "isLetter", nullptr));
        checkLetterOrNum->setText(QCoreApplication::translate("Widget", "isLetterOrNumber", nullptr));
        checkUpper->setText(QCoreApplication::translate("Widget", "isUpper", nullptr));
        checkLower->setText(QCoreApplication::translate("Widget", "isLower", nullptr));
        checkMark->setText(QCoreApplication::translate("Widget", "isMark", nullptr));
        checkSpace->setText(QCoreApplication::translate("Widget", "isSpace", nullptr));
        checkSymbol->setText(QCoreApplication::translate("Widget", "isSymbol", nullptr));
        checkPunct->setText(QCoreApplication::translate("Widget", "isPunct", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
