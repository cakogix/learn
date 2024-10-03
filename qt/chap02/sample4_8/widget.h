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
    void do_timer_timeout();
    void on_btnStart_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
