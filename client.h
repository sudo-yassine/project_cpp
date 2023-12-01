#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Client
{
public:
    Client();
    Client(int ,int,QString,int ,QString,QString);
   int getcin();
    int getnum_tel();
    QString getprenom();
    int getpermis();
    QString getnom();
    QString getemail();


    void setcin(int);
    void setnum_tel(int);
    void setprenom(QString);
    void setpermis(int);
    void setnom(QString);
    void setemail(QString);


    bool ajouter();
    bool modifier();
    QSqlQueryModel* afficher();
    QSqlQueryModel* trienom();
    QSqlQueryModel* trieprenom();
    QSqlQueryModel* triecin();
    bool supprimer(int);
    bool idExists(const int &cin);
    void notification(QString);
private:
    int cin, num_tel , permis ;
    QString prenom,nom ,email;


};

#endif // CLIENT_H
