#include "localisation.h"
#include <QSqlQuery>
#include <QDebug>
#include<QtCharts>
#include<QChartView>
#include<QBarSet>
#include<QBarSeries>
Localisation::Localisation()
{
    num_demande=0;
    temps=0;
    distance=0;
    montant=0;
    local="";
    id_client=0;
    etat=0;
}

Localisation::Localisation(int num_demande ,int temps,int distance  ,int montant ,QString local ,int id_client,int etat)
{
    this->num_demande=num_demande;
    this->temps=temps;
    this->distance=distance;
    this->montant=montant;
    this->local=local;
    this->id_client=id_client;
    this->etat=etat;
}

int Localisation::getnum_demande()
{
    return num_demande;
}

int Localisation::gettemps()
{
    return temps;
}

int Localisation::getdistance()
{
    return distance;
}

int Localisation::getmontant()
{
    return montant;
}

int Localisation::getid_client()
{
    return id_client;
}

QString Localisation::getlocal()
{
    return local;
}


void Localisation::setnum_demande(int num_demande)
{
    this->num_demande= num_demande;
}

void Localisation::settemps(int temps)
{
    this->temps=temps;
}

void Localisation::setdistance(int distance)
{
    this->distance= distance;
}

void Localisation::setmontant(int montant)
{
    this->montant = montant;
}

void Localisation::setlocal(QString local)
{
    this->local = local;
}

void Localisation::setetat(int etat)
{
    this->etat = etat;
}

bool Localisation::ajouter()
{
    QSqlQuery query;
    QString num_demande_string = QString::number(num_demande);
    QString temps_string = QString::number(temps);
    QString distance_string = QString::number(distance);
    QString montant_string = QString::number(montant);
    QString id_client_string = QString::number(id_client);
    QString etat_string = QString::number(etat);


          query.prepare("INSERT INTO GS_LOCALISATION (num_demande, temps, distance, montant, local, id_client, etat) "
                        "VALUES (:num_demande, :temps, :distance, :montant, :local, :id_client, :etat)");
          query.bindValue(":num_demande", num_demande_string);
          query.bindValue(":temps", temps_string);
          query.bindValue(":distance", distance_string);
          query.bindValue(":montant", montant_string);
          query.bindValue(":local", local);
          query.bindValue(":id_client", id_client_string);
          query.bindValue(":etat", etat_string);
          return query.exec();
}

QSqlQueryModel * Localisation::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();

        model->setQuery("SELECT* FROM GS_LOCALISATION");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUM_DEMANDE"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("TEMPS"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("DISTANCE"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("MONTANT"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("LOCAL"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("ID_CLIENT"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("ETAT"));
    return model;


}

bool Localisation::supprimer(int num){
    QSqlQuery query;
    QString id_string = QString::number(num_demande);
          query.prepare("Delete from GS_LOCALISATION where num_demande=:num_demande");
          query.bindValue(":num_demande", num);
          return query.exec();

}



bool Localisation::modifier()
{
    QSqlQuery query;
             query.prepare("UPDATE GS_LOCALISATION SET temps=:temps,distance=:distance,montant=:montant,local=:local,id_client=:id_client, etat=:etat WHERE num_demande= :num_demande");
             query.bindValue(":num_demande", num_demande);
             query.bindValue(":temps", temps);
             query.bindValue(":distance", distance);
             query.bindValue(":montant", montant);
             query.bindValue(":local", local);
             query.bindValue(":id_client", id_client);
             query.bindValue(":etat", etat);
              bool success = query.exec();
             return success;
}

QSqlQuery Localisation::rechercher(QString num_demande)
{
    QSqlQuery query;
        query.prepare("SELECT * from GS_LOCALISATION  WHERE num_demande = :num_demande");
        query.bindValue(":num_demande", num_demande);

        return query;
}
QSqlQueryModel * Localisation::tri()
         {
             QSqlQuery *q = new QSqlQuery();
             QSqlQueryModel *model = new QSqlQueryModel();
             q->prepare("SELECT * FROM GS_LOCALISATION ORDER BY num_demande ");
             q->exec();
             model->setQuery(*q);

             return model;
}


bool Localisation::rechercher_arduino(int num_demande)
{

        QSqlQuery qry;
        QString sQuery = "SELECT * from GS_LOCALISATION  WHERE num_demande = :num_demande";

        qry.prepare(sQuery);
        qry.bindValue(":num_demande", num_demande);

        if (qry.exec() && qry.next())
        {
            // Si la requête s'est exécutée avec succès et qu'il y a au moins une ligne de résultats
            return true;
        }

        // Aucun résultat trouvé
        return false;


}
bool Localisation::rechercher_arduino1(int etat)
{

        QSqlQuery qry;
        QString sQuery = "SELECT * from GS_LOCALISATION  WHERE etat = :etat";

        qry.prepare(sQuery);
        qry.bindValue(":etat", etat);

        if (qry.exec() && qry.next())
        {
            // Si la requête s'est exécutée avec succès et qu'il y a au moins une ligne de résultats
            return true;
        }

        // Aucun résultat trouvé
        return false;

}
