#include "startwindow.h"
#include "gamewindow.h"
#include "drum.h"
#include "drum1.h"
#include <QApplication>
#include <QtGui>

GameWindow *gamewindow;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StartWindow w;
    w.show();



    return a.exec();
}
