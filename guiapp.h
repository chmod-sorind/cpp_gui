#ifndef GUIAPP_H
#define GUIAPP_H

#include <QWidget>

namespace Ui {
class guiApp;
}

class guiApp : public QWidget
{
    Q_OBJECT

public:
    explicit guiApp(QWidget *parent = 0);
    ~guiApp();

private:
    Ui::guiApp *ui;
};

#endif // GUIAPP_H
