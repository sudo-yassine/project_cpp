#include "maintenance.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>

Maintenance::Maintenance()
{
NUM_MAINTENANCE=0;
MATRICULE="";
ID_TECHNICIEN=0;
NUM_CONSTAT=0;
}

Maintenance::Maintenance(int NUM_MAINTENANCE,QString MATRICULE,int ID_TECHNICIEN,int NUM_CONSTAT)
{
this->NUM_MAINTENANCE=NUM_MAINTENANCE;
this->MATRICULE=MATRICULE;
this->ID_TECHNICIEN=ID_TECHNICIEN;
this->NUM_CONSTAT=NUM_CONSTAT;
}

int Maintenance::getNUM_MAINTENANCE(){return NUM_MAINTENANCE ;}
QString Maintenance::getMATRICULE(){return MATRICULE;}
int Maintenance::getID_TECHNICIEN(){return ID_TECHNICIEN;}
int Maintenance::getNUM_CONSTAT(){return NUM_CONSTAT;}

void Maintenance::setNUM_MAINTENANCE(int NUM_MAINTENANCE){this->NUM_MAINTENANCE=NUM_MAINTENANCE;}
void Maintenance::setMATRICULE(QString MATRICULE){this->MATRICULE=MATRICULE;}
void Maintenance::setID_TECHNICIEN(int ID_TECHNICIEN){this->ID_TECHNICIEN=ID_TECHNICIEN;}
void Maintenance::setNUM_CONSTAT(int NUM_CONSTAT){this->NUM_CONSTAT=NUM_CONSTAT;}

bool Maintenance::ajouter()
{

    QSqlQuery query;
    QString NUM_MAINTENANCE_string= QString::number(NUM_MAINTENANCE);
    QString ID_TECHNICIEN_string= QString::number(ID_TECHNICIEN);
    QString NUM_CONSTAT_string= QString::number(NUM_CONSTAT);


    query.prepare("INSERT INTO GS_MAINTENANCE (NUM_MAINTENANCE,MATRICULE,ID_TECHNICIEN,NUM_CONSTAT) "
                  "VALUES (:NUM_MAINTENANCE, :MATRICULE, :ID_TECHNICIEN, :NUM_CONSTAT)");
    query.bindValue(":NUM_MAINTENANCE", NUM_MAINTENANCE);
    query.bindValue(":MATRICULE", MATRICULE);
    query.bindValue(":ID_TECHNICIEN", ID_TECHNICIEN);
    query.bindValue(":NUM_CONSTAT", NUM_CONSTAT);

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



  return model;

}

bool Maintenance::modifier()
{

    QSqlQuery query;
        query.prepare("UPDATE GS_MAINTENANCE SET NUM_MAINTENANCE = :NUM_MAINTENANCE, MATRICULE = :MATRICULE , ID_TECHNICIEN = :ID_TECHNICIEN, NUM_CONSTAT = :NUM_CONSTAT");
        query.bindValue(":NUM_MAINTENANCE", NUM_MAINTENANCE);
        query.bindValue(":MATRICULE", MATRICULE);
        query.bindValue(":ID_TECHNICIEN", ID_TECHNICIEN);
        query.bindValue(":NUM_CONSTAT", NUM_CONSTAT);
        bool success = query.exec();
        return success;
}

QSqlQuery Maintenance::rechercher(QString NUM_MAINTENANCE)
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

