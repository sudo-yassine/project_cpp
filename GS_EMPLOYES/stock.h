#ifndef STOCK_H
#define STOCK_H
#include<QString>
#include<QSqlQueryModel>
class Stock
{
public:
    Stock();
    Stock(int,int,QString,QString);
    QString getreference();
    int getquantite();
    QString gettype();
   int getprix();
    void setreference(QString);
    void setquantite(int);
    void settype(QString);
    void setprix(int);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(QString);
private:
    int quantite;
    QString reference,type;
    int prix;
};

#endif // STOCK_H
