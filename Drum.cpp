#include "Drum.h"
#include "gamewindow.h"

extern GameWindow *gamewindow;

void Drum::spawn()
{
    Drum1_Path = ":/Drum1/images/red.png";
    Drum2_Path = ":/Drum2/images/blue.png";

    //create drums
    Drum *drum = new Drum();
    scene()->addItem(drum);
    srand(time(NULL));
    drum->Drumtype = (rand() % 2) + 1;
    if(drum->Drumtype == 1) drum->setPixmap(QPixmap(Drum1_Path));
    if(drum->Drumtype == 2) drum->setPixmap(QPixmap(Drum2_Path));
    drum->setPos(1000,165);

    //make Drum focusable
    drum->setFlag(QGraphicsItem::ItemIsFocusable);

    //make drum move left
    timer2 = new QTimer(this);
    connect(timer2, SIGNAL(timeout()), drum, SLOT(move()));
    timer2->start(10);
}

void Drum::move()
{
    //move drum left
    setPos(x() - 2,y());

    //set the drum which is at checkpoint focus
    if(pos().x() < 240 && pos().x() > 162)
    {
        setFocus();
    }

    //destroy drum when it goes out of the hit area
    if(pos().x() < 160)
    {
        scene()->removeItem(this);
        delete this;
    }

}
void Drum::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_J && Drumtype == 1)
    {
        //gamewindow->score->increase();
        scene()->removeItem(this);
        delete this;
    }

    if(event->key() == Qt::Key_K && Drumtype == 2)
    {
        //gamewindow->score->increase();
        scene()->removeItem(this);
        delete this;
    }

}




/*Drum1::~Drum1()
{
    delete ui;
}

void Drum::move()
{
    // move drum left
    setPos(x()-5,y());

    // destroy drum when it goes out of the hit area
    if (pos().x() < 160){
        scene()->removeItem(this);
        delete this;
    }
}*/
