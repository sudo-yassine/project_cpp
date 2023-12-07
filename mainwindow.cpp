#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "localisation.h"
#include "arduino.h"
//#include "emailsender.h"
//#include "calendrier.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QRegExp>
#include <QStandardItemModel>
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QSqlRecord>
#include <QTableWidgetSelectionRange>
#include <QPdfWriter>
#include <QPainter>
#include <QTextStream>
#include <QFont>
#include <QtCharts>
#include <QChartView>
#include <QBarSet>
#include <QBarSeries>
#include <QtGlobal>
#include <QPainter>
#include <QVector>
#include <QWidget>
#include "qrcode.h"
#include "transport.h"
#include"client.h"

#include <QPieSlice>
#include<QPieSeries>
#include<QtCharts>
#include"smtp.h"
using namespace qrcodegen;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_22_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
}

void MainWindow::on_pushButton_24_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(3);
}

void MainWindow::on_pushButton_26_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(4);
}

void MainWindow::on_pushButton_28_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(5);
}

void MainWindow::on_pushButton_30_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(6);
}


void MainWindow::on_bouton_ajouter_clicked()
{
    int num_demande=ui->num_demande->text().toInt();
    int temps=ui->temps->text().toInt();
    int distance=ui->distance->text().toInt();
    int montant=ui->montant->text().toInt();
    QString local=ui->local->text();
    int id_client=ui->id_client->text().toInt();



    Localisation E(num_demande,temps,distance,montant,local,id_client);

    bool test=E.ajouter();

    if (test){
        ui->table_Localisation->setModel(L.afficher());
        ui->tab_2->setModel(L.afficher());
        QMessageBox::information(nullptr,QObject::tr("OK"),
                                  QObject::tr("Ajout effectue\n"
                                              "Click Cancel to exit"),QMessageBox::Cancel);
        ui->table_Localisation->setModel(L.afficher());
    }


    else{
        ui->table_Localisation->setModel(L.afficher());
        ui->tab_2->setModel(L.afficher());

        QMessageBox::critical(nullptr,QObject::tr("NOT OK"),
                                  QObject::tr("Ajout non effectue\n"
                                              "Click Cancel to exit"),QMessageBox::Cancel);}


}


void MainWindow::on_bouton_supprimer_clicked()
{
   Localisation L;
   L.setnum_demande(ui->supprimer->text().toInt());
   bool test=L.supprimer(L.getnum_demande());
   if (test){
       QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("suppression effectue\n"
                                             "Click Cancel to exit"),QMessageBox::Cancel);
       ui->table_Localisations->setModel(L.afficher());
       ui->table_Localisations->setModel(L.afficher());
   }


   else{
        ui->table_Localisations->setModel(L.afficher());
        ui->table_Localisations->setModel(L.afficher());
       QMessageBox::critical(nullptr,QObject::tr("NOT OK"),
                                 QObject::tr("suppression non effectue\n"
                                             "Click Cancel to exit"),QMessageBox::Cancel);}
}



void MainWindow::on_bouton_modifier_clicked()
{
    //QString reference=ui->bouton_modifier->text();

    int num_demande=ui->num_demande_2->text().toInt();
    int temps=ui->temps_2->text().toInt();
    int distance=ui->distance_2->text().toInt();
    int montant=ui->montant_2->text().toInt();
    QString local=ui->local_2->text();
    int id_client=ui->id_client_2->text().toInt();
    Localisation L(num_demande,temps,distance,montant,local,id_client);
    bool test=L.modifier();
   QMessageBox msgBox;
    if(test )
    {
        msgBox.setText("Modification avec succes.");
        ui->table_Localisation->setModel(L.afficher());
        ui->table_Localisations->setModel(L.afficher());
        ui->tab_2->setModel(L.afficher());
    }
    else
        msgBox.setText("Echec de Modification.");
        msgBox.exec();
        ui->table_Localisation->setModel(L.afficher());
        ui->table_Localisations->setModel(L.afficher());
        ui->tab_2->setModel(L.afficher());

}

void MainWindow::on_bouton_recherche_clicked()
{
    QString num_demande = ui->le_recherche->text();
    Localisation L;
    QSqlQuery query = L.rechercher(num_demande);

    if (query.exec() && query.next())
    {
        QStandardItemModel *model = new QStandardItemModel();

        model->setColumnCount(query.record().count());


        ui->table_Localisation->setModel(model);


        model->removeRows(0, model->rowCount());


        for (int i = 0; i < query.record().count(); i++)
        {
            model->setHorizontalHeaderItem(i, new QStandardItem(query.record().fieldName(i)));
        }
        do
        {
            QList<QStandardItem*> rowItems;
            for (int col = 0; col < query.record().count(); col++)
            {
                rowItems << new QStandardItem(query.value(col).toString());
            }
            model->appendRow(rowItems);
        } while (query.next());
    }
    else
    {
        ui->table_Localisation->setModel(L.afficher());
        ui->table_Localisations->setModel(L.afficher());
        ui->tab_2->setModel(L.afficher());
    }
}

void MainWindow::on_bouton_tri_clicked()
{
    Localisation L;
           QSqlQueryModel *model = L.tri();


           ui->table_Localisation->setModel(model);
}

void MainWindow::on_bouton_annuler_2_clicked()
{
        ui->num_demande_2->clear();
        ui->distance_2->clear();
        ui->montant_2->clear();
        ui->temps_2->clear();
        ui->id_client_2->clear();
        ui->local_2->clear();
}

void MainWindow::on_bouton_pdf_clicked()
{
    ui->tab_2->setModel(L.afficher());

    QPdfWriter pdf("C:/Users/yassine/Desktop/PDF_projet/pdf");
    int i = 4000;
    QPainter painter(&pdf);
    QString strStream;

    QTextStream out(&strStream);
    painter.setPen(Qt::red);
    painter.setFont(QFont("Time New Roman", 25));
    painter.drawText(3000,1400,"Liste Des Demandes");
    painter.setPen(Qt::black);
    painter.setFont(QFont("Time New Roman", 7));
    painter.setPen(Qt::darkCyan);
    painter.drawRect(100,100,9400,2500);
    painter.drawRect(100,3000,9400,500);
    painter.setPen(Qt::black);
    painter.drawText(300,3300," NUM_DEMANDE");
    painter.drawText(1300,3300,"TEMPS");
    painter.drawText(2300,3300,"DISTANCE");
    painter.drawText(3300,3300,"MONTANT");
    painter.drawText(4300,3300,"LOCAL");
    painter.drawText(6300,3300,"ID_CLIENT");
    painter.drawText(6300,3300,"ETAT");
    painter.setPen(Qt::darkCyan);
    painter.drawRect(100,3000,9400,9000);
    painter.setPen(Qt::black);
    QSqlQuery query;
    query.prepare("select * from GS_LOCALISATION");
    query.exec();
    while (query.next())
    {
        painter.drawText(300,i,query.value(0).toString());
        painter.drawText(1300,i,query.value(1).toString());
        painter.drawText(2300,i,query.value(2).toString());
        painter.drawText(3300,i,query.value(3).toString());
        painter.drawText(4300,i,query.value(4).toString());
        painter.drawText(6500,i,query.value(5).toString());
        i +=350;
    }
        QMessageBox::information(this, QObject::tr("PDF Enregistré!"),
        QObject::tr("PDF Enregistré!.\n" "Click Cancel to exit."), QMessageBox::Cancel);

}





void MainWindow::on_calendarWidget_clicked(const QDate &date)
{
    QVector <QDate> promotion;
    QMessageBox msgBox;
    promotion.append(QDate(2023,11,5));
    if(date == promotion[0] )
    {
        qDebug() << "date de promotion " ;

        msgBox.setText("***************************\n date de promotion \n***************************");
        msgBox.exec();
    }
    else
       {
        msgBox.setText("***************************pas de promotion***************************");
        msgBox.exec();
    }
}

/*void MainWindow::on_sendButton_clicked()
{
    // Get email details from UI
        QString sender = ui->senderLineEdit->text();
        QString recipient = ui->recipientLineEdit->text();
        QString subject = ui->subjectLineEdit->text();
        QString body = ui->bodyTextEdit->toPlainText();

        // Set email details in the EmailSender instance
        es.setSender(sender);
        es.setRecipient(recipient);
        es.setSubject(subject);
        es.setBody(body);

        // Set your SMTP server and credentials
        es.setSmtpServer("smtp.gmail.com", 587);
        es.setCredentials("yassin.jaouani@esprit.tn", "*********");

        // Send the email
        es.send();
}*/

void MainWindow::on_bouton_annuler_clicked()
{
    ui->num_demande->clear();
    ui->distance->clear();
    ui->montant->clear();
    ui->temps->clear();
    ui->id_client->clear();
    ui->local->clear();

}

void MainWindow::update_label()
{
    QString etat1 = "non detecte";
    ui->label_22->setText(etat1);
    QMessageBox msgBox;


    data=A.read_from_arduino();
    Localisation L;
    int etat = ui->lineEdit->text().toInt();
    if(data=="2")
{
        ui->label_22->setText("MOUVEMENT DÉTECTÉ");
}
    {
        if(L.rechercher_arduino(etat))
{
            msgBox.setText("***************************\n demande traiter\n***************************");
            msgBox.exec();
 }       }

}


void MainWindow::on_pushButton_clicked()
{
    QString username=ui->username->text();
        QString password=ui->password->text();

        if (username=="admin" && password=="admin")
        {
            QMessageBox::information(this,"login","admin mode");
            //MainWindow *mainwindow =new MainWindow(this);
            //mainwindow->show();

            ui->stackedWidget->setCurrentIndex(1);


        }
        else if (username=="notAdmin" && password=="notAdmin")
        {
            QMessageBox::information(this,"login","not admin mode");

            //Affichage=new affichage(this);
            //Affichage->show();
        }
        else
        {
            QMessageBox::warning(this,"login","username or password is not correct");

        }
}



void MainWindow::on_pushButton_20_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(7);

}

void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_14_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);

}

void MainWindow::on_pushButton_10_clicked()
{

    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_32_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

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
        ui->tab_moyen->setModel(t1.afficher());


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

  void MainWindow::on_pb_ajouter_2_clicked()
  {
   int cin=ui->lecin->text().toInt();
    int num_tel=ui->lenumtel->text().toInt();
       QString prenom=ui->leprenom->text();
       int permis=ui->lepermis->text().toInt();

      QString nom=ui->lenom->text();
      QString email=ui->leemail->text();


      Client C(cin, num_tel, prenom, permis, nom, email);
      bool test=C.ajouter();
      if(test)
      {
          QMessageBox::information(nullptr, QObject::tr("OK"),
                      QObject::tr("Ajout successful.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
          ui->tab_client->setModel(C.afficher());//mise a jour
          C.notification("Client ajouter");

  }
      else{
          QMessageBox::critical(nullptr, QObject::tr(" not ok"),
                      QObject::tr("ajout failed.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);}
  }


  void MainWindow::on_pb_supprimer_2_clicked()
  {
     int cin=ui->le_id_supp->text().toInt();
          if (cin==0)
          {
              // Show an error message if the ID input is empty.
              QMessageBox::critical(nullptr, QObject::tr("Error"),
                  QObject::tr("Please enter an CIN before attempting to delete."), QMessageBox::Ok);
              return;
          }
          // Check if the CIN exists in the database.
          Client C1;
          C1.setcin(cin);
          if (C1.idExists(cin)) {
              // The cCIN exists, so proceed with the deletion.
              Client C1;
              C1.setcin(cin);
              bool test = C1.supprimer(C1.getcin());

              if (test) {
                  QMessageBox::information(nullptr, QObject::tr("OK"),
                      QObject::tr("Suppression successful.\nClick Cancel to exit."), QMessageBox::Cancel);
                  ui->tab_client->setModel(C.afficher()); // Mise à jour
                  C.notification("Client Supprimer");

              }
              else {
                  QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                      QObject::tr("Suppression failed.\nClick Cancel to exit."), QMessageBox::Cancel);
              }
          }
          else {
              // Show an error message if the ID does not exist in the database.
              QMessageBox::critical(nullptr, QObject::tr("Error"),
                  QObject::tr(" CIN does not exist."), QMessageBox::Ok);
          }
  }





  void MainWindow::on_pb_modifier_2_clicked()
  {
     int cin=ui->lecin->text().toInt();
         Client C;
         C.setcin(cin);

         int Ncin=ui->lecin2->text().toInt();
          int Nnum_tel=ui->lenumtel2->text().toInt();
             QString Nprenom=ui->lprenom2->text();
             int Npermis=ui->lepermis2->text().toInt();

            QString Nnom=ui->lenom2->text();
            QString Nemail=ui->leemail2->text();


             // Check if the newCIN already exists in the database.
            /* if (!C.idExists(cin)) {
                 QMessageBox::critical(nullptr, QObject::tr("Error"),
                     QObject::tr("CIN not exists in the database. Please choose a unique CIN."), QMessageBox::Ok);
                 return; //CINalready exists, so don't proceed with modification.
             }

              If the CIN is unique and changes are made, update the client's information.
             C.setcin(Ncin);
             C.setnum_tel(Nnum_tel);
             C.setprenom(Nprenom);
             C.setpermis(Npermis);
             C.setnom(Nnom);
             C.setemail(Nemail);*/


             bool test = C.modifier();

             if (test) {
                 QMessageBox::information(nullptr, QObject::tr("OK"),
                     QObject::tr("Modification successful.\nClick Cancel to exit."), QMessageBox::Cancel);
                 ui->tab_client->setModel(C.afficher()); // Mise à jour
                 C.notification("Client modifier");
             } else {
                 QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                     QObject::tr("Modification failed.\nClick Cancel to exit."), QMessageBox::Cancel);
             }
     }


  //trie nom
  void MainWindow::on_pushButton_4_clicked()
  {
      ui->tab_client->setModel(C.trienom());
  }
  //trie prenom
  void MainWindow::on_pushButton_5_clicked()
  {
      ui->tab_client->setModel(C.trieprenom());
  }
  // trie cin
  void MainWindow::on_pushButton_3_clicked()
  {
      ui->tab_client->setModel(C.triecin());
  }
  //recherche avancee multicritere
  void MainWindow::on_lineEdit_textChanged(const QString &arg1)
  {
      QSqlQueryModel *model= new QSqlQueryModel();
                  QSqlQuery   *query= new QSqlQuery();
                  query->prepare("SELECT * FROM GS_CLIENTS WHERE CIN  LIKE'"+arg1+"%' or NOM  LIKE'"+arg1+"%' or PRENOM  LIKE'"+arg1+"%' or NUM_TEL LIKE'"+arg1+"%'");
                   query->exec();
                   if (query->next()) {
                   model->setQuery(*query);
                   ui->tab_client->setModel(model);
                   }
                   else {
                       QMessageBox::critical(nullptr, QObject::tr("SEARCH"),
                                       QObject::tr("NO MATCH FOUND !!\n"
                                                   "Click Cancel to exit."), QMessageBox::Cancel);
                    ui->lineEdit->clear();}
  }
  // pdf
  void MainWindow::on_pushButton_2_clicked()
  {
      QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                  "/home",
                                                  QFileDialog::ShowDirsOnly
                                                  | QFileDialog::DontResolveSymlinks);
      qDebug()<<dir;
      QPdfWriter pdf(dir+"/PdfList.pdf");
                             QPainter painter(&pdf);
                            int i = 4000;

                                 painter.drawText(900,650,"Smart ecological transport");
                                 painter.setPen(Qt::red);
                                 painter.setFont(QFont("Time New Roman", 25));
                                 painter.drawText(3000,1400,"Liste des clients");
                                 painter.setPen(Qt::black);
                                 painter.setFont(QFont("Time New Roman", 15));
                                 painter.drawRect(100,100,9400,2500); // dimension taa rectangle li fih liste
                                 painter.drawRect(100,3000,9400,500);
                                 painter.setFont(QFont("Time New Roman", 9));
                                 painter.drawText(300,3300,"CIN");
                                 painter.drawText(2000,3300,"NUM TEL");
                                 painter.drawText(4000,3300,"PRENOM");
                                 painter.drawText(5600,3300,"NOM");
                                 painter.drawText(7000,3300,"EMAIL");
                                 painter.drawRect(100,3000,9400,10700);
                                 //QTextDocument previewDoc;
                                 QString pdflist = QDate::currentDate().toString("'data_'MM_dd_yyyy'.txt'");
                                 //QTextCursor cursor(&previewDoc);
                                 QSqlQuery query;
                                 query.prepare("select * from GS_CLIENTS");
                                 query.exec();
                                 while (query.next())
                                 {
                                     painter.drawText(300,i,query.value(0).toString());
                                     painter.drawText(2000,i,query.value(1).toString());
                                     painter.drawText(4000,i,query.value(2).toString());
                                     painter.drawText(5600,i,query.value(4).toString());
                                     painter.drawText(7000,i,query.value(5).toString());
                                    i = i +500;
                                 }
                                 int reponse = QMessageBox::question(this, "Générer PDF", "<PDF Enregistré>...Vous Voulez Affichez Le PDF ?",
                                                                     QMessageBox::Yes|QMessageBox::No);
                                     if (reponse == QMessageBox::Yes)
                                     {
                                         QDesktopServices::openUrl(QUrl::fromLocalFile(dir+"/PdfList.pdf"));

                                         painter.end();
                                     }
                                     else
                                     {
                                          painter.end();
                                     }
  }
  // mail
  void MainWindow::sendMail()
  {
      Smtp* smtp = new Smtp("mohamedmehdi.charfaoui@esprit.tn", "nxppswennqhxtvto","smtp.gmail.com",465,30000);
      connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));
      smtp->sendMail("promotion", ui->lineEdit_10->text() , ui->lineEdit_9->text(),ui->textEdit->toPlainText());
  }



  void MainWindow::mailSent(QString status)
  {
      if(status == "Message sent")
          QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
  }


  void MainWindow::on_envoyer_clicked()
  {
      connect(ui->envoyer, SIGNAL(clicked()),this, SLOT(sendMail()));
  }

void MainWindow::on_pushButton_11_clicked()
{
  ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_33_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save PDF File", "", "PDF Files (*.pdf)");

                 if (fileName.isEmpty()) {

                return; // User canceled the operation

                                                            }




            QPdfWriter pdfWriter(fileName);

            pdfWriter.setPageSize(QPageSize(QPageSize::A4));

            pdfWriter.setResolution(300); // Set the resolution as needed


             // Create a QPainter to draw on the PDF

            QPainter painter(&pdfWriter);

            painter.setRenderHint(QPainter::Antialiasing);

            painter.begin(&pdfWriter);

            QFont headerFont;

            headerFont.setPointSize(10);

            headerFont.setBold(true);


            QFont regularFont;

            regularFont.setPointSize(10);

            QSqlQueryModel model;

            model.setQuery("SELECT * FROM gs_clients"); // Modify the SQL query accordingly


            int yOffset = 50; // Initial vertical offset

            int rowHeight = 70; // Vertical spacing between rows

            QVector<int> columnWidths = {200, 300, 200, 300, 300, 500}; // Adjust widths as needed

            QStringList columnTitles = {"cin", "numero de tel", "prenom", "permis", "nom", "e-mail"};

            painter.setFont(headerFont);

            painter.setBrush(QBrush(QColor(200, 200, 200))); // Set headerbackground color

            painter.drawRect(100, yOffset,
            std::accumulate(columnWidths.begin(), columnWidths.end(), 0),rowHeight);

            for (int col = 0; col < columnTitles.size(); ++col) {

            painter.drawText(100 + std::accumulate(columnWidths.begin(), columnWidths.begin() + col, 0), yOffset, columnWidths[col], rowHeight,Qt::AlignCenter, columnTitles[col]);}

            yOffset += rowHeight; // Move to the next row

            for (int row = 0; row < model.rowCount(); ++row) {

            painter.setFont(regularFont);

            painter.setBrush(QBrush((row % 2 == 0) ? QColor(240, 240, 240) : Qt::white)); // Alternate row colors


           for (int col = 0; col < columnWidths.size(); ++col) {

                  QString cellData = model.record(row).value(col).toString();

                  painter.drawRect(100 + std::accumulate(columnWidths.begin(), columnWidths.begin() + col, 0),yOffset, columnWidths[col], rowHeight);

                  painter.drawText(100 +std::accumulate(columnWidths.begin(), columnWidths.begin() + col, 0),yOffset, columnWidths[col], rowHeight, Qt::AlignCenter, cellData);

                                                                }
                  yOffset += rowHeight; // Move to the next row
                                     }
                 painter.end();

           QMessageBox::information(this, "Export Successful", "Data exported to PDF successfully.");
}

void MainWindow::on_pushButton_34_clicked()
{

}

void MainWindow::on_pushButton_35_clicked()
{
    ui->tab_client->setModel(C.triecin());

}

void MainWindow::on_pushButton_36_clicked()
{
    ui->tab_client->setModel(C.trienom());
}

void MainWindow::on_pushButton_37_clicked()
{
    ui->tab_client->setModel(C.trieprenom());

}
