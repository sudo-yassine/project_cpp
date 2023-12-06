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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_ajout;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *num_demande;
    QLineEdit *id_client;
    QLineEdit *temps;
    QLineEdit *local;
    QLineEdit *montant;
    QLineEdit *distance;
    QPushButton *bouton_annuler;
    QPushButton *bouton_ajouter;
    QLabel *label_4;
    QLabel *label_15;
    QLabel *label_24;
    QLineEdit *etat;
    QWidget *tab_Localisation;
    QTableView *table_Localisation;
    QLabel *label_14;
    QPushButton *bouton_tri;
    QGroupBox *groupBox_3;
    QPushButton *bouton_recherche;
    QLineEdit *le_recherche;
    QWidget *tab_supprimer;
    QGroupBox *groupBox_4;
    QLineEdit *supprimer;
    QPushButton *bouton_supprimer;
    QTableView *table_Localisations;
    QWidget *Modifier;
    QGroupBox *groupBox_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *num_demande_2;
    QLineEdit *id_client_2;
    QLineEdit *temps_2;
    QLineEdit *local_2;
    QLineEdit *montant_2;
    QLineEdit *distance_2;
    QPushButton *bouton_modifier;
    QLabel *label_13;
    QLabel *label_25;
    QLineEdit *etat_2;
    QPushButton *bouton_annuler_2;
    QWidget *widget;
    QGroupBox *groupBox_5;
    QPushButton *bouton_pdf;
    QLabel *label_16;
    QToolBox *toolBox;
    QWidget *page;
    QTableView *tab_2;
    QWidget *page_2;
    QLabel *label_7;
    QWidget *tab_3;
    QCalendarWidget *calendarWidget;
    QLabel *label_17;
    QWidget *widget1;
    QGroupBox *groupBox_6;
    QLineEdit *senderLineEdit;
    QLabel *label_20;
    QGroupBox *groupBox_7;
    QGroupBox *groupBox_8;
    QLineEdit *subjectLineEdit;
    QGroupBox *groupBox_9;
    QTextEdit *bodyTextEdit;
    QGroupBox *groupBox_10;
    QLineEdit *recipientLineEdit;
    QLabel *label_18;
    QPushButton *sendButton;
    QLabel *label_21;
    QLabel *label_19;
    QWidget *tab;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_22;
    QLabel *label_23;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 720);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QLatin1String("font: 300 italic 14pt \"Segoe UI\";\n"
"border-color: rgb(5, 5, 5);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.961326, y2:0.966, stop:0.469613 rgba(0, 255, 144, 172), stop:1 rgba(0, 217, 255, 234));\n"
"border-style: solid;\n"
"border-width:3px;\n"
"border-radius:20px;\n"
"border-color: darkgreen;\n"
""));
        tab_ajout = new QWidget();
        tab_ajout->setObjectName(QStringLiteral("tab_ajout"));
        groupBox = new QGroupBox(tab_ajout);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(110, 20, 971, 521));
        groupBox->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 180, 218, 92), stop:0.895604 rgba(0, 248, 210, 140));"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 20, 161, 51));
        QFont font;
        font.setFamily(QStringLiteral("Tw Cen MT"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        font.setKerning(false);
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 220, 121, 51));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 70, 121, 51));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 370, 121, 51));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 150, 121, 51));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        num_demande = new QLineEdit(groupBox);
        num_demande->setObjectName(QStringLiteral("num_demande"));
        num_demande->setEnabled(true);
        num_demande->setGeometry(QRect(210, 20, 221, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(37);
        num_demande->setFont(font1);
        num_demande->setAutoFillBackground(false);
        num_demande->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        id_client = new QLineEdit(groupBox);
        id_client->setObjectName(QStringLiteral("id_client"));
        id_client->setEnabled(true);
        id_client->setGeometry(QRect(220, 370, 221, 51));
        id_client->setFont(font1);
        id_client->setAutoFillBackground(false);
        id_client->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        temps = new QLineEdit(groupBox);
        temps->setObjectName(QStringLiteral("temps"));
        temps->setEnabled(true);
        temps->setGeometry(QRect(210, 80, 221, 51));
        temps->setFont(font1);
        temps->setAutoFillBackground(false);
        temps->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        local = new QLineEdit(groupBox);
        local->setObjectName(QStringLiteral("local"));
        local->setEnabled(true);
        local->setGeometry(QRect(220, 290, 221, 51));
        local->setFont(font1);
        local->setAutoFillBackground(false);
        local->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        montant = new QLineEdit(groupBox);
        montant->setObjectName(QStringLiteral("montant"));
        montant->setEnabled(true);
        montant->setGeometry(QRect(220, 220, 221, 51));
        montant->setFont(font1);
        montant->setAutoFillBackground(false);
        montant->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        distance = new QLineEdit(groupBox);
        distance->setObjectName(QStringLiteral("distance"));
        distance->setEnabled(true);
        distance->setGeometry(QRect(210, 150, 221, 51));
        distance->setFont(font1);
        distance->setAutoFillBackground(false);
        distance->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        bouton_annuler = new QPushButton(groupBox);
        bouton_annuler->setObjectName(QStringLiteral("bouton_annuler"));
        bouton_annuler->setGeometry(QRect(740, 60, 161, 81));
        bouton_annuler->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
" background-color: transparent;\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../Downloads/close-5758.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouton_annuler->setIcon(icon);
        bouton_ajouter = new QPushButton(groupBox);
        bouton_ajouter->setObjectName(QStringLiteral("bouton_ajouter"));
        bouton_ajouter->setGeometry(QRect(510, 60, 161, 81));
        bouton_ajouter->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
" background-color: transparent;\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../Downloads/green-add-button-12023 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        bouton_ajouter->setIcon(icon1);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 290, 121, 51));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(470, 220, 471, 251));
        label_15->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-style: transpaent;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;"));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/wetransfer_logo-projet-w-png_2023-11-02_1739/logo projetcolored.png")));
        label_15->setScaledContents(true);
        label_15->setWordWrap(false);
        label_24 = new QLabel(groupBox);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(40, 450, 121, 51));
        etat = new QLineEdit(groupBox);
        etat->setObjectName(QStringLiteral("etat"));
        etat->setGeometry(QRect(220, 450, 221, 51));
        tabWidget->addTab(tab_ajout, QString());
        tab_Localisation = new QWidget();
        tab_Localisation->setObjectName(QStringLiteral("tab_Localisation"));
        table_Localisation = new QTableView(tab_Localisation);
        table_Localisation->setObjectName(QStringLiteral("table_Localisation"));
        table_Localisation->setGeometry(QRect(30, 100, 851, 441));
        table_Localisation->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.378238 rgba(0, 241, 255, 93), stop:1 rgba(0, 255, 231, 255));"));
        table_Localisation->verticalHeader()->setVisible(false);
        label_14 = new QLabel(tab_Localisation);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(490, 20, 271, 51));
        bouton_tri = new QPushButton(tab_Localisation);
        bouton_tri->setObjectName(QStringLiteral("bouton_tri"));
        bouton_tri->setGeometry(QRect(960, 430, 171, 81));
        bouton_tri->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.378238 rgba(0, 241, 255, 93), stop:1 rgba(0, 255, 231, 255));\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../Downloads/sort-ascending-6615.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouton_tri->setIcon(icon2);
        groupBox_3 = new QGroupBox(tab_Localisation);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(890, 100, 311, 291));
        groupBox_3->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.388601 rgba(0, 214, 226, 122), stop:1 rgba(0, 218, 197, 211));"));
        bouton_recherche = new QPushButton(groupBox_3);
        bouton_recherche->setObjectName(QStringLiteral("bouton_recherche"));
        bouton_recherche->setGeometry(QRect(20, 150, 271, 81));
        bouton_recherche->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.378238 rgba(0, 241, 255, 93), stop:1 rgba(0, 255, 231, 255));\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../../Downloads/search-2910.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouton_recherche->setIcon(icon3);
        le_recherche = new QLineEdit(groupBox_3);
        le_recherche->setObjectName(QStringLiteral("le_recherche"));
        le_recherche->setEnabled(true);
        le_recherche->setGeometry(QRect(20, 50, 271, 71));
        le_recherche->setFont(font1);
        le_recherche->setAutoFillBackground(false);
        le_recherche->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        le_recherche->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_Localisation, QString());
        tab_supprimer = new QWidget();
        tab_supprimer->setObjectName(QStringLiteral("tab_supprimer"));
        groupBox_4 = new QGroupBox(tab_supprimer);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 30, 381, 531));
        supprimer = new QLineEdit(groupBox_4);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setEnabled(true);
        supprimer->setGeometry(QRect(50, 140, 271, 51));
        supprimer->setFont(font1);
        supprimer->setAutoFillBackground(false);
        supprimer->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        supprimer->setAlignment(Qt::AlignCenter);
        bouton_supprimer = new QPushButton(groupBox_4);
        bouton_supprimer->setObjectName(QStringLiteral("bouton_supprimer"));
        bouton_supprimer->setGeometry(QRect(90, 220, 181, 81));
        bouton_supprimer->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
" background-color: transparent;\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../../Downloads/red-delete-10437.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouton_supprimer->setIcon(icon4);
        table_Localisations = new QTableView(tab_supprimer);
        table_Localisations->setObjectName(QStringLiteral("table_Localisations"));
        table_Localisations->setGeometry(QRect(400, 30, 791, 531));
        table_Localisations->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.378238 rgba(0, 241, 255, 93), stop:1 rgba(0, 255, 231, 255));"));
        table_Localisations->verticalHeader()->setVisible(false);
        tabWidget->addTab(tab_supprimer, QString());
        Modifier = new QWidget();
        Modifier->setObjectName(QStringLiteral("Modifier"));
        groupBox_2 = new QGroupBox(Modifier);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(90, 30, 971, 521));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 20, 151, 51));
        label_8->setFont(font);
        label_8->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 230, 121, 51));
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 80, 121, 51));
        label_10->setFont(font);
        label_10->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 380, 121, 51));
        label_11->setFont(font);
        label_11->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(40, 160, 121, 51));
        label_12->setFont(font);
        label_12->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        num_demande_2 = new QLineEdit(groupBox_2);
        num_demande_2->setObjectName(QStringLiteral("num_demande_2"));
        num_demande_2->setEnabled(true);
        num_demande_2->setGeometry(QRect(220, 20, 221, 51));
        num_demande_2->setFont(font1);
        num_demande_2->setAutoFillBackground(false);
        num_demande_2->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        id_client_2 = new QLineEdit(groupBox_2);
        id_client_2->setObjectName(QStringLiteral("id_client_2"));
        id_client_2->setEnabled(true);
        id_client_2->setGeometry(QRect(220, 380, 221, 51));
        id_client_2->setFont(font1);
        id_client_2->setAutoFillBackground(false);
        id_client_2->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        temps_2 = new QLineEdit(groupBox_2);
        temps_2->setObjectName(QStringLiteral("temps_2"));
        temps_2->setEnabled(true);
        temps_2->setGeometry(QRect(220, 90, 221, 51));
        temps_2->setFont(font1);
        temps_2->setAutoFillBackground(false);
        temps_2->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        local_2 = new QLineEdit(groupBox_2);
        local_2->setObjectName(QStringLiteral("local_2"));
        local_2->setEnabled(true);
        local_2->setGeometry(QRect(210, 300, 221, 51));
        local_2->setFont(font1);
        local_2->setAutoFillBackground(false);
        local_2->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        montant_2 = new QLineEdit(groupBox_2);
        montant_2->setObjectName(QStringLiteral("montant_2"));
        montant_2->setEnabled(true);
        montant_2->setGeometry(QRect(220, 230, 221, 51));
        montant_2->setFont(font1);
        montant_2->setAutoFillBackground(false);
        montant_2->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        distance_2 = new QLineEdit(groupBox_2);
        distance_2->setObjectName(QStringLiteral("distance_2"));
        distance_2->setEnabled(true);
        distance_2->setGeometry(QRect(220, 170, 221, 51));
        distance_2->setFont(font1);
        distance_2->setAutoFillBackground(false);
        distance_2->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        bouton_modifier = new QPushButton(groupBox_2);
        bouton_modifier->setObjectName(QStringLiteral("bouton_modifier"));
        bouton_modifier->setGeometry(QRect(590, 160, 161, 81));
        bouton_modifier->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
" background-color: transparent;\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../../Downloads/transfer-3819.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouton_modifier->setIcon(icon5);
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(50, 300, 121, 51));
        label_13->setFont(font);
        label_13->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(40, 470, 131, 31));
        etat_2 = new QLineEdit(groupBox_2);
        etat_2->setObjectName(QStringLiteral("etat_2"));
        etat_2->setGeometry(QRect(220, 460, 211, 51));
        bouton_annuler_2 = new QPushButton(Modifier);
        bouton_annuler_2->setObjectName(QStringLiteral("bouton_annuler_2"));
        bouton_annuler_2->setGeometry(QRect(700, 320, 161, 81));
        bouton_annuler_2->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
" background-color: transparent;\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        bouton_annuler_2->setIcon(icon);
        tabWidget->addTab(Modifier, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        groupBox_5 = new QGroupBox(widget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 391, 391));
        bouton_pdf = new QPushButton(groupBox_5);
        bouton_pdf->setObjectName(QStringLiteral("bouton_pdf"));
        bouton_pdf->setGeometry(QRect(110, 70, 171, 81));
        bouton_pdf->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.378238 rgba(0, 241, 255, 93), stop:1 rgba(0, 255, 231, 255));\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        bouton_pdf->setIcon(icon2);
        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(40, 160, 321, 191));
        label_16->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-style: transpaent;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;"));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/wetransfer_logo-projet-w-png_2023-11-02_1739/logo projetcolored.png")));
        label_16->setScaledContents(true);
        label_16->setWordWrap(false);
        toolBox = new QToolBox(widget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(410, 10, 791, 551));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 94, 24));
        tab_2 = new QTableView(page);
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_2->setGeometry(QRect(10, 10, 761, 431));
#ifndef QT_NO_TOOLTIP
        tab_2->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
        tab_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.378238 rgba(0, 241, 255, 93), stop:1 rgba(0, 255, 231, 255));"));
        tab_2->setFrameShape(QFrame::Box);
        tab_2->setShowGrid(true);
        tab_2->setGridStyle(Qt::CustomDashLine);
        tab_2->setCornerButtonEnabled(false);
        tab_2->horizontalHeader()->setVisible(false);
        tab_2->horizontalHeader()->setCascadingSectionResizes(true);
        tab_2->horizontalHeader()->setHighlightSections(true);
        tab_2->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tab_2->horizontalHeader()->setStretchLastSection(true);
        tab_2->verticalHeader()->setVisible(false);
        toolBox->addItem(page, QStringLiteral("FICHIER PDF"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 779, 449));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 10, 761, 431));
        toolBox->addItem(page_2, QStringLiteral("STATISTICS"));
        tabWidget->addTab(widget, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        calendarWidget = new QCalendarWidget(tab_3);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(20, 90, 1171, 471));
        calendarWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);selection-color: rgb(98, 98, 98);"));
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(420, 20, 421, 51));
        tabWidget->addTab(tab_3, QString());
        widget1 = new QWidget();
        widget1->setObjectName(QStringLiteral("widget1"));
        groupBox_6 = new QGroupBox(widget1);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(30, 20, 471, 101));
        senderLineEdit = new QLineEdit(groupBox_6);
        senderLineEdit->setObjectName(QStringLiteral("senderLineEdit"));
        senderLineEdit->setGeometry(QRect(80, 10, 381, 81));
        label_20 = new QLabel(groupBox_6);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(0, 20, 71, 71));
        label_20->setStyleSheet(QLatin1String("border-color: transparent;\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 180, 218, 0), stop:0.896373 rgba(0, 248, 210, 0));"));
        label_20->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/send-mail-2554.png")));
        label_20->setScaledContents(true);
        groupBox_7 = new QGroupBox(widget1);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(520, 20, 681, 541));
        groupBox_8 = new QGroupBox(groupBox_7);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 40, 661, 80));
        subjectLineEdit = new QLineEdit(groupBox_8);
        subjectLineEdit->setObjectName(QStringLiteral("subjectLineEdit"));
        subjectLineEdit->setGeometry(QRect(90, 10, 561, 61));
        groupBox_9 = new QGroupBox(groupBox_7);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 130, 661, 401));
        bodyTextEdit = new QTextEdit(groupBox_9);
        bodyTextEdit->setObjectName(QStringLiteral("bodyTextEdit"));
        bodyTextEdit->setGeometry(QRect(93, 10, 561, 381));
        groupBox_10 = new QGroupBox(widget1);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(30, 260, 471, 101));
        recipientLineEdit = new QLineEdit(groupBox_10);
        recipientLineEdit->setObjectName(QStringLiteral("recipientLineEdit"));
        recipientLineEdit->setGeometry(QRect(100, 10, 361, 81));
        label_18 = new QLabel(groupBox_10);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 30, 81, 61));
        label_18->setStyleSheet(QLatin1String("border-color: transparent;\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 180, 218, 0), stop:0.896373 rgba(0, 248, 210, 0));"));
        label_18->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/mail-letter-2971.png")));
        label_18->setScaledContents(true);
        sendButton = new QPushButton(widget1);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(110, 410, 291, 81));
        label_21 = new QLabel(widget1);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(200, 130, 121, 121));
        label_21->setStyleSheet(QLatin1String("border-color: transparent;\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 180, 218, 0), stop:0.896373 rgba(0, 248, 210, 0));"));
        label_21->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/arrow-right-2817.png")));
        label_21->setScaledContents(true);
        label_19 = new QLabel(widget1);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(130, 420, 61, 61));
        label_19->setStyleSheet(QLatin1String("border-color: transparent;\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 180, 218, 0), stop:0.896373 rgba(0, 248, 210, 0));"));
        label_19->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/send-4008.png")));
        label_19->setScaledContents(true);
        tabWidget->addTab(widget1, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(510, 440, 181, 51));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(510, 360, 181, 41));
        label_22 = new QLabel(tab);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(430, 130, 331, 91));
        label_22->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(tab);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(540, 230, 121, 121));
        label_23->setStyleSheet(QLatin1String("border-color: transparent;\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 180, 218, 0), stop:0.896373 rgba(0, 248, 210, 0));"));
        label_23->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/arrow-right-2817.png")));
        label_23->setScaledContents(true);
        tabWidget->addTab(tab, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "N demande", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Montant", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Temps", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "ID client", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Distance", Q_NULLPTR));
        num_demande->setText(QString());
        id_client->setText(QString());
        temps->setText(QString());
        local->setText(QString());
        montant->setText(QString());
        distance->setText(QString());
        bouton_annuler->setText(QApplication::translate("MainWindow", "ANNULER", Q_NULLPTR));
        bouton_ajouter->setText(QApplication::translate("MainWindow", "AJOUTER", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "local", Q_NULLPTR));
        label_15->setText(QString());
        label_24->setText(QApplication::translate("MainWindow", "ETAT", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_ajout), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Demandes de localisation", Q_NULLPTR));
        bouton_tri->setText(QApplication::translate("MainWindow", "TRI", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        bouton_recherche->setText(QApplication::translate("MainWindow", "CHERCHER", Q_NULLPTR));
        le_recherche->setText(QString());
        le_recherche->setPlaceholderText(QApplication::translate("MainWindow", "NUM DEMANDE", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_Localisation), QApplication::translate("MainWindow", "Afficher les demandes ", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Suppression", Q_NULLPTR));
        supprimer->setText(QString());
        supprimer->setPlaceholderText(QApplication::translate("MainWindow", "NUM DEMANDE", Q_NULLPTR));
        bouton_supprimer->setText(QApplication::translate("MainWindow", "SUPPRIMER", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_supprimer), QApplication::translate("MainWindow", "Supprimer une demande", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Modification", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "N demande", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Montant", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Temps", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "ID client", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Distance", Q_NULLPTR));
        num_demande_2->setText(QString());
        id_client_2->setText(QString());
        temps_2->setText(QString());
        local_2->setText(QString());
        montant_2->setText(QString());
        distance_2->setText(QString());
        bouton_modifier->setText(QApplication::translate("MainWindow", "MODIFIER", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "local", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "Etat", Q_NULLPTR));
        bouton_annuler_2->setText(QApplication::translate("MainWindow", "ANNULER", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Modifier), QApplication::translate("MainWindow", "Modifier une demande", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "GENERATION", Q_NULLPTR));
        bouton_pdf->setText(QApplication::translate("MainWindow", "GENERER", Q_NULLPTR));
        label_16->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "FICHIER PDF", Q_NULLPTR));
        label_7->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "STATISTICS", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("MainWindow", "STATS/PDF", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Calendrier des demande avec promotion", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Calendrier", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Sender", Q_NULLPTR));
        label_20->setText(QString());
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Mail", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Subject", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Body", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "Recepient", Q_NULLPTR));
        label_18->setText(QString());
        sendButton->setText(QApplication::translate("MainWindow", "SEND", Q_NULLPTR));
        label_21->setText(QString());
        label_19->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(widget1), QApplication::translate("MainWindow", "Mail", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "VALIDER", Q_NULLPTR));
        label_22->setText(QString());
        label_23->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "arduino", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
