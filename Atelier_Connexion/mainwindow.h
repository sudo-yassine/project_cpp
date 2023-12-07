#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "arduino.h"
#include "localisation.h"
#include <QMainWindow>
#include<QtCharts>
//#include "calendrier.h"
#include<QChartView>
//#include "emailsender.h"
#include<QBarSet>
#include<QBarSeries>
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
    void on_pushButton_22_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_30_clicked();

    void on_bouton_ajouter_clicked();


    void on_bouton_supprimer_clicked();

    void on_bouton_modifier_clicked();

    void on_bouton_recherche_clicked();

    void on_bouton_tri_clicked();

    void on_bouton_annuler_2_clicked();

    void on_bouton_pdf_clicked();

    void on_calendarWidget_clicked(const QDate &date);


    // void on_sendButton_clicked();

     void on_bouton_annuler_clicked();

     void update_label();
     void on_pushButton_clicked();


     void on_pushButton_20_clicked();

     void on_pushButton_7_clicked();

     void on_pushButton_14_clicked();

     void on_pushButton_16_clicked();

     void on_pushButton_27_clicked();

     void on_pushButton_23_clicked();

     void on_pushButton_25_clicked();

private:
     Ui::MainWindow *ui;
     Localisation L;
     Arduino A;
     QByteArray data;
};

#endif // MAINWINDOW_H
