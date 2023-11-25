  #include "connection.h"
#include "qdebug.h"

QDebug::QDebug()
{
  #include "connection.h"
    #include"QDebug"

    Connection::Connection();
    {

    }

    bool Connection::createconnect()
    {bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Projet2A");
    db.setUserName("Molka");//inserer nom de l'utilisateur
    db.setPassword("molkas");//inserer mot de passe de cet utilisateur

    if (db.open())
    test=true;





        return  test;
    }*/
    /*
    connect(ui->btnAjouter, &QPushButton::clicked, this, &QDebug::onBtnAjouterClicked);

    connect(ui->btnAfficher, &QPushButton::clicked, this, &QDebug::onBtnAfficherClicked);

    void QDebug::onBtnAjouterClicked() {
        // Code pour ajouter une personne à la base de données.
        if (ajoutReussi) {
            QMessageBox::information(this, "Succès", "Personne ajoutée avec succès.");
        } else {
            QMessageBox::critical(this, "Erreur", "Erreur lors de l'ajout de la personne.");
        }
    }

    void QDebug::onBtnAfficherClicked() {
        // Code pour afficher les personnes depuis la base de données.
        if (affichageReussi) {
            QMessageBox::information(this, "Succès", "Personnes affichées avec succès.");
        } else {
            QMessageBox::critical(this, "Erreur", "Erreur lors de l'affichage des personnes.");
        }
    }


}
