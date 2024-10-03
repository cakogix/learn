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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *btnFrontBack;
    QPushButton *btnLeftRight;
    QPushButton *btnFirstLast;
    QPushButton *btnSection;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QPushButton *btnIsNullIsEmpty;
    QPushButton *btnResize;
    QPushButton *btnSizeLength;
    QPushButton *btnFill;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QPushButton *btnIndexOfLastIndexOf;
    QPushButton *btnContains;
    QPushButton *btnEndWithStartsWith;
    QPushButton *btnCount;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QPushButton *btnTrimmedSimplified;
    QPushButton *btnInset;
    QPushButton *btnRemove;
    QPushButton *btnReplace;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QLabel *label_2;
    QComboBox *comboBoxStr2;
    QComboBox *comboBoxStr1;
    QLabel *label_7;
    QLabel *label;
    QSpinBox *spinBox;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout;
    QPushButton *btnClear;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(797, 552);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(Widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        frame = new QFrame(splitter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(2);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btnFrontBack = new QPushButton(groupBox);
        btnFrontBack->setObjectName(QString::fromUtf8("btnFrontBack"));

        gridLayout_2->addWidget(btnFrontBack, 0, 0, 1, 1);

        btnLeftRight = new QPushButton(groupBox);
        btnLeftRight->setObjectName(QString::fromUtf8("btnLeftRight"));

        gridLayout_2->addWidget(btnLeftRight, 0, 1, 1, 1);

        btnFirstLast = new QPushButton(groupBox);
        btnFirstLast->setObjectName(QString::fromUtf8("btnFirstLast"));

        gridLayout_2->addWidget(btnFirstLast, 1, 0, 1, 1);

        btnSection = new QPushButton(groupBox);
        btnSection->setObjectName(QString::fromUtf8("btnSection"));

        gridLayout_2->addWidget(btnSection, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        btnIsNullIsEmpty = new QPushButton(groupBox_2);
        btnIsNullIsEmpty->setObjectName(QString::fromUtf8("btnIsNullIsEmpty"));

        gridLayout_3->addWidget(btnIsNullIsEmpty, 0, 0, 1, 1);

        btnResize = new QPushButton(groupBox_2);
        btnResize->setObjectName(QString::fromUtf8("btnResize"));

        gridLayout_3->addWidget(btnResize, 0, 1, 1, 1);

        btnSizeLength = new QPushButton(groupBox_2);
        btnSizeLength->setObjectName(QString::fromUtf8("btnSizeLength"));

        gridLayout_3->addWidget(btnSizeLength, 1, 0, 1, 1);

        btnFill = new QPushButton(groupBox_2);
        btnFill->setObjectName(QString::fromUtf8("btnFill"));

        gridLayout_3->addWidget(btnFill, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        btnIndexOfLastIndexOf = new QPushButton(groupBox_3);
        btnIndexOfLastIndexOf->setObjectName(QString::fromUtf8("btnIndexOfLastIndexOf"));

        gridLayout_4->addWidget(btnIndexOfLastIndexOf, 0, 0, 1, 1);

        btnContains = new QPushButton(groupBox_3);
        btnContains->setObjectName(QString::fromUtf8("btnContains"));

        gridLayout_4->addWidget(btnContains, 0, 1, 1, 1);

        btnEndWithStartsWith = new QPushButton(groupBox_3);
        btnEndWithStartsWith->setObjectName(QString::fromUtf8("btnEndWithStartsWith"));

        gridLayout_4->addWidget(btnEndWithStartsWith, 1, 0, 1, 1);

        btnCount = new QPushButton(groupBox_3);
        btnCount->setObjectName(QString::fromUtf8("btnCount"));

        gridLayout_4->addWidget(btnCount, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(frame);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        btnTrimmedSimplified = new QPushButton(groupBox_4);
        btnTrimmedSimplified->setObjectName(QString::fromUtf8("btnTrimmedSimplified"));

        gridLayout_5->addWidget(btnTrimmedSimplified, 0, 0, 1, 1);

        btnInset = new QPushButton(groupBox_4);
        btnInset->setObjectName(QString::fromUtf8("btnInset"));

        gridLayout_5->addWidget(btnInset, 0, 1, 1, 1);

        btnRemove = new QPushButton(groupBox_4);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));

        gridLayout_5->addWidget(btnRemove, 1, 0, 1, 1);

        btnReplace = new QPushButton(groupBox_4);
        btnReplace->setObjectName(QString::fromUtf8("btnReplace"));

        gridLayout_5->addWidget(btnReplace, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);

        splitter->addWidget(frame);
        frame_2 = new QFrame(splitter);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(2);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_5 = new QGroupBox(frame_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_2, 1, 0, 1, 1);

        comboBoxStr2 = new QComboBox(groupBox_5);
        comboBoxStr2->addItem(QString());
        comboBoxStr2->addItem(QString());
        comboBoxStr2->addItem(QString());
        comboBoxStr2->setObjectName(QString::fromUtf8("comboBoxStr2"));

        gridLayout_6->addWidget(comboBoxStr2, 1, 1, 1, 1);

        comboBoxStr1 = new QComboBox(groupBox_5);
        comboBoxStr1->addItem(QString());
        comboBoxStr1->setObjectName(QString::fromUtf8("comboBoxStr1"));

        gridLayout_6->addWidget(comboBoxStr1, 0, 1, 1, 4);

        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_7, 1, 2, 1, 1);

        label = new QLabel(groupBox_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        spinBox = new QSpinBox(groupBox_5);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout_6->addWidget(spinBox, 1, 3, 1, 2);


        verticalLayout_3->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(frame_2);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        verticalLayout = new QVBoxLayout(groupBox_6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnClear = new QPushButton(groupBox_6);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        verticalLayout->addWidget(btnClear);

        plainTextEdit = new QPlainTextEdit(groupBox_6);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        verticalLayout_3->addWidget(groupBox_6);

        splitter->addWidget(frame_2);

        gridLayout->addWidget(splitter, 1, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "QString\347\211\271\346\200\247demo", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\210\252\345\217\226", nullptr));
        btnFrontBack->setText(QCoreApplication::translate("Widget", "front && back", nullptr));
        btnLeftRight->setText(QCoreApplication::translate("Widget", "left && right", nullptr));
        btnFirstLast->setText(QCoreApplication::translate("Widget", "fiirst && last", nullptr));
        btnSection->setText(QCoreApplication::translate("Widget", "section *", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\255\230\345\202\250\347\233\270\345\205\263", nullptr));
        btnIsNullIsEmpty->setText(QCoreApplication::translate("Widget", "isNull && isEmpty", nullptr));
        btnResize->setText(QCoreApplication::translate("Widget", "resize", nullptr));
        btnSizeLength->setText(QCoreApplication::translate("Widget", "size && length", nullptr));
        btnFill->setText(QCoreApplication::translate("Widget", "fill", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\346\220\234\347\264\242\345\222\214\345\210\244\346\226\255", nullptr));
        btnIndexOfLastIndexOf->setText(QCoreApplication::translate("Widget", "indexOf &&lastIndexOf", nullptr));
        btnContains->setText(QCoreApplication::translate("Widget", "contains", nullptr));
        btnEndWithStartsWith->setText(QCoreApplication::translate("Widget", "endWith && startsWith", nullptr));
        btnCount->setText(QCoreApplication::translate("Widget", "count", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Widget", "\350\275\254\346\215\242\346\210\226\344\277\256\346\224\271", nullptr));
        btnTrimmedSimplified->setText(QCoreApplication::translate("Widget", "trimmed && simplified", nullptr));
        btnInset->setText(QCoreApplication::translate("Widget", "insert", nullptr));
        btnRemove->setText(QCoreApplication::translate("Widget", "remove", nullptr));
        btnReplace->setText(QCoreApplication::translate("Widget", "replace", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "str2", nullptr));
        comboBoxStr2->setItemText(0, QCoreApplication::translate("Widget", "\\", nullptr));
        comboBoxStr2->setItemText(1, QCoreApplication::translate("Widget", "Qt", nullptr));
        comboBoxStr2->setItemText(2, QCoreApplication::translate("Widget", ".", nullptr));

        comboBoxStr1->setItemText(0, QCoreApplication::translate("Widget", "F:\\Qt6Book\\QtSamples\\qw.cpp", nullptr));

        label_7->setText(QCoreApplication::translate("Widget", "\345\217\202\346\225\260", nullptr));
        label->setText(QCoreApplication::translate("Widget", "str1", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("Widget", "\347\273\223\346\236\234\346\230\276\347\244\272", nullptr));
        btnClear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
