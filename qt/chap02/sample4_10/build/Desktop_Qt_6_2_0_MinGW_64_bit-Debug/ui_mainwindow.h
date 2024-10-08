/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actFile_New;
    QAction *actFile_Open;
    QAction *actFile_Save;
    QAction *actEidt_Cut;
    QAction *actEdit_Copy;
    QAction *actEdit_Paste;
    QAction *actEdit_Undo;
    QAction *actEidt_Redo;
    QAction *actFont_Bold;
    QAction *actFont_Italic;
    QAction *actFont_UnderLine;
    QAction *actLang_CN;
    QAction *actLang_EN;
    QAction *actClose;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_M;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(823, 600);
        actFile_New = new QAction(MainWindow);
        actFile_New->setObjectName(QString::fromUtf8("actFile_New"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/image/add-bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_New->setIcon(icon);
        actFile_New->setMenuRole(QAction::NoRole);
        actFile_Open = new QAction(MainWindow);
        actFile_Open->setObjectName(QString::fromUtf8("actFile_Open"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/image/import.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_Open->setIcon(icon1);
        actFile_Open->setMenuRole(QAction::NoRole);
        actFile_Save = new QAction(MainWindow);
        actFile_Save->setObjectName(QString::fromUtf8("actFile_Save"));
        actFile_Save->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/image/survey.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_Save->setIcon(icon2);
        actFile_Save->setMenuRole(QAction::NoRole);
        actEidt_Cut = new QAction(MainWindow);
        actEidt_Cut->setObjectName(QString::fromUtf8("actEidt_Cut"));
        actEidt_Cut->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/image/move.png"), QSize(), QIcon::Normal, QIcon::Off);
        actEidt_Cut->setIcon(icon3);
        actEidt_Cut->setMenuRole(QAction::NoRole);
        actEdit_Copy = new QAction(MainWindow);
        actEdit_Copy->setObjectName(QString::fromUtf8("actEdit_Copy"));
        actEdit_Copy->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/image/arrow-left-bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Copy->setIcon(icon4);
        actEdit_Copy->setMenuRole(QAction::NoRole);
        actEdit_Paste = new QAction(MainWindow);
        actEdit_Paste->setObjectName(QString::fromUtf8("actEdit_Paste"));
        actEdit_Paste->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/image/arrow-right-bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Paste->setIcon(icon5);
        actEdit_Paste->setMenuRole(QAction::NoRole);
        actEdit_Undo = new QAction(MainWindow);
        actEdit_Undo->setObjectName(QString::fromUtf8("actEdit_Undo"));
        actEdit_Undo->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/image/run-in.png"), QSize(), QIcon::Normal, QIcon::Off);
        actEdit_Undo->setIcon(icon6);
        actEdit_Undo->setMenuRole(QAction::NoRole);
        actEidt_Redo = new QAction(MainWindow);
        actEidt_Redo->setObjectName(QString::fromUtf8("actEidt_Redo"));
        actEidt_Redo->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/image/run-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        actEidt_Redo->setIcon(icon7);
        actEidt_Redo->setMenuRole(QAction::NoRole);
        actFont_Bold = new QAction(MainWindow);
        actFont_Bold->setObjectName(QString::fromUtf8("actFont_Bold"));
        actFont_Bold->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/image/smile-filling.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFont_Bold->setIcon(icon8);
        actFont_Bold->setMenuRole(QAction::NoRole);
        actFont_Italic = new QAction(MainWindow);
        actFont_Italic->setObjectName(QString::fromUtf8("actFont_Italic"));
        actFont_Italic->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/image/pin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFont_Italic->setIcon(icon9);
        actFont_Italic->setMenuRole(QAction::NoRole);
        actFont_UnderLine = new QAction(MainWindow);
        actFont_UnderLine->setObjectName(QString::fromUtf8("actFont_UnderLine"));
        actFont_UnderLine->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/image/intermediate-filling.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFont_UnderLine->setIcon(icon10);
        actFont_UnderLine->setMenuRole(QAction::NoRole);
        actLang_CN = new QAction(MainWindow);
        actLang_CN->setObjectName(QString::fromUtf8("actLang_CN"));
        actLang_CN->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/image/toggle-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        actLang_CN->setIcon(icon11);
        actLang_CN->setMenuRole(QAction::NoRole);
        actLang_EN = new QAction(MainWindow);
        actLang_EN->setObjectName(QString::fromUtf8("actLang_EN"));
        actLang_EN->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/image/toggle-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        actLang_EN->setIcon(icon12);
        actLang_EN->setMenuRole(QAction::NoRole);
        actClose = new QAction(MainWindow);
        actClose->setObjectName(QString::fromUtf8("actClose"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/image/close-bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon13);
        actClose->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 823, 21));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        menu_E = new QMenu(menubar);
        menu_E->setObjectName(QString::fromUtf8("menu_E"));
        menu_M = new QMenu(menubar);
        menu_M->setObjectName(QString::fromUtf8("menu_M"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_M->menuAction());
        menu_F->addAction(actFile_New);
        menu_F->addAction(actFile_Open);
        menu_F->addAction(actFile_Save);
        menu_E->addAction(actEidt_Cut);
        menu_E->addAction(actEdit_Copy);
        menu_E->addAction(actEdit_Paste);
        menu_E->addAction(actEdit_Undo);
        menu_E->addAction(actEidt_Redo);
        menu_M->addAction(actFont_Bold);
        menu_M->addAction(actFont_Italic);
        menu_M->addAction(actFont_UnderLine);
        menu_M->addSeparator();
        menu_M->addAction(actLang_CN);
        menu_M->addAction(actLang_EN);
        toolBar->addAction(actFile_New);
        toolBar->addAction(actFile_Open);
        toolBar->addAction(actFile_Save);
        toolBar->addSeparator();
        toolBar->addAction(actEidt_Cut);
        toolBar->addAction(actEdit_Copy);
        toolBar->addAction(actEdit_Paste);
        toolBar->addSeparator();
        toolBar->addAction(actEdit_Undo);
        toolBar->addAction(actEidt_Redo);
        toolBar->addSeparator();
        toolBar->addAction(actFont_Bold);
        toolBar->addAction(actFont_Italic);
        toolBar->addAction(actFont_UnderLine);
        toolBar->addSeparator();
        toolBar->addAction(actLang_CN);
        toolBar->addAction(actLang_EN);

        retranslateUi(MainWindow);
        QObject::connect(actEidt_Cut, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::cut));
        QObject::connect(actEdit_Copy, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::copy));
        QObject::connect(actEdit_Paste, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::paste));
        QObject::connect(actEdit_Undo, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::undo));
        QObject::connect(actEidt_Redo, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::redo));
        QObject::connect(textEdit, &QTextEdit::redoAvailable, actEidt_Redo, &QAction::setEnabled);
        QObject::connect(textEdit, &QTextEdit::undoAvailable, actEdit_Undo, &QAction::setEnabled);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actFile_New->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(tooltip)
        actFile_New->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFile_New->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actFile_Open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        actFile_Open->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFile_Open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actFile_Save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        actFile_Save->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFile_Save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actEidt_Cut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(tooltip)
        actEidt_Cut->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actEidt_Cut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actEdit_Copy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(shortcut)
        actEdit_Copy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actEdit_Paste->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(shortcut)
        actEdit_Paste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actEdit_Undo->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
#if QT_CONFIG(tooltip)
        actEdit_Undo->setToolTip(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actEdit_Undo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actEidt_Redo->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232", nullptr));
#if QT_CONFIG(tooltip)
        actEidt_Redo->setToolTip(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actEidt_Redo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actFont_Bold->setText(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actFont_Bold->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actFont_Italic->setText(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actFont_Italic->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actFont_UnderLine->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        actFont_UnderLine->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        actLang_CN->setText(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207", nullptr));
#if QT_CONFIG(tooltip)
        actLang_CN->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207", nullptr));
#endif // QT_CONFIG(tooltip)
        actLang_EN->setText(QCoreApplication::translate("MainWindow", "\350\213\261\346\226\207", nullptr));
#if QT_CONFIG(tooltip)
        actLang_EN->setToolTip(QCoreApplication::translate("MainWindow", "\350\213\261\346\226\207", nullptr));
#endif // QT_CONFIG(tooltip)
        actClose->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        actClose->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\234\254\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">321e11dweqf23r31rccqasdqwdqw3fg32rf13</p></body></html>", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menu_M->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217(&M", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
