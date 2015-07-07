#ifndef BOMBYX_H
#define BOMBYX_H

#include <QWidget>

namespace Ui {
class Bombyx;
}

class Bombyx : public QWidget
{
    Q_OBJECT

public:
    explicit Bombyx(QWidget *parent = 0);
    ~Bombyx();

private:
    Ui::Bombyx *ui;
    int imin;
    int imax;
    double k;

private slots:
    void graph();
    void graph2();
};

#endif // BOMBYX_H
