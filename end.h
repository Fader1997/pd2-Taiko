#ifndef END_H
#define END_H

#include <QMainWindow>

namespace Ui {
class End;
}

class End : public QMainWindow
{
    Q_OBJECT

public:
    explicit End(QWidget *parent = 0);
    ~End();
public slots:
    void restart();
private:
    Ui::End *ui;
};

#endif // END_H
