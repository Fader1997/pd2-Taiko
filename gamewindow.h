#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QTimer>
#include <QTime>
#include <stdlib.h>
#include <time.h>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsTextItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QKeyEvent>
#include <QBrush>
#include <QImage>
#include <QFont>
#include <QObject>
#include "Drum.h"
#include "drum1.h"
#include "drum2.h"
#include <QMainWindow>

namespace Ui {
class GameWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = 0);
    ~GameWindow();

    QLabel *BackGround;
    QLabel *TimeCount, *ScoreCount, *timeRemain, *LastScore;

    QString BackGround_Path, Drum1_Path, Drum2_Path;

    QTimer *Countdown, *timer;

    Score *score;

    QGraphicsScene *scene;
    QGraphicsRectItem *rect;
    QGraphicsView *view;

    Drum *drum, *forKeyuse;
    int a = 30, b = 0;
    void EndGame();
public slots:
    void CountDown();
    //void ScoreAdd();
private:
    Ui::GameWindow *ui;
};

#endif // GAMEWINDOW_H
