#ifndef DRUM1_H
#define DRUM1_H

#include <QGraphicsTextItem>

class Score: public QGraphicsTextItem{
public:
    Score(QGraphicsItem * parent=0);
    void increase();
    int getScore();
private:
    int score;
};

#endif // DRUM1_H
