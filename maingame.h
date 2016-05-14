#ifndef MAINGAME_H
#define MAINGAME_H

#include <QWidget>

namespace Ui {
class maingame;
}

class maingame : public QWidget
{
    Q_OBJECT

public:
    explicit maingame(QWidget *parent = 0);
    ~maingame();

private:
    Ui::maingame *ui;
};

#endif // MAINGAME_H
