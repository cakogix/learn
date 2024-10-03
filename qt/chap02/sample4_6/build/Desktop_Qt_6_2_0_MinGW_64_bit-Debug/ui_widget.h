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
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QDial *dial;
    QLabel *label;
    QSlider *horizontalSlider;
    QLabel *label_2;
    QScrollBar *horizontalScrollBar;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QProgressBar *progressBar;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QCheckBox *checkBoxVisible;
    QCheckBox *checkBoxInverted;
    QRadioButton *radioButtonPercent;
    QRadioButton *radioButtonValue;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(299, 288);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        dial = new QDial(groupBox);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setMinimum(1);
        dial->setMaximum(200);
        dial->setValue(25);

        gridLayout_3->addWidget(dial, 0, 0, 2, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 1, 1, 1);

        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(200);
        horizontalSlider->setValue(25);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 1, 1, 1);

        horizontalScrollBar = new QScrollBar(groupBox);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setMinimum(1);
        horizontalScrollBar->setMaximum(200);
        horizontalScrollBar->setValue(25);
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalScrollBar, 1, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(groupBox_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        progressBar = new QProgressBar(frame);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximum(200);
        progressBar->setValue(25);

        horizontalLayout->addWidget(progressBar);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(groupBox_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBoxVisible = new QCheckBox(frame_2);
        checkBoxVisible->setObjectName(QString::fromUtf8("checkBoxVisible"));

        gridLayout->addWidget(checkBoxVisible, 0, 0, 1, 1);

        checkBoxInverted = new QCheckBox(frame_2);
        checkBoxInverted->setObjectName(QString::fromUtf8("checkBoxInverted"));

        gridLayout->addWidget(checkBoxInverted, 0, 1, 1, 1);

        radioButtonPercent = new QRadioButton(frame_2);
        radioButtonPercent->setObjectName(QString::fromUtf8("radioButtonPercent"));

        gridLayout->addWidget(radioButtonPercent, 1, 0, 1, 1);

        radioButtonValue = new QRadioButton(frame_2);
        radioButtonValue->setObjectName(QString::fromUtf8("radioButtonValue"));

        gridLayout->addWidget(radioButtonValue, 1, 1, 1, 1);


        verticalLayout->addWidget(frame_2);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\273\221\345\212\250\350\276\223\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\273\221\345\212\250\346\235\241", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\267\346\273\232\346\235\241", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "ProgressBar\346\230\276\347\244\272\345\222\214\350\256\276\347\275\256", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\350\277\233\345\272\246\346\235\241", nullptr));
        checkBoxVisible->setText(QCoreApplication::translate("Widget", "textVisible", nullptr));
        checkBoxInverted->setText(QCoreApplication::translate("Widget", "invertedAppearance", nullptr));
        radioButtonPercent->setText(QCoreApplication::translate("Widget", "\346\240\274\345\274\217\346\230\276\347\244\272-\347\231\276\345\210\206\346\257\224", nullptr));
        radioButtonValue->setText(QCoreApplication::translate("Widget", "\346\240\274\345\274\217\346\230\276\347\244\272-\345\275\223\345\211\215\345\200\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
