/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFormLayout *formLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *btnTime;
    QLineEdit *editTime;
    QTimeEdit *timeEdit;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *btnTimeFromString;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QPushButton *btnDate;
    QPushButton *btnDateFromString;
    QDateEdit *dateEdit;
    QLineEdit *editDate;
    QFrame *frame_3;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *editDateTime;
    QPushButton *btnDateTime;
    QPushButton *btnDateTimeFromString;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QLineEdit *editClander;
    QCalendarWidget *calendarWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(804, 485);
        formLayout = new QFormLayout(Widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(groupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        btnTime = new QPushButton(frame);
        btnTime->setObjectName(QString::fromUtf8("btnTime"));

        gridLayout->addWidget(btnTime, 2, 1, 1, 1);

        editTime = new QLineEdit(frame);
        editTime->setObjectName(QString::fromUtf8("editTime"));

        gridLayout->addWidget(editTime, 1, 2, 1, 1);

        timeEdit = new QTimeEdit(frame);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setTime(QTime(15, 0, 37));

        gridLayout->addWidget(timeEdit, 1, 1, 1, 1);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        btnTimeFromString = new QPushButton(frame);
        btnTimeFromString->setObjectName(QString::fromUtf8("btnTimeFromString"));

        gridLayout->addWidget(btnTimeFromString, 2, 2, 1, 1);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        btnDate = new QPushButton(frame_2);
        btnDate->setObjectName(QString::fromUtf8("btnDate"));

        gridLayout_2->addWidget(btnDate, 1, 1, 1, 1);

        btnDateFromString = new QPushButton(frame_2);
        btnDateFromString->setObjectName(QString::fromUtf8("btnDateFromString"));

        gridLayout_2->addWidget(btnDateFromString, 1, 2, 1, 1);

        dateEdit = new QDateEdit(frame_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setDate(QDate(2020, 9, 1));

        gridLayout_2->addWidget(dateEdit, 0, 1, 1, 1);

        editDate = new QLineEdit(frame_2);
        editDate->setObjectName(QString::fromUtf8("editDate"));

        gridLayout_2->addWidget(editDate, 0, 2, 1, 1);


        verticalLayout->addWidget(frame_2);

        frame_3 = new QFrame(groupBox);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(frame_3);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        gridLayout_3->addWidget(dateTimeEdit, 0, 1, 1, 1);

        editDateTime = new QLineEdit(frame_3);
        editDateTime->setObjectName(QString::fromUtf8("editDateTime"));

        gridLayout_3->addWidget(editDateTime, 0, 2, 1, 1);

        btnDateTime = new QPushButton(frame_3);
        btnDateTime->setObjectName(QString::fromUtf8("btnDateTime"));

        gridLayout_3->addWidget(btnDateTime, 1, 1, 1, 1);

        btnDateTimeFromString = new QPushButton(frame_3);
        btnDateTimeFromString->setObjectName(QString::fromUtf8("btnDateTimeFromString"));

        gridLayout_3->addWidget(btnDateTimeFromString, 1, 2, 1, 1);


        verticalLayout->addWidget(frame_3);


        formLayout->setWidget(0, QFormLayout::LabelRole, groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        editClander = new QLineEdit(groupBox_2);
        editClander->setObjectName(QString::fromUtf8("editClander"));

        gridLayout_4->addWidget(editClander, 0, 1, 1, 1);

        calendarWidget = new QCalendarWidget(groupBox_2);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        gridLayout_4->addWidget(calendarWidget, 1, 0, 1, 2);


        formLayout->setWidget(0, QFormLayout::FieldRole, groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\345\222\214\346\227\266\351\227\264", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272", nullptr));
        btnTime->setText(QCoreApplication::translate("Widget", "qDebug--Time", nullptr));
        editTime->setInputMask(QCoreApplication::translate("Widget", "99:99:99;_", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("Widget", "H:mm:ss", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\350\257\273\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\227\266\351\227\264", nullptr));
        btnTimeFromString->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\266\351\227\264fromString", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\346\227\245\346\234\237", nullptr));
        btnDate->setText(QCoreApplication::translate("Widget", "qDebug--Date", nullptr));
        btnDateFromString->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\245\346\234\237fromString", nullptr));
        editDate->setInputMask(QCoreApplication::translate("Widget", "9999-99-99", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\346\227\245\346\234\237", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("Widget", "yyyy/M/d H:mm:ss", nullptr));
        editDateTime->setInputMask(QCoreApplication::translate("Widget", "9999-99-99 99:99:99", nullptr));
        btnDateTime->setText(QCoreApplication::translate("Widget", "qDebug--DateTime", nullptr));
        btnDateTimeFromString->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\266\351\227\264fromString", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\227\245\345\216\206\351\200\211\346\213\251", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\347\232\204\346\227\245\346\234\237\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
