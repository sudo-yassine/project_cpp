#ifndef MAINWINDOWLOG_H
#define MAINWINDOWLOG_H


#include <QMainWindow>
#include"login.h"
namespace Ui {
class MainWindowlog;
}

class MainWindowlog : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowlog(QWidget *parent = nullptr);
    ~MainWindowlog();

private slots:
    void on_pb_connecter_clicked();

private:
    Ui::MainWindowlog *ui;
};


#endif // MAINWINDOWLOG_H
