#include "startwindow.h"
#include "end.h"
#include "ui_end.h"

End::End(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::End)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(restart()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(close()));

}

End::~End()
{
    delete ui;
}

void End::restart()
{
    StartWindow *Newgame = new StartWindow(this);
    this->setCentralWidget(Newgame);
    this->hide();
    Newgame->show();
}
