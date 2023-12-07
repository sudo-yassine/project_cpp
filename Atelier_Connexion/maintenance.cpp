#include "maintenance.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>

#include <QCoreApplication>
#include <QMessageBox>

Maintenance::Maintenance()
{
NUM_MAINTENANCE=0;
MATRICULE="";
ID_TECHNICIEN=0;
NUM_CONSTAT=0;
ETAT=0;
}

Maintenance::Maintenance(int NUM_MAINTENANCE,QString MATRICULE,int ID_TECHNICIEN,int NUM_CONSTAT,int ETAT)
{
this->NUM_MAINTENANCE=NUM_MAINTENANCE;
this->MATRICULE=MATRICULE;
this->ID_TECHNICIEN=ID_TECHNICIEN;
this->NUM_CONSTAT=NUM_CONSTAT;
this->ETAT=ETAT;

}

int Maintenance::getNUM_MAINTENANCE(){return NUM_MAINTENANCE ;}
QString Maintenance::getMATRICULE(){return MATRICULE;}
int Maintenance::getID_TECHNICIEN(){return ID_TECHNICIEN;}
int Maintenance::getNUM_CONSTAT(){return NUM_CONSTAT;}
int Maintenance::getETAT(){return ETAT;}

void Maintenance::setNUM_MAINTENANCE(int NUM_MAINTENANCE){this->NUM_MAINTENANCE=NUM_MAINTENANCE;}
void Maintenance::setMATRICULE(QString MATRICULE){this->MATRICULE=MATRICULE;}
void Maintenance::setID_TECHNICIEN(int ID_TECHNICIEN){this->ID_TECHNICIEN=ID_TECHNICIEN;}
void Maintenance::setNUM_CONSTAT(int NUM_CONSTAT){this->NUM_CONSTAT=NUM_CONSTAT;}
void Maintenance::setETAT(int ETAT){this->ETAT=ETAT;}


bool Maintenance::ajouter()
{

    QSqlQuery query;
    QString NUM_MAINTENANCE_string= QString::number(NUM_MAINTENANCE);
    QString ID_TECHNICIEN_string= QString::number(ID_TECHNICIEN);
    QString NUM_CONSTAT_string= QString::number(NUM_CONSTAT);
    QString ETAT_string= QString::number(ETAT);

    query.prepare("INSERT INTO GS_MAINTENANCE (NUM_MAINTENANCE,MATRICULE,ID_TECHNICIEN,NUM_CONSTAT,ETAT) "
                  "VALUES (:NUM_MAINTENANCE, :MATRICULE, :ID_TECHNICIEN, :NUM_CONSTAT , :ETAT)");
    query.bindValue(":NUM_MAINTENANCE", NUM_MAINTENANCE);
    query.bindValue(":MATRICULE", MATRICULE);
    query.bindValue(":ID_TECHNICIEN", ID_TECHNICIEN);
    query.bindValue(":NUM_CONSTAT", NUM_CONSTAT);
    query.bindValue(":ETAT", ETAT);

return query.exec();
}

bool Maintenance::supprimer(int NUM_MAINTENANCE )
{
    QSqlQuery query;
    QString res=QString::number(NUM_MAINTENANCE);
    query.prepare("Delete from GS_MAINTENANCE where NUM_MAINTENANCE=:NUM_MAINTENANCE ");
    query.bindValue(":NUM_MAINTENANCE",NUM_MAINTENANCE);

return query.exec();

}
QSqlQueryModel* Maintenance::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();

      model->setQuery("Select * from GS_MAINTENACE");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUM_MAINTENANCE"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("MATRICULE"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("ID_TECHNICIEN"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("NUM_CONSTAT"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("ETAT"));


  return model;

}






bool Maintenance::modifier()
{

    QSqlQuery query;
        query.prepare("UPDATE GS_MAINTENANCE SET NUM_MAINTENANCE = :NUM_MAINTENANCE, MATRICULE = :MATRICULE , ID_TECHNICIEN = :ID_TECHNICIEN, NUM_CONSTAT = :NUM_CONSTAT, ETAT = :ETAT WHERE NUM_MAINTENANCE=:NUM_MAINTENANCE");
        query.bindValue(":NUM_MAINTENANCE", NUM_MAINTENANCE);
        query.bindValue(":MATRICULE", MATRICULE);
        query.bindValue(":ID_TECHNICIEN", ID_TECHNICIEN);
        query.bindValue(":NUM_CONSTAT", NUM_CONSTAT);
        query.bindValue(":ETAT", ETAT);
        return query.exec();

        //bool success = query.exec();
        //return success;
}

QSqlQuery Maintenance::rechercher(int NUM_MAINTENANCE)
{
    QSqlQuery query;
        query.prepare("SELECT * from GS_MAINTENANCE  WHERE NUM_MAINTENANCE = :NUM_MAINTENANCE");
        query.bindValue(":NUM_MAINTENANCE", NUM_MAINTENANCE);

        return query;
    }


QSqlQueryModel * Maintenance::tri()
{
    QSqlQuery *q = new QSqlQuery();
    QSqlQueryModel *model = new QSqlQueryModel();
    q->prepare("SELECT * FROM GS_MAINTENANCE ORDER BY NUM_MAINTENANCE ");
     q->exec();
     model->setQuery(*q);

 return model;
}


//nouv

QSqlQuery Maintenance::rechercherall()
{
    QSqlQuery query;
        query.prepare("SELECT * from GS_MAINTENANCE  ");

        return query;
 }



//nouv

void Maintenance::notification_voiture_repare(int NUM_MAINTENANCE)
{
    QSqlQuery m;
    m.prepare("SELECT ETAT FROM GS_MAINTENANCE where NUM_MAINTENANCE=:NUM_MAINTENANCE");
     m.bindValue(":NUM_MAINTENANCE", NUM_MAINTENANCE);
    m.exec();

        if (m.next()) {
               int ETAT = m.value(0).toInt();

               if (ETAT == 0) {
                   qDebug() << "Maintenance non traitée du NUM  : " << NUM_MAINTENANCE;
                   QMessageBox::information(nullptr, "traitement invalide", "Maintenance non traitée !");
               }
           }
 }

int Maintenance::compteretat1()
{
    int etat1;
    QSqlQuery query;
    query.exec("SELECT COUNT(*) FROM GS_MAINTENANCE WHERE etat = 1");
       query.next();
      etat1 = query.value(0).toInt();
        return etat1;
}

int Maintenance::compteretat0()
{
    int etat0;
    QSqlQuery query;
    query.exec("SELECT COUNT(*) FROM GS_MAINTENANCE WHERE etat = 0");
     query.next();
     etat0 = query.value(0).toInt();
        return etat0;
}

QChartView* Maintenance::stat()
{
    int countActif = compteretat1();
    int countNonActif = compteretat0();


    QSqlQuery query;
    query.prepare("SELECT * FROM GS_MAINTENANCE");
    query.exec();


    QPieSeries* series = new QPieSeries();
    series->append("traitee", countActif);
    series->append("Non traitee", countNonActif);


    QPieSlice* sliceActif = series->slices().at(0);
    sliceActif->setExploded(true);
    sliceActif->setColor("#00bfff");

    QPieSlice* sliceNonActif = series->slices().at(1);
    sliceNonActif->setColor("#ff6347");


    QChart* chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Statistique de l'ETAT");

    series->setLabelsVisible();


    QChartView* chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->chart()->setAnimationOptions(QChart::AllAnimations);
     chartView->resize(1000, 500);


    return chartView;
}






















