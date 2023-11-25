
#include "login.h"
#include "ui_mainwindow2.h"
#include <QSqlQuery>
#include <QDebug>
#include <QTextLength>
#include <QDialog>
#include<QString>

login::login()
{
 username="";password="";
}

login::login(QString username,QString password)
{
   this->username=username;
   this->password=password;
}

login::~login()
{
    //delete ui;
}
