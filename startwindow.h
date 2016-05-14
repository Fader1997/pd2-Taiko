#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include "gamewindow.h"

namespace Ui {
class StartWindow;
}

class StartWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit StartWindow(QWidget *parent = 0);
    ~StartWindow();

    //void GameInterface();
public slots:
    void Start_GameMode();
    //void on_pushButton_clicked();
private:
    Ui::StartWindow *ui;
    //GameWindow gamewindow;

    GameWindow *GameInfo;


};

#endif // STARTWINDOW_H
