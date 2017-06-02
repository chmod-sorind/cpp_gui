#include "guiapp.h"
#include "ui_guiapp.h"

guiApp::guiApp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::guiApp)
{
    ui->setupUi(this);
}

guiApp::~guiApp()
{
    delete ui;
}
