#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "employee.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supp_clicked();

private:
    Ui::MainWindow *ui;
    employee p;
};

#endif // MAINWINDOW_H
