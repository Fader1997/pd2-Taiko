#ifndef DRUM_H
#define DRUM_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QList>
#include <QKeyEvent>
#include <QLabel>
#include "drum1.h"

/*namespace Ui {
class Drum1;
}*/

class Drum : /*public QWidget,*/public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT


public:
    /*explicit Drum1(QWidget *parent = 0);
    ~Drum1();*/
    //Drum(QGraphicsItem * parent=0);
    QString Drum1_Path,Drum2_Path;
    QTimer *timer2;
    int Drumtype;

    void keyPressEvent(QKeyEvent * event);
public slots:
    void move();
    void spawn();

/*private:
    Ui::Drum1 *ui;*/
};

#endif // DRUM_H
