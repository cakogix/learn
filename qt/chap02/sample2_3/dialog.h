#ifndef DIALOG_H
#define DIALOG_H
#include <QDialog>
class QCheckBox;
class QRadioButton;
class QPlainTextEdit;
class QPushButton;

class Dialog : public QDialog
{
    Q_OBJECT
private:
    QCheckBox *checkBoxUnderLine;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxBold;

    QRadioButton *radioBlack;
    QRadioButton *radioBlue;
    QRadioButton *radioRed;

    QPlainTextEdit *txtEdit;

    QPushButton *btnOk;
    QPushButton *btnCancel;
    QPushButton *btnClose;

private slots:
    void do_checkBoxUnderLine(bool checked);
    void do_checkBoxBold(bool checked);
    void do_checkBoxItalic(bool checked);

    void do_radioFontColor();


public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
};
#endif // DIALOG_H
