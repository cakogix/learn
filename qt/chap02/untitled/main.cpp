#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QString str;
    qDebug()<<str.asprintf("0X%0X",QT_VERSION);
}
