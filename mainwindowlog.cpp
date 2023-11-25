#include<ui_mainwindow2.h>
#include<mainwindowlog.h>

MainWindowlog::MainWindowlog(QWidget *parent):

         QMainWindowlog (parent),
         ui(new Ui::MainWindowlog)
{
    ui->setupUi(this);
}
MainWindowlog::~MainWindowlog()
{
    delete ui;
}
