#include "startwindow.h"
#include "gamewindow.h"
#include "Drum.h"
#include "drum2.h"
#include "ui_gamewindow.h"
#include "end.h"

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);

    BackGround_Path = ":/GameScene/images/bg_clear.png";

    // create a scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,982,607);
    scene->setBackgroundBrush(QBrush(QImage(BackGround_Path)));
    // create an item to put into the scene
    /*rect = new QGraphicsRectItem();
    rect->setRect(0,0,100,100);
    // add the item to the scene
    scene->addItem(rect);

    // make rect focusable
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();*/


    // create a view to visualize the scene
    view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // show the view
    view->show();
    view->setFixedSize(982,607);

    TimeCount = new QLabel;
    scene->addWidget(TimeCount);
    //TimeCount->setParent(parent);
    TimeCount->setGeometry(50,5,100,90);
    TimeCount->setText("Time :");
    TimeCount->setAttribute(Qt::WA_TranslucentBackground);
    QFont ft;
    ft.setPointSize(20);
    TimeCount->setFont(ft);
    //TimeCount->show();


    timeRemain = new QLabel;
    scene->addWidget(timeRemain);
    timeRemain->setGeometry(145,5,100,90);
    timeRemain->setNum(a);
    timeRemain->setAttribute(Qt::WA_TranslucentBackground);
    timeRemain->setFont(ft);

    ScoreCount = new QLabel;
    scene->addWidget(ScoreCount);
    //ScoreCount->setParent(parent);
    ScoreCount->setGeometry(700,5,100,90);
    ScoreCount->setText("Score :");
    ScoreCount->setAttribute(Qt::WA_TranslucentBackground);
    ScoreCount->setFont(ft);
    //ScoreCount->show();

    //forKeyuse = new Drum;
    //connect(forKeyuse,SIGNAL(keyPressEvent(QKeyEvent * event)),this,SLOT(ScoreAdd()));

    /*Score = new QLabel;
    scene->addWidget(Score);
    Score->setGeometry(820,5,100,90);
    Score->setNum(b);
    Score->setAttribute(Qt::WA_TranslucentBackground);
    Score->setFont(ft);*/


    score = new Score();
    //scene->addItem(score);

    timer = new QTimer;
    // spawn drums
    drum = new Drum();
    scene->addItem(drum);
    connect(timer,SIGNAL(timeout()),drum,SLOT(spawn()));
    timer->start(1000);



    /*if((rand() % 2) + 1 == 1)
    {
        // spawn drums
        connect(timer,SIGNAL(timeout()),this,SLOT(spawnRed()));
        timer->start(1500);
    }
    else
    {
        // spawn drums
        connect(timer,SIGNAL(timeout()),this,SLOT(spawnBlue()));
        timer->start(1500);
    }*/


    Countdown = new QTimer();
    connect(Countdown,SIGNAL(timeout()),this,SLOT(CountDown()));
    Countdown->start(1000);







    /*BackGround = new QLabel;
    TimeCount = new QLabel;
    ScoreCount = new QLabel;
    Storedrum[200] = new QLabel;
    Drumtest = new QLabel;
    //QGridLayout *layout = new QGridLayout;
    //layout->addWidget(BackGround);


    BackGround->setParent(parent);
    BackGround->setGeometry(0,0,982,607);
    BackGround->setPixmap(QPixmap(BackGround_Path));
    BackGround->setScaledContents(true);
    BackGround->show();





    for(int i = 0;i < 10;i++)
    {
        if(Storerand[i] == 1)
        {
            Storedrum[i]->setParent(parent);
            Storedrum[i]->setGeometry(800,200,10,10);
            Storedrum[i]->setPixmap(QPixmap(Drum1_Path));
            Storedrum[i]->setScaledContents(true);
            Storedrum[i]->show();
        }
        else
        {
            Storedrum[i]->setParent(parent);
            Storedrum[i]->setGeometry(750,200,10,10);
            Storedrum[i]->setPixmap(QPixmap(Drum2_Path));
            Storedrum[i]->setScaledContents(true);
            Storedrum[i]->show();
        }

    }*/
}

GameWindow::~GameWindow()
{
    delete ui;
}


void GameWindow::CountDown()
{
    timeRemain->setNum(a--);
    if(a == 0)
    {
        End *newgame = new End(this);
        this->setCentralWidget(newgame);
        this->hide();
        newgame->show();




        /*LastScore = new QLabel;
        scene->addWidget(LastScore);
        LastScore->setGeometry(145,5,100,90);
        LastScore->setNum();
        LastScore->setAttribute(Qt::WA_TranslucentBackground);
        LastScore->setFont(ft);*/
    }
}

/*void GameWindow::ScoreAdd()
{
    Score->setNum(b++);
}*/




/*void GameWindow::spawnRed()
{
    // create the red drum
    Drum1 * drum1 = new Drum1();
    scene->addItem(drum1);
}

void GameWindow::spawnBlue()
{
    // create the blue drum
    Drum2 * drum2 = new Drum2();
    scene->addItem(drum2);
}*/
