/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_underline;
    QCheckBox *checkBox_italic;
    QCheckBox *checkBox_blod;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_black;
    QRadioButton *radioButton_red;
    QRadioButton *radioButton_blue;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_Close;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(824, 623);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/image1.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox_underline = new QCheckBox(groupBox);
        checkBox_underline->setObjectName(QString::fromUtf8("checkBox_underline"));

        horizontalLayout->addWidget(checkBox_underline);

        checkBox_italic = new QCheckBox(groupBox);
        checkBox_italic->setObjectName(QString::fromUtf8("checkBox_italic"));

        horizontalLayout->addWidget(checkBox_italic);

        checkBox_blod = new QCheckBox(groupBox);
        checkBox_blod->setObjectName(QString::fromUtf8("checkBox_blod"));

        horizontalLayout->addWidget(checkBox_blod);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton_black = new QRadioButton(groupBox_2);
        radioButton_black->setObjectName(QString::fromUtf8("radioButton_black"));

        horizontalLayout_2->addWidget(radioButton_black);

        radioButton_red = new QRadioButton(groupBox_2);
        radioButton_red->setObjectName(QString::fromUtf8("radioButton_red"));

        horizontalLayout_2->addWidget(radioButton_red);

        radioButton_blue = new QRadioButton(groupBox_2);
        radioButton_blue->setObjectName(QString::fromUtf8("radioButton_blue"));

        horizontalLayout_2->addWidget(radioButton_blue);


        verticalLayout->addWidget(groupBox_2);

        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_Clear = new QPushButton(Dialog);
        pushButton_Clear->setObjectName(QString::fromUtf8("pushButton_Clear"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/image2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Clear->setIcon(icon1);

        horizontalLayout_3->addWidget(pushButton_Clear);

        pushButton_OK = new QPushButton(Dialog);
        pushButton_OK->setObjectName(QString::fromUtf8("pushButton_OK"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("images/image3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_OK->setIcon(icon2);

        horizontalLayout_3->addWidget(pushButton_OK);

        pushButton_Close = new QPushButton(Dialog);
        pushButton_Close->setObjectName(QString::fromUtf8("pushButton_Close"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/images/image4.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Close->setIcon(icon3);

        horizontalLayout_3->addWidget(pushButton_Close);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Dialog);
        QObject::connect(pushButton_Close, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_OK, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "\345\255\227\344\275\223", nullptr));
        checkBox_underline->setText(QCoreApplication::translate("Dialog", "\344\270\213\345\210\222\347\272\277", nullptr));
        checkBox_italic->setText(QCoreApplication::translate("Dialog", "\346\226\234\344\275\223", nullptr));
        checkBox_blod->setText(QCoreApplication::translate("Dialog", "\345\212\240\347\262\227", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Dialog", "\351\242\234\350\211\262", nullptr));
        radioButton_black->setText(QCoreApplication::translate("Dialog", "\351\273\221\350\211\262", nullptr));
        radioButton_red->setText(QCoreApplication::translate("Dialog", "\347\272\242\350\211\262", nullptr));
        radioButton_blue->setText(QCoreApplication::translate("Dialog", "\350\223\235\350\211\262", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("Dialog", "Qt6 c++ \n"
"\345\274\200\345\217\221\346\214\207\345\215\227", nullptr));
        pushButton_Clear->setText(QCoreApplication::translate("Dialog", "\346\270\205\347\251\272", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("Dialog", "\345\272\224\347\224\250", nullptr));
        pushButton_Close->setText(QCoreApplication::translate("Dialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
