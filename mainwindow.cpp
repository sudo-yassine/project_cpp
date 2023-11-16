#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "maintenance.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QRegExp>
#include <QStandardItemModel>
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QSqlRecord>
#include <QTableWidgetSelectionRange>
#include <QPdfWriter>
#include<QPainter>
#include<QTextStream>
#include<QTableView>

#include<QtCharts>
#include<QChartView>
#include<QBarSet>
#include<QBarSeries>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //stat
    ui->setupUi(this);

    QBarSet *set0 = new QBarSet("voiture reparée");

        QBarSet *set1 = new QBarSet("voiture non reparée");

        * set0 << 40<<100 ;

        * set1 << 50<<100  ;

        QBarSeries *series = new QBarSeries();

        series->append(set0);

        series->append(set1);

        QChart *chart = new QChart();

        chart->addSeries(series);

        chart->setTitle("MAINTENANCE");

        chart->setAnimationOptions(QChart:: SeriesAnimations);

        chart->resize(450,300);



        QStringList categories;

        categories << " Aujourd'hui" ;

        QBarCategoryAxis *axis = new QBarCategoryAxis();

        axis->append(categories);

        chart->createDefaultAxes();

        chart->setAxisX(axis,series);



        QChartView *chartView = new QChartView(chart);

        chartView->setParent(ui->le_stat);



    ui->le_NUM_MAINTENANCE ->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_MAINTENANCE->setModel(M.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_Ajouter_clicked()
{
    int NUM_MAINTENANCE=ui->le_NUM_MAINTENANCE->text().toInt();
    QString MATRICULE=ui->le_MATRICULE->text();
    int ID_TECHNICIEN=ui->le_ID_TECHNICIEN->text().toInt();
    int NUM_CONSTAT=ui->le_CONSTAT->text().toInt();

Maintenance M(NUM_MAINTENANCE,MATRICULE,ID_TECHNICIEN,NUM_CONSTAT);

bool test=M.ajouter();

if(test)
{
    ui->tab_MAINTENANCE->setModel(M.afficher());

    QMessageBox::information(nullptr , QObject::tr("OK"),
                              QObject::tr("Ajout effectue\n"
                                           "Click cancel to exit. "), QMessageBox ::Cancel);
}
else
    QMessageBox::critical(nullptr, QObject::tr(" NOT OK"),
                                  QObject::tr("ajout non effectue\n"
                                              "click cancel to exit."), QMessageBox::Cancel);





}

void MainWindow::on_pb_Supprimer_clicked()
{
    int NUM_MAINTENANCE=ui->le_NUM_MAINTENANCE_supp->text().toInt();
    bool test=M.supprimer(NUM_MAINTENANCE);
    if(test)
    {
        ui->tab_MAINTENANCE->setModel(M.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                  QObject::tr("Suppression effectue\n"
                                               "Click cancel to exit. "), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr(" NOT OK"),
                                      QObject::tr("Suppression non effectue\n"
                                                  "click cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_pb_mod_clicked()
{
    double NUM_MAINTENANCE=ui->le_mod_nmain->text().toInt();
    QString MATRICULE=ui->le_mod_matricule->text();
    double ID_TECHNICIEN=ui->le_mod_id->text().toInt();
    double NUM_CONSTAT=ui->le_mod_nconstat->text().toInt();
    Maintenance M(NUM_MAINTENANCE,MATRICULE,ID_TECHNICIEN,NUM_CONSTAT);
    bool test=M.modifier();
    QMessageBox msgBox;
    if(test)
    {
        msgBox.setText("Modification avec succes.");
        ui->tab_MAINTENANCE->setModel(M.afficher());
    }
    else
        msgBox.setText("Echec de Modification.");
        msgBox.exec();

}







void MainWindow::on_pb_chercher_clicked()
{

    QString NUM_MAINTENANCE=ui->le_chercher->text();
    Maintenance M;

    QSqlQuery query= M.rechercher(NUM_MAINTENANCE);

    if (query.exec() && query.next())
    {
        QStandardItemModel *model = new QStandardItemModel();

        model->setColumnCount(query.record().count());


        ui->tab_MAINTENANCE->setModel(model);


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
        ui->tab_MAINTENANCE->setModel(M.afficher());
}



void MainWindow::on_pb_tri_clicked()
{
    Maintenance M;
           QSqlQueryModel *model = M.tri();


           ui->tab_MAINTENANCE->setModel(model);
}




void MainWindow::on_pb_pdf_clicked()
{
    QPdfWriter pdf("C:/Users/rouak/OneDrive/Bureau/Atelier_Connexion/PDF/.pdf");

             QPainter painter(&pdf);
             QString strStream;

               QTextStream out(&strStream);
             int i = 4000;
                    painter.setPen(Qt::blue);
                    painter.setFont(QFont("Time New Roman", 25));
                    painter.drawText(3000,1400,"Liste Des Maintenance");

                    painter.setPen(Qt::black);
                    painter.setFont(QFont("Time New Roman", 7));

                    painter.drawRect(100,100,9400,2500);
                    painter.drawRect(100,3000,9400,500);


                    painter.drawText(300,3300,"NUM_MAINTENANCE");
                    painter.drawText(2300,3300,"MATRICULE");
                    painter.drawText(3300,3300,"ID_TECHNICIEN");
                    painter.drawText(5300,3300,"NUM_CONSTAT");



                    painter.drawRect(100,3000,9400,9000);


                    QSqlQuery query;
                    query.prepare("select * from GS_MAINTENANCE");
                    query.exec();
                    while (query.next())
                    {
                        painter.drawText(300,i,query.value(0).toString());
                        painter.drawText(1300,i,query.value(1).toString());
                        painter.drawText(2300,i,query.value(2).toString());
                        painter.drawText(3300,i,query.value(3).toString());
                        painter.drawText(4300,i,query.value(4).toString());
                        painter.drawText(6500,i,query.value(5).toString());
                        painter.drawText(8000,i,query.value(6).toString());



                       i = i + 350;
                    }
                    QMessageBox::information(this, QObject::tr("PDF Enregistré!"),
                    QObject::tr("PDF Enregistré!.\n" "Click Cancel to exit."), QMessageBox::Cancel);
}


