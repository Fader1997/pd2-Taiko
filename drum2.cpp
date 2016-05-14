#include "drum2.h"

Drum2::Drum2(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent)
{
    //ui->setupUi(this);

    Drum2_Path = ":/Drum2/images/blue.png";
    //set position
    setPos(1050,165);
    // drew the drum
    setPixmap(QPixmap(Drum2_Path));
    // make/connect a timer to move()the drum every so often
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    // start the timer
    timer->start(50);
}

/*Drum2::~Drum2()
{
    delete ui;
}*/

void Drum2::move()
{
    // move drum left
    setPos(x()-5,y());

    // destroy drum when it goes out of the hit area
    if (pos().x() < 160){
        scene()->removeItem(this);
        delete this;
    }
}
