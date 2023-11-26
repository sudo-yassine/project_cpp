#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    QString username=ui->username->text();
        QString password=ui->password->text();

        if (username=="0000" && password=="0000")
        {
            QMessageBox::information(this,"login","admin mode");
            MainWindow *mainwindow =new MainWindow(this);
            mainwindow->show();



        }
        /*else if (username=="notAdmin" && password=="notAdmin")
        {
            QMessageBox::information(this,"login","not admin mode");

           // Affichage=new affichage(this);
            //Affichage->show();


        }*/
        else
        {
            QMessageBox::warning(this,"login","username or password is not correct");

        }

}
