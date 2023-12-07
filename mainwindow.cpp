#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employee.h"
#include "paiment.h"
#include "arduino.h"
#include <QIntValidator>
#include <QMessageBox>
#include <QWidget>
#include <QTableWidget>
#include <QStandardItemModel>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QObject>
#include <QSqlQuery>

#include <QtCharts>
#include <QChartView>
#include <QBarSet>
#include <QBarSeries>

#include <QtCharts/QPieSeries>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSlice>
#include <QTableWidgetItem>
#include<QSqlRecord>

#include <QRegExp>
#include<QtCharts>
#include<QChartView>
#include<QBarSet>
#include<QBarSeries>
#include<QTableView>
#include"arduino.h"




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

ui->tab_employe->setModel(p.afficher());



QSqlQueryModel* model = p.afficher();
int totalCount = model->rowCount();

int mecanisianCount = 0;
int electrisanCount = 0;
int employeeCount = 0;

for (int i = 0; i < totalCount; ++i) {
    QString SPECIALITE = model->record(i).value("SPECIALITE").toString();
// Calcule le nombre d'employés dans chaque catégorie (spécialité)
    if (SPECIALITE == "mecanicien") {
        mecanisianCount++;
    } else if (SPECIALITE == "electrician") {
        electrisanCount++;
    } else if (SPECIALITE == "employe") {
        employeeCount++;
    }
}


double mecanisianPercentage = (mecanisianCount * 100.0) / totalCount;
double electrisanPercentage = (electrisanCount * 100.0) / totalCount;
double employeePercentage = (employeeCount * 100.0) / totalCount;

//définir les valeurs dans votre graphique
QBarSet *set0 = new QBarSet("Mecanisian");
QBarSet *set1 = new QBarSet("Electrisan");
QBarSet *set2 = new QBarSet("Employee");
*set0 << mecanisianPercentage;
*set1 << electrisanPercentage;
*set2 << employeePercentage;
QBarSeries *series = new QBarSeries();
series->append(set0);
series->append(set1);
series->append(set2);
QChart *chart = new QChart();
chart->addSeries(series);
//chart->setTitle("% Mecanisian , electrisan et employee  ");
chart->setAnimationOptions(QChart:: SeriesAnimations);
chart->resize(400,400);
QStringList categories;
categories << " % " ;
QBarCategoryAxis *axis = new QBarCategoryAxis();
axis->append(categories);
chart->createDefaultAxes();
chart->setAxisX(axis,series);
QChartView *chartView = new QChartView(chart);
chartView->setParent(ui->le_stat);

int ret=a.connect_arduino(); // lancer la connexion à arduino
                    switch (ret){
                    case(0):qDebug()<< "arduino is available and connected to : "<< a.get_arduino_port_name();
                        break;
                    case(1):qDebug() << "arduino is available but not connected to :" <<a.get_arduino_port_name();
                       break;
                    case(-1):qDebug() << "arduino is not available";
                    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
    int ID=ui->le_id->text().toInt();
    QString NOM=ui->le_nom->text();
    QString PRENOM=ui->le_prenom->text();
    QString ADRESSE_MAIL=ui->le_adresse_mail->text();
    QString SPECIALITE=ui->cb_specialite->currentText();
    employee p(ID,NOM ,PRENOM,ADRESSE_MAIL,SPECIALITE);// Création d'un objet Employee avec les données extraites de l'interface
    bool test=p.ajouter();
   QMessageBox msgBox;
    if(test)
    {
        msgBox.setText("Ajout no succes.");
        ui->tab_employe->setModel(p.afficher());
    }
    else
        {
        msgBox.setText("ajout.");
        msgBox.exec();
        }

}
void MainWindow::on_pb_supp_clicked()
{
    employee p1;
    p1.setID(ui->le_id_sup->text().toInt());
    bool test=p1.supprimer(p1.getID());
   QMessageBox msgBox;
    if(test)
    {
        msgBox.setText("Suppression avec succes.");
        ui->tab_employe->setModel(p.afficher());
    }
    else

        msgBox.setText("Echec de supprimer.");
        msgBox.exec();

}

void MainWindow::on_pb_modifier_clicked()
{
    int ID=ui->le_id_3->text().toInt();
    QString NOM=ui->le_nom_3->text();
    QString PRENOM=ui->le_prenom_3->text();
    QString ADRESSE_MAIL=ui->le_adresse_mail_3->text();
    QString SPECIALITE=ui->cb_specialite_2->currentText();
    employee p(ID,NOM,PRENOM,ADRESSE_MAIL,SPECIALITE);
    bool test=p.modifier();
      QMessageBox msgBox;
       if(test )
       {
           msgBox.setText("Modification avec succes.");
           ui->tab_employe->setModel(p.afficher());
       }
       else
           msgBox.setText("Echec de Modification.");
           msgBox.exec();
           ui->tab_employe->setModel(p.afficher());

}
void MainWindow::on_pb_tri_clicked()
{
     // Extraction des données triées de la base de données et affichage dans le tableau
    employee e;
              QSqlQueryModel *model = e.tri();

              ui->tab_employe_2->setModel(model);
}

void MainWindow::on_pb_pdf_clicked()
{
    QPdfWriter pdf("C:/Users/Moenes/Desktop/Qt projet/GS_EMPLOYES moenes/GS_EMPLOYES/fichier/pdf");
            int i = 4000;
            QPainter painter(&pdf);
            QString strStream;

            QTextStream out(&strStream);
            painter.setPen(Qt::red);
            painter.setFont(QFont("poppin", 25));
            painter.drawText(3000,1400,"Liste Des employes");
            painter.setPen(Qt::black);
            painter.setFont(QFont("poppin", 7));
            painter.setPen(Qt::darkCyan);
            painter.drawRect(100,100,9400,2500);
            painter.drawRect(100,3000,9400,500);
            painter.setPen(Qt::black);
            painter.drawText(300,3300," ID");
            painter.drawText(1300,3300," NOM");
            painter.drawText(2300,3300,"PRENOM");
            painter.drawText(3300,3300,"ADRESSE_MAIL");
            painter.drawText(4300,3300,"SPECIALITE");
            painter.setPen(Qt::darkCyan);
            painter.drawRect(100,3000,9400,9000);
            painter.setPen(Qt::black);
            QSqlQuery query;
            query.prepare("select * from GS_EMPLOYES");
            query.exec();
            while (query.next())
            {
                painter.drawText(1300,i,query.value(0).toString());
                painter.drawText(2300,i,query.value(1).toString());
                painter.drawText(3300,i,query.value(2).toString());
                painter.drawText(4300,i,query.value(3).toString());
                painter.drawText(300,i,query.value(4).toString());
                i +=350;
            }
                QMessageBox::information(this, QObject::tr("PDF Enregistré!"),
                QObject::tr("PDF Enregistré!.\n" "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_pushButton_clicked()
{
    int ID = ui->le_id_rech->text().toInt();


            employee e;
            QSqlQuery query = e.rechercher_ID(ID);

            if (query.exec() && query.next()) {

                ui->tab_rech->setColumnCount(query.record().count());
                for (int i = 0; i < query.record().count(); i++) {
                    QTableWidgetItem *headerItem = new QTableWidgetItem(query.record().fieldName(i));
                    ui->tab_rech->setHorizontalHeaderItem(i, headerItem);
                }

                ui->tab_rech->setRowCount(0);
                do {
                    int row = ui->tab_rech->rowCount();
                    ui->tab_rech->insertRow(row);
                    for (int col = 0; col < query.record().count(); col++) {
                        QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
                        ui->tab_rech->setItem(row, col, item);


                    }
                } while (query.next());
            }



}

void MainWindow::on_pushButton_salaire_clicked()
{

}
/*void MainWindow::on_verifier_clicked()
{
    int ID = ui->ID_v->text().toInt();

    // Créez une instance de la classe
    employee p1;
   if (p1.rechercher_ID2(ID)) {

            a.write_to_arduino("1");
        } else {

           a.write_to_arduino("0");
        }

}
*/
void MainWindow::on_verifier_clicked()
{
    data = a.read_from_arduino();
    qDebug() << "Valeur de data : " << data;


    data.replace('\n', "");
    data.replace('\r', "");


    int count = data.count("0");

    qDebug() << "nbr : " << count;

    if(count > 0)
    {
        int id = ui->ID_v->text().toInt();
        QSqlQuery query;

        query.prepare("UPDATE GS_EMPLOYES SET ID = :ID WHERE id = :id");
        query.bindValue(":ID", id);
        query.bindValue(":id", id);

        if (query.exec())
        {
            qDebug() << "UPDATE GS_EMPLOYES SET ID = :ID WHERE id = :id" << id << "exists.";
            a.write_to_arduino("1");
        }
        else
        {
            qDebug() << "Error updating database:" << query.lastError().text();
            a.write_to_arduino("0");
            qDebug() << "UPDATE GS_EMPLOYES SET ID = :ID WHERE id = :id" << id << "does not exist.";
        }
    }
    else
    {
        a.write_to_arduino("0");
        qDebug() << "No product detected.";
    }
}
