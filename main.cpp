#include "guiapp.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    guiApp w;
    w.show();

    return a.exec();
}
