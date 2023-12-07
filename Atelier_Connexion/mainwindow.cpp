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
