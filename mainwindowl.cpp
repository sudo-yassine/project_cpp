#include "mainwindowl.h"
#include "ui_mainwindowl.h"
#include <QMessageBox>

MainWindowL::MainWindowL(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowL)
{
    ui->setupUi(this);
}

MainWindowL::~MainWindowL()
{
    delete ui;
}

void MainWindowL::on_pb_connecter_clicked()
{
 QString username = ui->line_username->text();
 QString password = ui->line_password->text();

 if (username == "test" && password == "test" )
        {QMessageBox::information(this, "login", "Mot de passe correcte");
 }
 else { QMessageBox::information(this, "login", "Mot de passe incorrecte");
}}
