#ifndef MAINWINDOWL_H
#define MAINWINDOWL_H

#include <QMainWindow>

namespace Ui {
class MainWindowL;
}

class MainWindowL : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowL(QWidget *parent = nullptr);
    ~MainWindowL();

private slots:
    void on_pb_connecter_clicked();

private:
    Ui::MainWindowL *ui;
};

#endif // MAINWINDOWL_H
