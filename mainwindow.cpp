#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "transport.h"
#include "arduino.h"

#include <QMessageBox>
#include <QIntValidator>
#include <QDebug>
#include<QSqlQuery>
#include <QStandardItemModel>
#include <QRegExp>
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QSqlRecord>
#include <QTableWidgetSelectionRange>
#include <QPdfWriter>
#include<QPainter>
#include <QRegExpValidator>
#include <QTextStream>
#include <QFile>
#include <QDataStream>
#include <QUrlQuery>
#include<QUrlQuery>
#include<QFileDialog>
#include "qrcode.h"
#include <QPieSlice>
#include<QPieSeries>
#include<QtCharts>


#include <QtSql>

#include <QSqlQueryModel>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QSerialPort>
#include <QSerialPortInfo>
#include "arduino.h"

using namespace qrcodegen;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   ui->l_etat->setValidator( new QIntValidator(100, 9999999, this));
   ui->les_Papiers->setValidator( new QIntValidator(100, 9999999, this));

   ui->tab_moyen->setModel(t.afficher());
   // Connect to Arduino
      int ret = Ar.connect_arduino("COM7"); // changer le com si necessaire
      switch (ret) {
      case 0:
          qDebug() << "Arduino is available and connected to: " << Ar.getarduino_port_name();
          // Connect Arduino signal to the update_label slot
          QObject::connect(Ar.getserial(), SIGNAL(readyRead()), this, SLOT(update_label()));
          // permet de lancer le slot update_label suite à la reception du signal readyRead (reception des données).
          break;
      case 1:
          qDebug() << "Arduino is available but already connected to: " << Ar.getarduino_port_name();
          // You may want to handle this case differently, e.g., show a message
          break;
      case -1:
          qDebug() << "Arduino is not available";
          // Handle the case where Arduino is not available
          // Gérer le cas où Arduino n'est pas disponible
          break;
      }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{   QString matricule=ui->la_matricule->text();
    QString type_panne=ui->le_typepanne->text();
    QString marque=ui->la_Marque->text();
    QString type=ui->le_type->text();
    int etat=ui->l_etat->text().toInt();
    int papier=ui->les_Papiers->text().toInt();
    Transport t(matricule,type_panne,marque,type,etat,papier);

    bool test=t.ajouter();
    QMessageBox msgBox;
    if (test)
    {
        msgBox.setText("Echec!");
    ui->tab_moyen->setModel(t.afficher());
    }
    else
    {
    ui->tab_moyen->setModel(t.afficher());
        msgBox.setText("Ajout avec succes!!");
        msgBox.exec();}
}


void MainWindow::on_pb_supprimer_clicked()
{
    Transport t1; t1.setmatricule(ui->matricule_supp->text());
    bool test=t1.supprimer(t1.getmatricule());
    QMessageBox msgBox;
    if (test)
       {
        msgBox.setText("Suppression avec succes!!");
        ui->tab_moyen->setModel(t.afficher());


    }
    else
        msgBox.setText("Echec!");
        msgBox.exec();
}

void MainWindow::on_pb_modifier_clicked()
{
        //QString reference=ui->bouton_modifier->text();
      QString type_panne=ui->le_typepanne_2->text();
      QString marque=ui->la_Marque_2->text();
      QString type=ui->le_type_2->text();
      int etat=ui->l_etat_2->text().toInt();
      int papier=ui->les_papiers2->text().toInt();
      QString matricule=ui->la_matricule_2->text();


      Transport t(matricule,type_panne,marque,type,etat,papier);

        bool test=t.modifier();
       QMessageBox msgBox;
        if(test )
        {
            msgBox.setText("Modification avec succes.");
            ui->tab_moyen->setModel(t.afficher());
            ui->tab_moyen->setModel(t.afficher());
        }
        else
            msgBox.setText("Echec de Modification.");
            msgBox.exec();
            ui->tab_moyen->setModel(t.afficher());
            ui->tab_moyen->setModel(t.afficher());

    }




    /* QString matricule=ui->la_matricule_2->text();
    QString type_panne=ui->le_typepanne_2->text();
    QString marque=ui->la_Marque_2->text();
    QString type=ui->le_type_2->text();
    int etat=ui->l_etat_2->text().toInt();
    int papier=ui->les_papiers2->text().toInt();
    Transport t(matricule,type_panne,marque,type,etat,papier);

    bool test=t.modifier();
    QMessageBox msgBox;
    if (test)
    {
        msgBox.setText("Modifier avec succes!!");
        ui->tab_moyen->setModel(t.afficher());
    }
    else
    {
        msgBox.setText("Echec!");
        msgBox.exec();
    }*/
/*
       QString matricule=ui->la_matricule_2->text();

        Transport t1;
        t1.setmatricule(matricule);

           QString Nouvtype_panne=ui->le_typepanne_2->text();
           QString Nouvmarque=ui->la_Marque_2->text();
           QString Nouvtype=ui->le_type_2->text();
           int Nouvetat=ui->l_etat_2->text().toInt();
           int Nouvpapier=ui->les_papiers2->text().toInt();



            t1.setmatricule(matricule);
            t1.settype_panne(Nouvtype_panne);
            t1.setmarque(Nouvmarque);
            t1.settype(Nouvtype);
            t1.setetat(Nouvetat);
            t1.setpapier(Nouvpapier);


            bool test = t1.modifier();

            if (test) {
                QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Modification successful.\n Click Cancel to exit."), QMessageBox::Cancel);
                ui->tab_moyen->setModel(t1.afficher()); // Mise à jour
            } else {
                QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                    QObject::tr("Modification failed.\nClick Cancel to exit."), QMessageBox::Cancel);
            }*/
    //}



/*
void MainWindow::on_pb_chercher_clicked()
{
   Transport t;

   int matricule=ui->line_recherche->text().toInt();



            QSqlQueryModel *verif=t.rechercher(matricule);
            ui->tab_moyen->setModel((verif));


            if (verif!=nullptr)
                         {
                             ui->tab_moyen->setModel((verif));
                             QMessageBox::information(this, QObject::tr("recherche successfully!"),
                             QObject::tr("recherche successfully!.\n" "Click Cancel to exit."), QMessageBox::Cancel);

            }
                         else
    {
                             QMessageBox::information(this, QObject::tr("recherche failed!"),
                             QObject::tr("recherche failed!.\n" "Click Cancel to exit."), QMessageBox::Cancel);
    }
}
*/
void MainWindow::on_pb_chercher_clicked()
    {
            QString matricule = ui->line_recherche->text();
            Transport T;

            QSqlQueryModel *verif = T.rechercher(matricule);

            if (verif != nullptr)
            {
            ui->tab_moyen->setModel(verif);
            QMessageBox::information(this, QObject::tr("Recherche successful!"),
                                     QObject::tr("Recherche successful.\nClick Cancel to exit."), QMessageBox::Cancel);
            }
            else
            {
            QMessageBox::information(this, QObject::tr("Recherche failed!"),
                                     QObject::tr("Recherche failed.\nClick Cancel to exit."), QMessageBox::Cancel);
            }
    }

void MainWindow::on_pb_trier_clicked()
{
   Transport T;
               QSqlQueryModel *model = T.tri();


               ui->tab_moyen->setModel(model);

}
// export pdf
void MainWindow::on_pb_PDF_clicked()

{
    QPdfWriter pdf("C:/Users/Syrine Jaafoura/Desktop/Transplogie.pdf");

             QPainter painter(&pdf);
             QString strStream;

               QTextStream out(&strStream);
             int i = 4000;
                    painter.setPen(Qt::darkCyan);
                    painter.setFont(QFont("New York", 25));
                    painter.drawText(1600,1400,"LISTE DES MOYENS DE TRANSPORT");

                    painter.setPen(Qt::BlankCursor);
                    painter.setFont(QFont("Time New Roman", 12));

                    painter.drawRect(100,100,9400,2500);
                    painter.drawRect(100,3000,9400,500);


                    painter.drawText(500,3300,"Matricule");
                    painter.drawText(2200,3300,"Type Panne");
                    painter.drawText(3800,3300,"Marque");
                    painter.drawText(5100,3300,"Etat");
                    painter.drawText(6400,3300,"Type");
                    painter.drawText(7400,3300,"Papier");



                    painter.drawRect(100,3000,9400,9000);


                    QSqlQuery query;
                    query.prepare("select * from GS_MOYEN_DE_TRANSPORT");
                    query.exec();
                    while (query.next())
                    {
                        painter.drawText(400,i,query.value(0).toString());
                        painter.drawText(2400,i,query.value(1).toString());
                        painter.drawText(4000,i,query.value(2).toString());
                        painter.drawText(5300,i,query.value(3).toString());
                        painter.drawText(6200,i,query.value(4).toString());
                        painter.drawText(7600,i,query.value(5).toString());
                        painter.drawText(8000,i,query.value(6).toString());



                       i = i + 350;
                    }
                    QMessageBox::information(this, QObject::tr("PDF Enregistré!"),
                    QObject::tr("PDF Enregistré!.\n" "Click Cancel to exit."), QMessageBox::Cancel);

}
void MainWindow::on_pb_stat_clicked()
{

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from GS_MOYEN_DE_TRANSPORT where etat = 1 ");
    float id = model->rowCount();
    model->setQuery("select * from GS_MOYEN_DE_TRANSPORT where etat = 0 ");
    float idd = model->rowCount();

    float total = id + idd ;

    QString a = QString("Les vehicules ou l'etat est 1 :  " + QString::number((id * 100) / total, 'f', 2) + "%");
    QString b = QString("Les vehicules ou l'etat est 0 :  " + QString::number((idd * 100) / total, 'f', 2) + "%");

    // Create the pie chart series
    QPieSeries *series = new QPieSeries();

    QPieSlice *slice1 = series->append(a, id);
    slice1->setBrush(QColor(180, 240, 120, 120));

    QPieSlice *slice2 = series->append(b, idd);
    slice2->setBrush(QColor(0, 140, 60, 120));


    if (id != 0) {
        slice1->setLabelVisible();
        slice1->setPen(QPen());
    }

    if (idd != 1) {
        // Add label, explode and define brush for 2nd slice
        QPieSlice *slice2 = series->slices().at(1);
        //slice2->setExploded();
        slice2->setLabelVisible();
    }



    // Create the chart widget
    QChart *chart = new QChart();

    // Add the series to the chart
    chart->addSeries(series);

    chart->setTitle("Pourcentage d'etat des vehicules " + QString::number(total));
  //  chart->legend()->hide();

    // Create the chart view
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->resize(1000, 500);
    chartView->show();

}
// qrcode
void MainWindow::on_pb_Qrcode_clicked()
{
                 int tabeq=ui->tab_moyen->currentIndex().row();
                 QVariant idd=ui->tab_moyen->model()->data(ui->tab_moyen->model()->index(tabeq,0));
                 QString matricule=idd.toString();
                 QSqlQuery qry;
                 qry.prepare("select * from GS_MOYEN_DE_TRANSPORT where MATRICULE=:code");
                 qry.bindValue(":code",matricule);
                 qry.exec();

                  QString marque,type,type_panne;//attributs
                  int etat,papier;

                while(qry.next()){

                     matricule=qry.value(2).toString();
                     marque=qry.value(1).toString();
                     type_panne=qry.value(5).toString();
                     type=qry.value(4).toString();
                     etat=qry.value(0).toInt();
                     papier=qry.value(3).toInt();
                 }
                 matricule=QString(matricule);
                        matricule="CODE:\t" +matricule+ "marque\t:" +marque+ "type_panne:\t" +type_panne+ "type:\t" +type+ "etat:\t" +etat+ "papier:\t" +papier ;
                 QrCode qr = QrCode::encodeText(matricule.toUtf8().constData(), QrCode::Ecc::HIGH);

                 // Read the black & white pixels
                 QImage im(qr.getSize(),qr.getSize(), QImage::Format_RGB888);
                 for (int y = 0; y < qr.getSize(); y++) {
                     for (int x = 0; x < qr.getSize(); x++) {
                         int color = qr.getModule(x, y);  // 0 for white, 1 for black

                         // You need to modify this part
                         if(color==0)
                             im.setPixel(x, y,qRgb(254, 254, 254));
                         else
                             im.setPixel(x, y,qRgb(0, 0, 0));
                     }
                 }
                 im=im.scaled(200,200);
                ui->qr->setPixmap(QPixmap::fromImage(im));
}
// export csv
void MainWindow::on_pb_CSV_clicked()
{
    QTableView *table;
                                 table = ui->tab_moyen;

                                 QString filters("CSV files (.xlsx);;All files (.*)");
                                 QString defaultFilter("CSV files (*.xlsx)");
                                 QString fileName = QFileDialog::getSaveFileName(0, "Save file", QCoreApplication::applicationDirPath(),
                                                    filters, &defaultFilter);
                                 QFile file(fileName);

                                 QAbstractItemModel *model =  table->model();
                                 if (file.open(QFile::WriteOnly | QFile::Truncate)) {
                                     QTextStream data(&file);
                                     QStringList strList;
                                     for (int i = 0; i < model->columnCount(); i++) {
                                         if (model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString().length() > 0)
                                             strList.append("\"" + model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString() + "\"");
                                         else
                                             strList.append("");
                                     }
                                     data << strList.join(";") << "\n";
                                     for (int i = 0; i < model->rowCount(); i++) {
                                         strList.clear();
                                         for (int j = 0; j < model->columnCount(); j++) {

                                             if (model->data(model->index(i, j)).toString().length() > 0)
                                                 strList.append("\"" + model->data(model->index(i, j)).toString() + "\"");
                                             else
                                                 strList.append("");
                                         }
                                         data << strList.join(";") + "\n";
                                     }
                                     file.close();
                                     QMessageBox::information(nullptr, QObject::tr("Export excel"),
                                                               QObject::tr("Export avec succes .\n"
                                                                           "Click OK to exit."), QMessageBox::Ok);
                                 }
              }

// fonction
              QString currDate()
              {
                  QDate date = QDate::currentDate();
                  return date.toString("dd.MM.yyyy");
}

 //fonction
  QString rechercherIdDansLaBaseDeDonnees(const QString &matricule)
              {
                          QSqlQuery query;
                          query.prepare("SELECT MARQUE FROM GS_MOYEN_DE_TRANSPORT WHERE MATRICULE = :matricule");// Recherche de la marque de la voiture dans la base de donnee
                          query.bindValue(":matricule", matricule); //Cette fonction retourne true en cas de succès ou false si une erreur survient.

                          if (query.exec() && query.next())
                          {
                          return query.value(0).toString(); //La méthode toString() renvoie une chaîne de caractères représentant l'objet.
                          }
                          else
                          {
                          // Add error handling logic here, for example, display an error message
                          qDebug() << "Erreur: Marque non trouvée dans la base de données";
                          return QString();  // Retourne une chaîne vide si la marque de la vehicule n'est pas trouvée ou s'il y a une erreur
                          }
              }

  // fonction

  void MainWindow::on_pbarduino_clicked()  //implémentation du slot bouton affichage lcd
                                {
                                QString matricule = ui->line_recherche->text();// line_recherche win hattinha matricule a chercher

                                if (Ar.connect_arduino("COM7") == 0) { //changer le com si necessaire // com7 a droite
                                                   qDebug() << "Connected to Arduino";

                                                  //on utilise QString pour stocker la valeur de retour de la recherche
                                                   QString marque = rechercherIdDansLaBaseDeDonnees(matricule);

                                                   //lezmna nesta3mlou une valeur valide (peut-être "-1") pour indiquer qu'il n'y a aucune correspondance
                                                   if (!marque.isEmpty())
                                                   {
                                                       // naba3thou l  Arduino sous forme de texte brut
                                                       Ar.write_to_arduino(marque);
                                                       qDebug() << "Sent to Arduino: " << marque;

                                                       QMessageBox::information(nullptr, QObject::tr("Success"),
                                                                                QObject::tr("Sent to Arduino successfully."),
                                                                                QMessageBox::Ok);
                                                   } else {
                                                       qDebug() << "Not found in the database for the entered matricule: " << matricule;

                                                       QMessageBox::critical(nullptr, QObject::tr("Error"),
                                                                             QObject::tr("Not found in the database for the entered matricule."),
                                                                             QMessageBox::Cancel);
                                                   }

                                                   Ar.close_arduino();
                                                   qDebug() << "Arduino connection closed";
                                } else {
                                                   qDebug() << "Failed to connect to Arduino";

                                                   QMessageBox::critical(nullptr, QObject::tr("Connection Error"),
                                                                         QObject::tr("Failed to connect to Arduino. Click Cancel to exit."),
                                                                         QMessageBox::Cancel);
                                }
                            }
