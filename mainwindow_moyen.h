#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "transport.h"
#include "arduino.h"

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

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

    void on_pb_chercher_clicked();

    void on_pb_trier_clicked();

   void on_pb_PDF_clicked();

  void on_pb_stat_clicked();



  void on_pb_Qrcode_clicked();

  void on_pb_CSV_clicked();

  void on_pbarduino_clicked();

private:
    Ui::MainWindow *ui;
    Transport t;
    QByteArray data; // // variable contenant les données reçues

    Arduino Ar; // objet temporaire
};


#endif // MAINWINDOW_H


