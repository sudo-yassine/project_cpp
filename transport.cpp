#include "transport.h"
#include<QSqlQuery>
#include<QtDebug>
#include <QObject>

Transport::Transport()
{
matricule=" ";type_panne=" ";marque=" "; type=" ";
etat=0; papier=0;
}

Transport::Transport(QString matricule, QString type_panne, QString marque, QString type,int etat,int papier)
{this->matricule=matricule;
this->type_panne=type_panne;
this->marque=marque;
this->type=type;
this->etat=etat;
this-> papier=papier;
}
QString Transport::getmatricule(){return matricule;}
QString Transport::gettype_panne(){return type_panne;}
QString Transport::getmarque(){return marque;}
QString Transport::gettype(){return type;}
int Transport::getetat(){return etat;}
int Transport::getpapier(){return papier;}

void Transport::setmatricule(QString matricule){this->matricule=matricule;}
void Transport::settype_panne(QString type_panne){this->type_panne=type_panne;}
void Transport::setmarque(QString marque){this->marque=marque;}
void Transport::settype(QString type){this->type=type;}
void Transport::setetat(int etat){this->etat=etat;}
void Transport::setpapier(int papier){this-> papier=papier;}


bool Transport::ajouter()
{
    bool test =false;


    QString etat_string=QString::number(etat);
    QString papier_string=QString::number(papier);
    QSqlQuery query;
         query.prepare("INSERT INTO GS_MOYEN_DE_TRANSPORT (MATRICULE, TYPE_PANNE, MARQUE ,TYPE ,ETAT, PAPIER  ) "
                       "VALUES (:MATRICULE, :TYPE_PANNE, :MARQUE , :TYPE , :ETAT, :PAPIER  )");


        query.bindValue(":MATRICULE", matricule);
        query.bindValue(":TYPE_PANNE",type_panne);
        query.bindValue(":MARQUE", marque);
        query.bindValue(":TYPE", type);

        query.bindValue(":ETAT", etat_string);
        query.bindValue(":PAPIER", papier_string);
        query.exec();



    return test;
}


bool Transport:: modifier ()
{

    QString etat_string=QString::number(etat);
    QString papier_string=QString::number(papier);
    QSqlQuery query;

          query.prepare("update GS_MOYEN_DE_TRANSPORT settype_panne='"+type_panne);


          query.bindValue(":MATRICULE", matricule);
          query.bindValue(":TYPE_PANNE",type_panne);
          query.bindValue(":MARQUE", marque);
          query.bindValue(":TYPE", type);

          query.bindValue(":ETAT", etat_string);
          query.bindValue(":PAPIER", papier_string);
          query.exec();

}


bool Transport::supprimer(QString matricule)
{
    QSqlQuery query;


        query.prepare("Delete from GS_MOYEN_DE_TRANSPORT where matricule=:MATRICULE");
        query.bindValue(":MATRICULE", matricule);

        return  query.exec();

}

QSqlQueryModel* Transport::afficher()
{
   QSqlQueryModel* model=new QSqlQueryModel();

   model->setQuery("SELECT* FROM GS_MOYEN_DE_TRANSPORT");
   model->setHeaderData(0, Qt::Horizontal,QObject::tr("matricule"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("type_panne"));
   model->setHeaderData(2, Qt::Horizontal,QObject::tr("marque"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("type"));
   model->setHeaderData(4, Qt::Horizontal,QObject::tr("etat"));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("papier"));

   return model;
}


QSqlQueryModel *Transport::rechercher(QString matricule)
{
   QSqlQuery query;
   query.prepare("SELECT * from GS_MOYEN_DE_TRANSPORT  WHERE matricule = :matricule");
   query.bindValue(":matricule", matricule);
   query.exec();

   QSqlQueryModel *model = new QSqlQueryModel;

   // Check if there are any results
   if (query.next())
   {
       model->setQuery(query);
       return model;
   }
   else
   {
       // No results, return nullptr
       delete model;
       return nullptr;
   }
}
QSqlQueryModel * Transport::tri()
         {
             QSqlQuery *q = new QSqlQuery();
             QSqlQueryModel *model = new QSqlQueryModel();
             q->prepare("SELECT * FROM GS_MOYEN_DE_TRANSPORT ORDER BY matricule ");
             q->exec();
             model->setQuery(*q);

             return model;
}
