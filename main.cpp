#include "mainwindow.h"
#include <QApplication>
#include <qfontdatabase.h>
#include <qresource.h>
#include <QtQml>
#include <qmessagebox.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
