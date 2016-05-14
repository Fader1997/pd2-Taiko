#ifndef DRUM2_H
#define DRUM2_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QList>

/*namespace Ui {
class Drum2;
}*/

class Drum2 : /*public QWidget*/public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    /*explicit Drum2(QWidget *parent = 0);
    ~Drum2();*/
    Drum2(QGraphicsItem * parent=0);
    QString Drum2_Path;
public slots:
    void move();
/*private:
    Ui::Drum2 *ui;*/
};

#endif // DRUM2_H
