#include "stock.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
Stock::Stock()
{
    reference=""; quantite=0; type=""; prix=0;
}
Stock::Stock(int prix ,int quantite ,QString reference ,QString type)
{
this->reference=reference;
this->quantite=quantite;
this->type=type;
this->prix=prix;
}

QString Stock::getreference()
{
    return reference;
}
int Stock::getquantite()
{
    return quantite;
}
QString Stock::gettype()
{
    return type;
}
int Stock::getprix()
{
    return prix;
}
void Stock::setreference(QString reference )
{
    this->reference=reference;
}
void Stock::setquantite(int quantite)
{
    this->quantite=quantite;
}
void Stock::settype(QString type)
{
    this->type=type;
}
void Stock::setprix(int prix)
{
    this->prix=prix;
}
bool Stock::ajouter()
{

    QSqlQuery query;
    //QString reference_string=QString::number(reference);
         query.prepare("INSERT INTO GS_STOCK (prix, quantite, reference, type) "
                       "VALUES (:prix, :quantite, :reference, :type)");
         query.bindValue(":prix", prix);
         query.bindValue(":quantite", quantite);
         query.bindValue(":reference", reference);
         query.bindValue(":type", type);
         query.exec();
         return query.exec();
}
bool Stock::supprimer(QString reference)
{
     QSqlQuery query;
          query.prepare("Delete from GS_STOCK where reference=:reference");
          query.bindValue(":reference", reference);
          return query.exec();
}
QSqlQueryModel* Stock::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();


    model->setQuery("SELECT * FROM GS_STOCK");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Prix"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Reference"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantite"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type"));
    return model;



}
