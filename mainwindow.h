#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "employee.h"
#include "paiment.h"
#include <QMainWindow>
#include"arduino.h"


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

    void on_pb_modifier_clicked();

    void on_pb_tri_clicked();

    void on_pb_pdf_clicked();

    void on_pushButton_clicked();

    void on_pushButton_salaire_clicked();

    void on_verifier_clicked();

private:
    Ui::MainWindow *ui;
    employee p;
    paiment e;
    arduino a;
    QByteArray data;
};

#endif // MAINWINDOW_H
