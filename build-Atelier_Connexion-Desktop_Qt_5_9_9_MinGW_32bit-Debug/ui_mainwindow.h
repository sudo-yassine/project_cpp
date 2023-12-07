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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLineEdit *username;
    QLineEdit *password;
    QLabel *label_24;
    QWidget *page_001;
    QWidget *widget;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_15;
    QLabel *label_6;
    QWidget *widget_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_17;
    QStackedWidget *stackedWidget_2;
    QWidget *page_0;
    QLabel *label;
    QPushButton *pushButton_16;
    QLabel *label_26;
    QWidget *page_1;
    QGroupBox *groupBox_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *num_demande;
    QLineEdit *id_client;
    QLineEdit *temps;
    QLineEdit *local;
    QLineEdit *montant;
    QLineEdit *distance;
    QPushButton *bouton_annuler;
    QPushButton *bouton_ajouter;
    QLabel *label_12;
    QTableView *table_Localisation;
    QGroupBox *groupBox_4;
    QLineEdit *supprimer;
    QPushButton *bouton_supprimer;
    QGroupBox *groupBox_3;
    QPushButton *bouton_recherche;
    QLineEdit *le_recherche;
    QPushButton *bouton_tri;
    QLabel *label_22;
    QLabel *label_32;
    QGroupBox *groupBox_6;
    QPushButton *bouton_pdf;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QLabel *label_31;
    QWidget *page_2;
    QLabel *label_14;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QGroupBox *groupBox_5;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *num_demande_2;
    QLineEdit *id_client_2;
    QLineEdit *temps_2;
    QLineEdit *local_2;
    QLineEdit *montant_2;
    QLineEdit *distance_2;
    QPushButton *bouton_modifier;
    QLabel *label_20;
    QTableView *table_Localisations;
    QWidget *page_3;
    QPushButton *pushButton_27;
    QLabel *label_27;
    QLabel *label_30;
    QPushButton *pushButton_4;
    QLabel *label_35;
    QLineEdit *lineEdit;
    QLabel *label_36;
    QGroupBox *groupBox_7;
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1920, 1080);
        MainWindow->setStyleSheet(QLatin1String("font: 300 italic 14pt \"Segoe UI\";\n"
"border-color: rgb(5, 5, 5);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.961326, y2:0.966, stop:0.469613 rgba(0, 255, 144, 172), stop:1 rgba(0, 217, 255, 234));\n"
"border-style: solid;\n"
"border-width:3px;\n"
"border-radius:10px;\n"
"border-color: darkgreen;\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 10, 1921, 971));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 50, 1881, 901));
        groupBox->setStyleSheet(QLatin1String("font: 700 italic 20pt \"Segoe UI\";\n"
"border-color: rgb(5, 5, 5);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.961326, y2:0.966, stop:0.469613 rgba(0, 255, 144, 172), stop:1 rgba(0, 217, 255, 234));\n"
"border-style: solid;\n"
"border-width:3px;\n"
"border-radius:20px;\n"
"border-color: darkgreen;\n"
""));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(720, 200, 171, 51));
        QFont font;
        font.setFamily(QStringLiteral("Tw Cen MT"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 0), stop:0.895604 rgba(0, 0, 0, 0));\n"
"border-color: rgb(0,0, 0, 0);\n"
""));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(720, 120, 191, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Tw Cen MT"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        font1.setKerning(false);
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(870, 280, 171, 81));
        pushButton->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
" background-color: transparent;\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        username = new QLineEdit(groupBox);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(940, 120, 381, 51));
        username->setAutoFillBackground(false);
        username->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        password = new QLineEdit(groupBox);
        password->setObjectName(QStringLiteral("password"));
        password->setEnabled(true);
        password->setGeometry(QRect(940, 190, 381, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(87);
        password->setFont(font2);
        password->setAutoFillBackground(false);
        password->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        password->setEchoMode(QLineEdit::Password);
        label_24 = new QLabel(groupBox);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(610, 470, 701, 341));
        label_24->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-style: transpaent;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;"));
        label_24->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/wetransfer_logo-projet-w-png_2023-11-02_1739/logo projetcolored.png")));
        label_24->setScaledContents(true);
        label_24->setWordWrap(false);
        stackedWidget->addWidget(page);
        page_001 = new QWidget();
        page_001->setObjectName(QStringLiteral("page_001"));
        widget = new QWidget(page_001);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 81, 941));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 310, 61, 61));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../Downloads/repair-tool-5840.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon);
        pushButton_5->setIconSize(QSize(50, 50));
        pushButton_5->setCheckable(true);
        pushButton_5->setAutoExclusive(true);
        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 430, 61, 61));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../Downloads/globe-gps-red-navigation-sign-15947.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);
        pushButton_6->setIconSize(QSize(50, 50));
        pushButton_6->setCheckable(true);
        pushButton_6->setAutoExclusive(true);
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 840, 61, 61));
        pushButton_7->setCheckable(true);
        pushButton_7->setAutoExclusive(true);
        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 190, 61, 61));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../Downloads/user-group-296.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon2);
        pushButton_8->setIconSize(QSize(40404, 40));
        pushButton_8->setCheckable(true);
        pushButton_8->setAutoExclusive(true);
        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 80, 61, 61));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../../Downloads/businessman-309.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon3);
        pushButton_9->setIconSize(QSize(50, 50));
        pushButton_9->setCheckable(true);
        pushButton_9->setAutoExclusive(true);
        pushButton_15 = new QPushButton(widget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(10, 540, 61, 61));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../../Downloads/car-fleet-12792.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_15->setIcon(icon4);
        pushButton_15->setIconSize(QSize(50, 50));
        pushButton_15->setCheckable(true);
        pushButton_15->setAutoExclusive(true);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 10, 61, 51));
        label_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/370293604_1773005379805812_53322258381366709_n-removebg-preview (1).png")));
        label_6->setScaledContents(true);
        widget_2 = new QWidget(page_001);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(100, 10, 191, 941));
        pushButton_10 = new QPushButton(widget_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 80, 171, 61));
        pushButton_10->setMinimumSize(QSize(121, 61));
        pushButton_10->setMaximumSize(QSize(55521, 555));
        pushButton_10->setIcon(icon3);
        pushButton_10->setCheckable(true);
        pushButton_10->setAutoExclusive(true);
        pushButton_11 = new QPushButton(widget_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(10, 540, 171, 61));
        pushButton_11->setIcon(icon4);
        pushButton_11->setIconSize(QSize(30, 20));
        pushButton_11->setCheckable(true);
        pushButton_11->setAutoExclusive(true);
        pushButton_12 = new QPushButton(widget_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(10, 310, 171, 61));
        pushButton_12->setMinimumSize(QSize(121, 61));
        pushButton_12->setIcon(icon);
        pushButton_12->setCheckable(true);
        pushButton_12->setAutoExclusive(true);
        pushButton_13 = new QPushButton(widget_2);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(10, 190, 171, 61));
        pushButton_13->setIcon(icon2);
        pushButton_13->setCheckable(true);
        pushButton_13->setAutoExclusive(true);
        pushButton_14 = new QPushButton(widget_2);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(10, 430, 171, 61));
        pushButton_14->setMinimumSize(QSize(121, 61));
        pushButton_14->setMaximumSize(QSize(500, 5555));
        pushButton_14->setIcon(icon1);
        pushButton_14->setCheckable(true);
        pushButton_14->setAutoExclusive(true);
        pushButton_17 = new QPushButton(widget_2);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(10, 840, 171, 61));
        stackedWidget_2 = new QStackedWidget(page_001);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(300, 99, 1601, 861));
        page_0 = new QWidget();
        page_0->setObjectName(QStringLiteral("page_0"));
        label = new QLabel(page_0);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 180, 971, 431));
        pushButton_16 = new QPushButton(page_0);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(1460, 10, 111, 61));
        pushButton_16->setCheckable(true);
        label_26 = new QLabel(page_0);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(550, 290, 471, 251));
        label_26->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-style: transpaent;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;"));
        label_26->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/wetransfer_logo-projet-w-png_2023-11-02_1739/logo projetcolored.png")));
        label_26->setScaledContents(true);
        label_26->setWordWrap(false);
        stackedWidget_2->addWidget(page_0);
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        groupBox_2 = new QGroupBox(page_1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 80, 1571, 761));
        groupBox_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 180, 218, 92), stop:0.895604 rgba(0, 248, 210, 140));"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 20, 161, 51));
        label_7->setFont(font1);
        label_7->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 200, 121, 51));
        label_8->setFont(font1);
        label_8->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 70, 121, 51));
        label_9->setFont(font1);
        label_9->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 320, 121, 51));
        label_10->setFont(font1);
        label_10->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 140, 121, 51));
        label_11->setFont(font1);
        label_11->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        num_demande = new QLineEdit(groupBox_2);
        num_demande->setObjectName(QStringLiteral("num_demande"));
        num_demande->setEnabled(true);
        num_demande->setGeometry(QRect(160, 20, 221, 51));
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe UI"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(37);
        num_demande->setFont(font3);
        num_demande->setAutoFillBackground(false);
        num_demande->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        id_client = new QLineEdit(groupBox_2);
        id_client->setObjectName(QStringLiteral("id_client"));
        id_client->setEnabled(true);
        id_client->setGeometry(QRect(160, 320, 221, 51));
        id_client->setFont(font3);
        id_client->setAutoFillBackground(false);
        id_client->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        temps = new QLineEdit(groupBox_2);
        temps->setObjectName(QStringLiteral("temps"));
        temps->setEnabled(true);
        temps->setGeometry(QRect(160, 80, 221, 51));
        temps->setFont(font3);
        temps->setAutoFillBackground(false);
        temps->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        local = new QLineEdit(groupBox_2);
        local->setObjectName(QStringLiteral("local"));
        local->setEnabled(true);
        local->setGeometry(QRect(160, 260, 221, 51));
        local->setFont(font3);
        local->setAutoFillBackground(false);
        local->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        montant = new QLineEdit(groupBox_2);
        montant->setObjectName(QStringLiteral("montant"));
        montant->setEnabled(true);
        montant->setGeometry(QRect(160, 200, 221, 51));
        montant->setFont(font3);
        montant->setAutoFillBackground(false);
        montant->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        distance = new QLineEdit(groupBox_2);
        distance->setObjectName(QStringLiteral("distance"));
        distance->setEnabled(true);
        distance->setGeometry(QRect(160, 140, 221, 51));
        distance->setFont(font3);
        distance->setAutoFillBackground(false);
        distance->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        bouton_annuler = new QPushButton(groupBox_2);
        bouton_annuler->setObjectName(QStringLiteral("bouton_annuler"));
        bouton_annuler->setGeometry(QRect(230, 380, 161, 81));
        bouton_annuler->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
" background-color: transparent;\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../../Downloads/close-5758.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouton_annuler->setIcon(icon5);
        bouton_ajouter = new QPushButton(groupBox_2);
        bouton_ajouter->setObjectName(QStringLiteral("bouton_ajouter"));
        bouton_ajouter->setGeometry(QRect(30, 380, 161, 81));
        bouton_ajouter->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
" background-color: transparent;\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../../../Downloads/green-add-button-12023 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        bouton_ajouter->setIcon(icon6);
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 260, 121, 51));
        label_12->setFont(font1);
        label_12->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        table_Localisation = new QTableView(groupBox_2);
        table_Localisation->setObjectName(QStringLiteral("table_Localisation"));
        table_Localisation->setGeometry(QRect(440, 20, 881, 451));
        table_Localisation->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.378238 rgba(0, 241, 255, 93), stop:1 rgba(0, 255, 231, 255));"));
        table_Localisation->verticalHeader()->setVisible(false);
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 480, 421, 261));
        supprimer = new QLineEdit(groupBox_4);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setEnabled(true);
        supprimer->setGeometry(QRect(70, 60, 271, 51));
        supprimer->setFont(font3);
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
        bouton_supprimer->setGeometry(QRect(110, 140, 181, 81));
        bouton_supprimer->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
" background-color: transparent;\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../../../Downloads/red-delete-10437.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouton_supprimer->setIcon(icon7);
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(440, 480, 571, 261));
        groupBox_3->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.388601 rgba(0, 214, 226, 122), stop:1 rgba(0, 218, 197, 211));"));
        bouton_recherche = new QPushButton(groupBox_3);
        bouton_recherche->setObjectName(QStringLiteral("bouton_recherche"));
        bouton_recherche->setGeometry(QRect(20, 150, 331, 81));
        bouton_recherche->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.378238 rgba(0, 241, 255, 93), stop:1 rgba(0, 255, 231, 255));\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        QIcon icon8;
        icon8.addFile(QStringLiteral("../../../Downloads/search-2910.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouton_recherche->setIcon(icon8);
        le_recherche = new QLineEdit(groupBox_3);
        le_recherche->setObjectName(QStringLiteral("le_recherche"));
        le_recherche->setEnabled(true);
        le_recherche->setGeometry(QRect(20, 50, 511, 71));
        le_recherche->setFont(font3);
        le_recherche->setAutoFillBackground(false);
        le_recherche->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        le_recherche->setAlignment(Qt::AlignCenter);
        bouton_tri = new QPushButton(groupBox_3);
        bouton_tri->setObjectName(QStringLiteral("bouton_tri"));
        bouton_tri->setGeometry(QRect(370, 150, 171, 81));
        bouton_tri->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.378238 rgba(0, 241, 255, 93), stop:1 rgba(0, 255, 231, 255));\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        QIcon icon9;
        icon9.addFile(QStringLiteral("../../../Downloads/sort-ascending-6615.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouton_tri->setIcon(icon9);
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(1020, 480, 541, 261));
        label_32 = new QLabel(groupBox_2);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(1320, 310, 251, 141));
        label_32->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-style: transpaent;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;"));
        label_32->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/wetransfer_logo-projet-w-png_2023-11-02_1739/logo projetcolored.png")));
        label_32->setScaledContents(true);
        label_32->setWordWrap(false);
        groupBox_6 = new QGroupBox(groupBox_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(1330, 20, 231, 231));
        bouton_pdf = new QPushButton(groupBox_6);
        bouton_pdf->setObjectName(QStringLiteral("bouton_pdf"));
        bouton_pdf->setGeometry(QRect(40, 60, 151, 91));
        bouton_pdf->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.378238 rgba(0, 241, 255, 93), stop:1 rgba(0, 255, 231, 255));\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        bouton_pdf->setIcon(icon9);
        pushButton_22 = new QPushButton(page_1);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(1460, 10, 111, 61));
        pushButton_22->setCheckable(true);
        pushButton_23 = new QPushButton(page_1);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));
        pushButton_23->setGeometry(QRect(20, 10, 111, 61));
        pushButton_23->setCheckable(true);
        label_31 = new QLabel(page_1);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(590, 20, 371, 51));
        label_31->setAlignment(Qt::AlignCenter);
        stackedWidget_2->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_14 = new QLabel(page_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(590, 20, 371, 51));
        label_14->setAlignment(Qt::AlignCenter);
        pushButton_24 = new QPushButton(page_2);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        pushButton_24->setGeometry(QRect(1460, 10, 111, 61));
        pushButton_24->setCheckable(true);
        pushButton_25 = new QPushButton(page_2);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        pushButton_25->setGeometry(QRect(20, 10, 111, 61));
        pushButton_25->setCheckable(true);
        groupBox_5 = new QGroupBox(page_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 90, 821, 751));
        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 20, 151, 51));
        label_13->setFont(font1);
        label_13->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(40, 230, 121, 51));
        label_16->setFont(font1);
        label_16->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(40, 80, 121, 51));
        label_17->setFont(font1);
        label_17->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(40, 380, 121, 51));
        label_18->setFont(font1);
        label_18->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(40, 160, 121, 51));
        label_19->setFont(font1);
        label_19->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        num_demande_2 = new QLineEdit(groupBox_5);
        num_demande_2->setObjectName(QStringLiteral("num_demande_2"));
        num_demande_2->setEnabled(true);
        num_demande_2->setGeometry(QRect(220, 20, 221, 51));
        num_demande_2->setFont(font3);
        num_demande_2->setAutoFillBackground(false);
        num_demande_2->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        id_client_2 = new QLineEdit(groupBox_5);
        id_client_2->setObjectName(QStringLiteral("id_client_2"));
        id_client_2->setEnabled(true);
        id_client_2->setGeometry(QRect(220, 380, 221, 51));
        id_client_2->setFont(font3);
        id_client_2->setAutoFillBackground(false);
        id_client_2->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        temps_2 = new QLineEdit(groupBox_5);
        temps_2->setObjectName(QStringLiteral("temps_2"));
        temps_2->setEnabled(true);
        temps_2->setGeometry(QRect(220, 90, 221, 51));
        temps_2->setFont(font3);
        temps_2->setAutoFillBackground(false);
        temps_2->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        local_2 = new QLineEdit(groupBox_5);
        local_2->setObjectName(QStringLiteral("local_2"));
        local_2->setEnabled(true);
        local_2->setGeometry(QRect(220, 300, 221, 51));
        local_2->setFont(font3);
        local_2->setAutoFillBackground(false);
        local_2->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        montant_2 = new QLineEdit(groupBox_5);
        montant_2->setObjectName(QStringLiteral("montant_2"));
        montant_2->setEnabled(true);
        montant_2->setGeometry(QRect(220, 230, 221, 51));
        montant_2->setFont(font3);
        montant_2->setAutoFillBackground(false);
        montant_2->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        distance_2 = new QLineEdit(groupBox_5);
        distance_2->setObjectName(QStringLiteral("distance_2"));
        distance_2->setEnabled(true);
        distance_2->setGeometry(QRect(220, 160, 221, 51));
        distance_2->setFont(font3);
        distance_2->setAutoFillBackground(false);
        distance_2->setStyleSheet(QLatin1String("background-color: white;\n"
" border-style: solid;\n"
" border-width:3px;\n"
" border-radius:10px;\n"
" border-color: lightgreen;\n"
" "));
        bouton_modifier = new QPushButton(groupBox_5);
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
        QIcon icon10;
        icon10.addFile(QStringLiteral("../../../Downloads/transfer-3819.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouton_modifier->setIcon(icon10);
        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(50, 300, 121, 51));
        label_20->setFont(font1);
        label_20->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        table_Localisations = new QTableView(page_2);
        table_Localisations->setObjectName(QStringLiteral("table_Localisations"));
        table_Localisations->setGeometry(QRect(840, 90, 741, 751));
        table_Localisations->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.378238 rgba(0, 241, 255, 93), stop:1 rgba(0, 255, 231, 255));"));
        table_Localisations->verticalHeader()->setVisible(false);
        stackedWidget_2->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        pushButton_27 = new QPushButton(page_3);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        pushButton_27->setGeometry(QRect(30, 20, 111, 61));
        pushButton_27->setCheckable(true);
        label_27 = new QLabel(page_3);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(590, 20, 371, 51));
        label_27->setAlignment(Qt::AlignCenter);
        label_30 = new QLabel(page_3);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(110, 580, 291, 251));
        label_30->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/robotic-arm-8193 (1).png")));
        label_30->setScaledContents(true);
        pushButton_4 = new QPushButton(page_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(160, 520, 181, 51));
        label_35 = new QLabel(page_3);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(90, 140, 331, 91));
        label_35->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(page_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 420, 181, 41));
        label_36 = new QLabel(page_3);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(190, 250, 121, 121));
        label_36->setStyleSheet(QLatin1String("border-color: transparent;\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 180, 218, 0), stop:0.896373 rgba(0, 248, 210, 0));"));
        label_36->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/arrow-right-2817.png")));
        label_36->setScaledContents(true);
        groupBox_7 = new QGroupBox(page_3);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(540, 110, 1031, 721));
        calendarWidget = new QCalendarWidget(groupBox_7);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(20, 40, 1001, 661));
        calendarWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);selection-color: rgb(98, 98, 98);"));
        stackedWidget_2->addWidget(page_3);
        pushButton_2 = new QPushButton(page_001);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 20, 61, 61));
        QIcon icon11;
        icon11.addFile(QStringLiteral("../../../Downloads/website-menu-green-circle-20588.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon11);
        pushButton_2->setIconSize(QSize(50, 50));
        pushButton_2->setCheckable(true);
        pushButton_3 = new QPushButton(page_001);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1750, 20, 121, 61));
        stackedWidget->addWidget(page_001);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 37));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_2, SIGNAL(toggled(bool)), widget_2, SLOT(setHidden(bool)));
        QObject::connect(pushButton_2, SIGNAL(toggled(bool)), widget, SLOT(setVisible(bool)));
        QObject::connect(pushButton_6, SIGNAL(clicked()), pushButton_14, SLOT(click()));

        stackedWidget->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "EMLOYEE LOGIN", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        label_2->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "User Name", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "LOGIN", Q_NULLPTR));
        username->setText(QString());
        password->setText(QString());
        label_24->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QApplication::translate("MainWindow", "exit", Q_NULLPTR));
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_15->setText(QString());
        label_6->setText(QString());
        pushButton_10->setText(QApplication::translate("MainWindow", "employe", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", " transport", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "maintenance", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MainWindow", "clients", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("MainWindow", "localisation", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("MainWindow", "return", Q_NULLPTR));
        label->setText(QString());
        pushButton_16->setText(QApplication::translate("MainWindow", "next", Q_NULLPTR));
        label_26->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "N demande", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Montant", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Temps", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "ID client", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Distance", Q_NULLPTR));
        num_demande->setText(QString());
        id_client->setText(QString());
        temps->setText(QString());
        local->setText(QString());
        montant->setText(QString());
        distance->setText(QString());
        bouton_annuler->setText(QApplication::translate("MainWindow", "ANNULER", Q_NULLPTR));
        bouton_ajouter->setText(QApplication::translate("MainWindow", "AJOUTER", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "local", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Suppression", Q_NULLPTR));
        supprimer->setText(QString());
        supprimer->setPlaceholderText(QApplication::translate("MainWindow", "NUM DEMANDE", Q_NULLPTR));
        bouton_supprimer->setText(QApplication::translate("MainWindow", "SUPPRIMER", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        bouton_recherche->setText(QApplication::translate("MainWindow", "CHERCHER", Q_NULLPTR));
        le_recherche->setText(QString());
        le_recherche->setPlaceholderText(QApplication::translate("MainWindow", "NUM DEMANDE", Q_NULLPTR));
        bouton_tri->setText(QApplication::translate("MainWindow", "TRI", Q_NULLPTR));
        label_22->setText(QString());
        label_32->setText(QString());
        groupBox_6->setTitle(QApplication::translate("MainWindow", "GENERATION PDF", Q_NULLPTR));
        bouton_pdf->setText(QApplication::translate("MainWindow", "GENERER", Q_NULLPTR));
        pushButton_22->setText(QApplication::translate("MainWindow", "next", Q_NULLPTR));
        pushButton_23->setText(QApplication::translate("MainWindow", "privious", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "Demandes de localisation", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Demandes de localisation", Q_NULLPTR));
        pushButton_24->setText(QApplication::translate("MainWindow", "next", Q_NULLPTR));
        pushButton_25->setText(QApplication::translate("MainWindow", "privious", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Modification", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "N demande", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Montant", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Temps", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "ID client", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Distance", Q_NULLPTR));
        num_demande_2->setText(QString());
        id_client_2->setText(QString());
        temps_2->setText(QString());
        local_2->setText(QString());
        montant_2->setText(QString());
        distance_2->setText(QString());
        bouton_modifier->setText(QApplication::translate("MainWindow", "MODIFIER", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "local", Q_NULLPTR));
        pushButton_27->setText(QApplication::translate("MainWindow", "previous", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "Demandes de localisation", Q_NULLPTR));
        label_30->setText(QString());
        pushButton_4->setText(QApplication::translate("MainWindow", "VALIDER", Q_NULLPTR));
        label_35->setText(QString());
        label_36->setText(QString());
        groupBox_7->setTitle(QApplication::translate("MainWindow", "calendrier", Q_NULLPTR));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
