²#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include <QMessageBox>
#include<QSystemTrayIcon>
#include <QRegExp>
#include "connection.h"
#include <QFileDialog>
#include <QPainter>
#include <QDate>
#include <QPdfWriter>
#include <QDesktopServices>
#include <QUrl>
#include <QPixmap>
#include <QPieSlice>
#include <QPieSeries>
#include <QtCharts>
#include <QApplication>
#include <QIntValidator>
#include <QSqlQuery>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QtDebug>
#include <QPdfWriter>
#include <QPainter>
#include <QPixmap>
#include <QDesktopServices>
#include <QUrl>
#include <QApplication>
#include <QtPrintSupport/QPrinter>
#include <QTextDocument>
#include <QtCore>
#include "smtp.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lecin->setValidator( new QIntValidator(100, 9999999, this));
      ui->lenumtel->setValidator( new QIntValidator(100, 9999999, this));
      ui->lepermis->setValidator( new QIntValidator(100, 9999999, this));
        ui->tab_client->setModel(C.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
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


void MainWindow::on_pb_supprimer_clicked()
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





void MainWindow::on_pb_modifier_clicked()
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
void MainWindow::on_pushButton_clicked()
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
