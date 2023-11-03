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
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ADRESSE_MAIL"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("SPECIALITE"));
    return model;



}
