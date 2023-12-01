#include "client.h"
#include <QString>
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include <QString>
#include<QtSql/QSqlQueryModel>
#include<QtSql/QSqlQuery>
#include<QString>
#include <QFile>
#include <QTextDocument>
#include<QTextStream>
#include<QIODevice>
#include<QDate>
#include <QSystemTrayIcon>

Client::Client()
{
    cin =0;
    num_tel=0;
    prenom="";
    permis=0;
    nom="";
    email="";


}
Client::Client(int cin, int num_tel,QString prenom,int permis,QString nom,QString email)
{
    this->cin=cin;
    this->num_tel=num_tel;
    this->prenom=prenom;
    this->permis=permis;
    this->nom=nom;
    this->email=email;
}
int  Client:: getcin(){return cin;}
int Client:: getnum_tel(){return num_tel;}

QString Client:: getprenom(){return prenom;}
int Client:: getpermis(){return permis;}
QString Client:: getnom(){return nom;}

QString Client:: getemail(){return email;}


void Client:: setcin(int cin){this->cin=cin;}
void Client:: setnum_tel(int num_tel){this->num_tel=num_tel;}
void Client:: setprenom(QString prenom){this->prenom=prenom;}
void Client:: setpermis(int permis){this->permis=permis;}
void Client:: setnom(QString nom){this->nom=nom;}
void Client:: setemail(QString email){this->email=email;}



bool Client:: ajouter ()
{



    QSqlQuery query;

          query.prepare("INSERT INTO GS_CLIENTS (cin, num_tel, prenom,permis,nom,email) "
                              "VALUES (:cin, :num_tel, :prenom,:permis,:nom,:email)");
          query.bindValue(":cin", cin);
            query.bindValue(":num_tel", num_tel);
             query.bindValue(":prenom", prenom);
              query.bindValue(":permis", permis);
          query.bindValue(":nom", nom);
        query.bindValue(":email", email);



          return query.exec();

}

bool Client:: modifier ()
{
    QSqlQuery query;

          query.prepare("update GS_CLIENTS set cin=:cin, num_tel=:num_tel,prenom=:prenom,permis=:permis,nom=:nom,email=:email where cin=:cin");

          query.bindValue(":cin", cin);
           query.bindValue(":num_tel", num_tel);
          query.bindValue(":prenom", prenom);
           query.bindValue(":permis", permis);
          query.bindValue(":nom", nom);


          query.bindValue(":email", email);



          return query.exec();



}

bool Client::supprimer(int cin)
{
    QSqlQuery query;

          query.prepare("Delete from GS_CLIENTS where cin=:cin");
          query.bindValue(0, cin);


          return query.exec();

}


QSqlQueryModel* Client::afficher()
{

    QSqlQueryModel* model=new QSqlQueryModel();

       model->setQuery("select * from GS_CLIENTS");



    return model;
}
QSqlQueryModel* Client::triecin()
{

    QSqlQueryModel* model=new QSqlQueryModel();

       model->setQuery("select * from GS_CLIENTS ORDER BY CIN");



    return model;
}

QSqlQueryModel* Client::trienom()
{

    QSqlQueryModel* model=new QSqlQueryModel();

       model->setQuery("select * from GS_CLIENTS ORDER BY NOM");



    return model;
}
QSqlQueryModel* Client::trieprenom()
{

    QSqlQueryModel* model=new QSqlQueryModel();

       model->setQuery("select * from GS_CLIENTS ORDER BY PRENOM");



    return model;
}
bool Client::idExists(const int &cin) {
    QSqlQuery query;
    query.prepare("SELECT cin FROM GS_CLIENTS WHERE cin = :cin");
    query.bindValue(":cin", cin);

    if (query.exec() && query.next()) {
        // If a row is fetched, the ID exists in the database.
        return true;
    }

    // If no rows were fetched, the ID does not exist.
    return false;
}

void Client::notification(QString cls)
{
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
    notifyIcon->show();
    notifyIcon->showMessage("NOTIFICATION",cls,QSystemTrayIcon::Information,15000);
}

