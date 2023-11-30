#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Transport
{
public:
    Transport();

    Transport(QString, QString, QString, QString,int,int);
    QString getmatricule();
    QString gettype_panne();
    QString getmarque();
    QString gettype();
    int getetat();
    int getpapier();

    void setmatricule(QString);
    void settype_panne(QString);
    void setmarque(QString);
    void settype(QString);
    void setetat(int);
    void setpapier(int);

    bool ajouter();
    QSqlQueryModel* afficher();
   bool modifier();
    bool supprimer(QString);

   QSqlQueryModel * rechercher(QString matricule);
    QSqlQueryModel * tri();
   QString rechercherIdDansLaBaseDeDonnees(const QString &matricule);
private:
    QString matricule, type_panne, marque, type;
    int etat, papier;
};

#endif // TRANSPORT_H
