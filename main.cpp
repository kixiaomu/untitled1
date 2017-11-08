#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QString>
#include <QLatin1String>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file("../untitled1/style.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    qApp->setStyleSheet(styleSheet);
    file.close();



    MainWindow w;
    w.show();

    return a.exec();
}
