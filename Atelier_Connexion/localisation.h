#ifndef LOCALISATION_H
#define LOCALISATION_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Localisation
{
public:
    Localisation();
    Localisation(int ,int ,int ,int ,QString,int );
    int getnum_demande();
    int gettemps();
    int getdistance();
    int getmontant();
    int getid_client();
    int getetat();
    QString getlocal();
    void setnum_demande(int);
    void settemps(int);
    void setdistance(int);
    void setmontant(int);
    void setetat(int);
    void setlocal(QString);
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier();
    QSqlQuery rechercher(QString num_demande);
    QSqlQueryModel * tri();
    QSqlQuery calcluleTunis();
    QSqlQuery calcluleAriana();
    QSqlQuery calcluleManouba();
    QSqlQuery calcluleSousse();
    bool rechercher_arduino(int num_demande);
    bool rechercher_arduino1(int etat);



private:

int num_demande;
int temps;
int distance;
int montant;
int id_client;
int etat;
QString local;
};

#endif // LOCALISATION_H
