#ifndef MAINTENANCE_H
#define MAINTENANCE_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

class Maintenance
{
public:
    Maintenance();
    Maintenance(int,QString,int,int);
    int getNUM_MAINTENANCE();
    QString getMATRICULE();
    int getID_TECHNICIEN();
    int getNUM_CONSTAT();
    void setNUM_MAINTENANCE(int);
    void setMATRICULE(QString);
    void setID_TECHNICIEN(int);
    void setNUM_CONSTAT(int);

    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier();
    QSqlQuery rechercher(QString NUM_MAINTENANCE);
    QSqlQueryModel * tri();



private:
    int NUM_MAINTENANCE;
    QString MATRICULE;
    int ID_TECHNICIEN;
    int NUM_CONSTAT;

};



#endif // MAINTENANCE_H
