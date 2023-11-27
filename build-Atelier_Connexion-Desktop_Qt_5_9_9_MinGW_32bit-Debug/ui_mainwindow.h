/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *la_matricule;
    QLineEdit *le_typepanne;
    QLineEdit *la_Marque;
    QLineEdit *le_type;
    QLineEdit *l_etat;
    QLineEdit *les_Papiers;
    QPushButton *pb_ajouter;
    QWidget *tab_2;
    QTableView *tab_moyen;
    QGroupBox *groupBox_3;
    QLineEdit *line_recherche;
    QLabel *label_14;
    QPushButton *pb_chercher;
    QPushButton *pb_trier;
    QPushButton *pb_PDF;
    QPushButton *pb_stat;
    QPushButton *pb_CSV;
    QPushButton *pb_Qrcode;
    QLabel *qr;
    QWidget *tab_3;
    QLabel *label_7;
    QLineEdit *matricule_supp;
    QPushButton *pb_supprimer;
    QWidget *tab_4;
    QGroupBox *groupBox_2;
    QPushButton *pb_modifier;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *la_matricule_2;
    QLineEdit *le_typepanne_2;
    QLineEdit *la_Marque_2;
    QLineEdit *le_type_2;
    QLineEdit *l_etat_2;
    QLineEdit *les_papiers2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(980, 554);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(40, 30, 901, 451));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 721, 361));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 56, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 130, 81, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 230, 56, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(390, 40, 56, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(390, 130, 56, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(390, 220, 56, 16));
        la_matricule = new QLineEdit(groupBox);
        la_matricule->setObjectName(QStringLiteral("la_matricule"));
        la_matricule->setGeometry(QRect(190, 40, 113, 22));
        le_typepanne = new QLineEdit(groupBox);
        le_typepanne->setObjectName(QStringLiteral("le_typepanne"));
        le_typepanne->setGeometry(QRect(190, 130, 113, 22));
        la_Marque = new QLineEdit(groupBox);
        la_Marque->setObjectName(QStringLiteral("la_Marque"));
        la_Marque->setGeometry(QRect(190, 220, 113, 22));
        le_type = new QLineEdit(groupBox);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(490, 130, 113, 22));
        l_etat = new QLineEdit(groupBox);
        l_etat->setObjectName(QStringLiteral("l_etat"));
        l_etat->setGeometry(QRect(490, 40, 113, 22));
        les_Papiers = new QLineEdit(groupBox);
        les_Papiers->setObjectName(QStringLiteral("les_Papiers"));
        les_Papiers->setGeometry(QRect(490, 220, 113, 22));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(320, 310, 93, 28));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_moyen = new QTableView(tab_2);
        tab_moyen->setObjectName(QStringLiteral("tab_moyen"));
        tab_moyen->setGeometry(QRect(10, 10, 431, 371));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(460, 10, 221, 371));
        line_recherche = new QLineEdit(groupBox_3);
        line_recherche->setObjectName(QStringLiteral("line_recherche"));
        line_recherche->setGeometry(QRect(20, 181, 171, 31));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 130, 61, 16));
        pb_chercher = new QPushButton(groupBox_3);
        pb_chercher->setObjectName(QStringLiteral("pb_chercher"));
        pb_chercher->setGeometry(QRect(60, 300, 93, 28));
        pb_trier = new QPushButton(tab_2);
        pb_trier->setObjectName(QStringLiteral("pb_trier"));
        pb_trier->setGeometry(QRect(700, 80, 93, 28));
        pb_PDF = new QPushButton(tab_2);
        pb_PDF->setObjectName(QStringLiteral("pb_PDF"));
        pb_PDF->setGeometry(QRect(700, 120, 93, 28));
        pb_stat = new QPushButton(tab_2);
        pb_stat->setObjectName(QStringLiteral("pb_stat"));
        pb_stat->setGeometry(QRect(700, 200, 93, 28));
        pb_CSV = new QPushButton(tab_2);
        pb_CSV->setObjectName(QStringLiteral("pb_CSV"));
        pb_CSV->setGeometry(QRect(700, 160, 93, 28));
        pb_Qrcode = new QPushButton(tab_2);
        pb_Qrcode->setObjectName(QStringLiteral("pb_Qrcode"));
        pb_Qrcode->setGeometry(QRect(700, 240, 93, 28));
        qr = new QLabel(tab_2);
        qr->setObjectName(QStringLiteral("qr"));
        qr->setGeometry(QRect(700, 290, 181, 121));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 65, 111, 51));
        matricule_supp = new QLineEdit(tab_3);
        matricule_supp->setObjectName(QStringLiteral("matricule_supp"));
        matricule_supp->setGeometry(QRect(190, 80, 113, 22));
        pb_supprimer = new QPushButton(tab_3);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(280, 270, 121, 31));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 20, 781, 341));
        pb_modifier = new QPushButton(groupBox_2);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(330, 290, 93, 28));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 70, 101, 20));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 160, 111, 20));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 240, 91, 20));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(410, 70, 81, 16));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(410, 160, 71, 16));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(410, 250, 81, 16));
        la_matricule_2 = new QLineEdit(groupBox_2);
        la_matricule_2->setObjectName(QStringLiteral("la_matricule_2"));
        la_matricule_2->setGeometry(QRect(170, 70, 113, 22));
        le_typepanne_2 = new QLineEdit(groupBox_2);
        le_typepanne_2->setObjectName(QStringLiteral("le_typepanne_2"));
        le_typepanne_2->setGeometry(QRect(170, 150, 113, 22));
        la_Marque_2 = new QLineEdit(groupBox_2);
        la_Marque_2->setObjectName(QStringLiteral("la_Marque_2"));
        la_Marque_2->setGeometry(QRect(180, 230, 113, 22));
        le_type_2 = new QLineEdit(groupBox_2);
        le_type_2->setObjectName(QStringLiteral("le_type_2"));
        le_type_2->setGeometry(QRect(510, 70, 113, 22));
        l_etat_2 = new QLineEdit(groupBox_2);
        l_etat_2->setObjectName(QStringLiteral("l_etat_2"));
        l_etat_2->setGeometry(QRect(510, 160, 113, 22));
        les_papiers2 = new QLineEdit(groupBox_2);
        les_papiers2->setObjectName(QStringLiteral("les_papiers2"));
        les_papiers2->setGeometry(QRect(510, 240, 113, 22));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 980, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Matricule :", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Type Panne :", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Marque :", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Type :", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Etat :", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Papier :", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Ajouter un moy de transpot", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Matricule :", Q_NULLPTR));
        pb_chercher->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        pb_trier->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        pb_PDF->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        pb_stat->setText(QApplication::translate("MainWindow", "Statiques", Q_NULLPTR));
        pb_CSV->setText(QApplication::translate("MainWindow", "CSV", Q_NULLPTR));
        pb_Qrcode->setText(QApplication::translate("MainWindow", "QrCode", Q_NULLPTR));
        qr->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "afficher les moy de transport", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Matricule :", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Supprimer un moy de transport", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Nouv Type Panne :", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Nouv Marque :", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Nouv Type", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Nouv Etat", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Nouv Papier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Modifier un moy de transport", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
