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
#include"client.h"

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

     void on_pushButton_10_clicked();

     void on_pushButton_32_clicked();

     void on_pushButton_13_clicked();
     void on_pb_ajouter_clicked();

     void on_pb_supprimer_clicked();

     void on_pb_modifier_clicked();

     void on_pb_chercher_clicked();

     void on_pb_trier_clicked();

    void on_pb_PDF_clicked();

   void on_pb_stat_clicked();
   void on_pb_ajouter_2_clicked();

   void on_pb_supprimer_2_clicked();

   void on_pb_modifier_2_clicked();

   void on_pushButton_4_clicked();

   void on_pushButton_5_clicked();

   void on_pushButton_3_clicked();

   void on_lineEdit_textChanged(const QString &arg1);

   void on_pushButton_2_clicked();

   void on_envoyer_clicked();

   void sendMail();

   void mailSent(QString) ;



   void on_pb_Qrcode_clicked();

   void on_pb_CSV_clicked();

  void on_pbarduino_clicked();

  void on_pushButton_11_clicked();

  void on_pushButton_33_clicked();

  void on_pushButton_34_clicked();

  void on_pushButton_35_clicked();

  void on_pushButton_36_clicked();

  void on_pushButton_37_clicked();

private:
     Ui::MainWindow *ui;
     Localisation L;
     Arduino A,Ar;
     QByteArray data;
     Client C;
};

#endif // MAINWINDOW_H
