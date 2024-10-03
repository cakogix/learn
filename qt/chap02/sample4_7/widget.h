#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
class QTimer;
class QElapsedTimer;


QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
private:
    QTimer * m_timer;//定时器
    QElapsedTimer * m_counter;
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnTime_clicked();

    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
