#include "bombyx.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Bombyx w;
    w.show();

    return a.exec();
}
