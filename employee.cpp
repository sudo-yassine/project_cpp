#include "employee.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
employee::employee()
{
    ID=0; NOM=""; PRENOM=""; ADRESSE_MAIL=""; SPECIALITE="";
}
employee::employee(int ID,QString NOM,QString PRENOM,QString ADRESSE_MAIL,QString SPECIALITE)
{
    this->ID=ID;
    this->NOM=NOM;
    this->PRENOM=PRENOM;
    this->ADRESSE_MAIL=ADRESSE_MAIL;
    this->SPECIALITE=SPECIALITE;

}
int employee::getID()
{
    return ID;
}
QString employee::getNOM()
{
   return NOM;
}
QString employee::getPRENOM()
{
    return PRENOM;
}
QString employee::getADRESSE_MAIL()
{
    return ADRESSE_MAIL;
}
QString employee::getSPECIALITE()
{
    return SPECIALITE;
}
void employee::setID(int ID)
{
    this->ID=ID;

}
void employee::setNOM(QString NOM)
{
    this->NOM=NOM;

}
void employee::setPRENOM(QString PRENOM)
{
    this->PRENOM=PRENOM;

}
void employee::setADRESSE_MAIL(QString ADRESSE_MAIL)
{
    this->ADRESSE_MAIL=ADRESSE_MAIL;

}
void employee::setSPECIALITE(QString SPECIALITE)
{
    this->SPECIALITE=SPECIALITE;

}
bool employee::ajouter()
{

    QSqlQuery q;
         q.prepare("INSERT INTO GS_EMPLOYES (ID, NOM, PRENOM,ADRESSE_MAIL,SPECIALITE) "
                       "VALUES (:ID, :NOM, :PRENOM, :ADRESSE_MAIL, :SPECIALITE)");
         q.bindValue(":ID", ID);
         q.bindValue(":NOM", NOM);
         q.bindValue(":PRENOM", PRENOM);
         q.bindValue(":ADRESSE_MAIL", ADRESSE_MAIL);
         q.bindValue(":SPECIALITE", SPECIALITE);
         q.exec();
         return q.exec();


}
bool employee::supprimer(int ID)
{
     QSqlQuery q;
          q.prepare("Delete from GS_EMPLOYES where ID=:ID");
          q.bindValue(":ID", ID);
          return q.exec();
}
QSqlQueryModel* employee::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();


    model->setQuery("SELECT * FROM GS_EMPLOYES");
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ADRESSE_MAIL"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("SPECIALITE"));
    return model;



}
bool employee::modifier()
{
    QSqlQuery query;
             query.prepare("UPDATE GS_EMPLOYES SET NOM=:NOM,PRENOM=:PRENOM,ADRESSE_MAIL=:ADRESSE_MAIL,SPECIALITE=:SPECIALITE WHERE ID=:ID");
             query.bindValue(":ID", ID);
             query.bindValue(":NOM", NOM);
             query.bindValue(":PRENOM", PRENOM);
             query.bindValue(":ADRESSE_MAIL", ADRESSE_MAIL);
             query.bindValue(":SPECIALITE", SPECIALITE);
              bool success = query.exec();
             return success;
}
QSqlQueryModel* employee::tri()
{
    QSqlQuery *q = new QSqlQuery();
         QSqlQueryModel *model = new QSqlQueryModel();
         q->prepare("SELECT * FROM GS_EMPLOYES ORDER BY ID ");
         q->exec();
         model->setQuery(*q);

         return model;
}
QSqlQuery employee::rechercher_ID(int ID)
{
    QSqlQuery query;
       query.prepare("SELECT * from GS_EMPLOYES  WHERE ID = :ID");
       query.bindValue(":ID", ID);

       return query;

}
bool employee::rechercher_ID2(int ID)
{
    QSqlQuery query;
        query.prepare("SELECT * FROM your_table WHERE id = :id");
        query.bindValue(":id", ID);
        query.exec();

        // Check if the query has at least one result
        return query.next();

}
