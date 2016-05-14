#include "startwindow.h"
#include "gamewindow.h"
#include "drum.h"
#include "ui_startwindow.h"

StartWindow::StartWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StartWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(Start_GameMode()));
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(close()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(close()));

}

void StartWindow::Start_GameMode()
{
    QWidget *gameWindow = new QWidget;
    GameInfo = new GameWindow(gameWindow);
    //connect(GameInfo->);
}


StartWindow::~StartWindow()
{
    delete ui;
}


/*void StartWindow::GameInterface()
{
    QFrame *ShowInterface = new QFrame;
    ShowInterface->setObjectName("Interface");
    ShowInterface->setStyleSheet("QFrame#Interface{border-image:url(images/bg_clear.png)}");
    ShowInterface->show();
}

void StartWindow::on_pushButton_clicked()
{
    this->hide();
    gamewindow.show();
    gamewindow.exec();
    this->show();
}*/


