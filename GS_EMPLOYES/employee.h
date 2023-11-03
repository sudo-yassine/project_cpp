#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<QString>
#include<QSqlQueryModel>

class employee
{
public:

    employee();
    employee(int ID,QString NOM,QString PRENOM,QString ADRESSE_MAIL,QString SPECIALITE);
    int getID();
    QString getNOM();
    QString getPRENOM();
    QString getADRESSE_MAIL();
    QString getSPECIALITE();
    void setID(int ID);
    void setNOM(QString NOM);
    void setPRENOM(QString PRENOM);
    void setADRESSE_MAIL(QString ADRESSE_MAIL);
    void setSPECIALITE(QString SPECIALITE);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int ID);
private:
    int ID;
    QString NOM,PRENOM,ADRESSE_MAIL,SPECIALITE;
};

#endif // EMPLOYEE_H
