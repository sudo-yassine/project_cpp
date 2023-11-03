#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employee.h"
#include <QIntValidator>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->le_reference->setValidator(new QIntValidator(0,999999,this));
ui->tab_stock->setModel(p.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
 int ID=ui->le_id->text().toInt();
 QString NOM=ui->le_nom->text();
 QString PRENOM=ui->le_prenom->text();
 QString ADRESSE_MAIL=ui->le_adresse_mail->text();
 QString SPECIALITE=ui->le_specialite->text();
 employee p(ID,NOM,PRENOM,ADRESSE_MAIL,SPECIALITE);
 bool test=p.ajouter();
QMessageBox msgBox;
 if(test != true)
 {
     msgBox.setText("Ajout avec succes.");
     ui->tab_stock->setModel(p.afficher());
 }
 else
     msgBox.setText("Echec d'ajout.");
     msgBox.exec();
}

void MainWindow::on_pb_supp_clicked()
{
    employee p1;
    p1.setID(ui->le_id_sup->text().toInt());
    bool test=p1.supprimer(p1.getID());
   QMessageBox msgBox;
    if(test)
    {
        msgBox.setText("Suppression avec succes.");
        ui->tab_stock->setModel(p.afficher());
    }
    else
        msgBox.setText("Echec de supprimer.");
        msgBox.exec();
}
