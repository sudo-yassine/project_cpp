#ifndef LOGIN_H
#define LOGIN_H
#include <QSqlQuery>
#include<QString>
#include<QSqlQueryModel>
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QDialog>

#include<ui_mainwindow2.h>
#include<mainwindowlog.h>

#include <QWidget>


class login
{  //Q_OBJECT

public:
    login();
    login( QString username, QString password);
        explicit login(QWidget *parent = nullptr);
        ~login();
    QString getusername(){return username;}
    QString getpassword(){return password;}
    void setusername(int u){this->username=u;}
    void setpassword(QString pd){password=pd;}
private:
    QString username, password;
};

#endif // LOGIN_H
