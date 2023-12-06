#ifndef MAINTENANCE_H
#define MAINTENANCE_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
//nouv
#include<QtCharts>
#include<QChartView>
#include<QBarSet>
#include<QBarSeries>

class Maintenance
{
public:
    Maintenance();
    Maintenance(int,QString,int,int,int);
    int getNUM_MAINTENANCE();
    QString getMATRICULE();
    int getID_TECHNICIEN();
    int getNUM_CONSTAT();
    int getETAT();

    void setNUM_MAINTENANCE(int);
    void setMATRICULE(QString);
    void setID_TECHNICIEN(int);
    void setNUM_CONSTAT(int);
    void setETAT(int);

    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier();
    QSqlQuery rechercher(int NUM_MAINTENANCE);
    QSqlQueryModel * tri();
    QSqlQuery rechercherall();
    QChartView* stat();
    //nouv
    void notification_voiture_repare(int NUM_MAINTENANCE);
    int compteretat1();
        int compteretat0();

private:
    int NUM_MAINTENANCE;
    QString MATRICULE;
    int ID_TECHNICIEN;
    int NUM_CONSTAT;
    int ETAT;

};



#endif // MAINTENANCE_H
