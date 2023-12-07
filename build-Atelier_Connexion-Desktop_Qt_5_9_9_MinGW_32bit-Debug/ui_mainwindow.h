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
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
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
    QWidget *page_2;
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
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_17;
    QStackedWidget *stackedWidget_2;
    QWidget *page_5;
    QLabel *label;
    QPushButton *pushButton_16;
    QLabel *label_26;
    QWidget *page_13;
    QLabel *label_23;
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QWidget *page_14;
    QLineEdit *lineEdit;
    QLabel *label_35;
    QLabel *label_36;
    QPushButton *pushButton_4;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QWidget *page_6;
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
    QLabel *label_15;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QWidget *page_7;
    QTableView *table_Localisation;
    QLabel *label_14;
    QGroupBox *groupBox_3;
    QPushButton *bouton_recherche;
    QLineEdit *le_recherche;
    QPushButton *bouton_tri;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QWidget *page_8;
    QGroupBox *groupBox_4;
    QLineEdit *supprimer;
    QPushButton *bouton_supprimer;
    QTableView *table_Localisations;
    QPushButton *pushButton_26;
    QPushButton *pushButton_27;
    QWidget *page_9;
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
    QLabel *label_25;
    QLineEdit *etat_2;
    QPushButton *pushButton_28;
    QPushButton *pushButton_29;
    QWidget *page_10;
    QGroupBox *groupBox_6;
    QPushButton *bouton_pdf;
    QLabel *label_21;
    QToolBox *toolBox;
    QWidget *page_11;
    QTableView *tab_2;
    QWidget *page_12;
    QLabel *label_22;
    QPushButton *pushButton_30;
    QPushButton *pushButton_31;
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
        stackedWidget->setGeometry(QRect(-10, 0, 1921, 971));
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
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        widget = new QWidget(page_2);
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
        pushButton_7->setGeometry(QRect(10, 870, 61, 61));
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
        widget_2 = new QWidget(page_2);
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
        pushButton_14->setCheckable(true);
        pushButton_14->setAutoExclusive(true);
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 10, 41, 21));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 10, 31, 21));
        pushButton_17 = new QPushButton(widget_2);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(10, 870, 171, 61));
        stackedWidget_2 = new QStackedWidget(page_2);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(310, 99, 1601, 861));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        label = new QLabel(page_5);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 180, 971, 431));
        pushButton_16 = new QPushButton(page_5);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(1500, 10, 111, 61));
        pushButton_16->setCheckable(true);
        label_26 = new QLabel(page_5);
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
        stackedWidget_2->addWidget(page_5);
        page_13 = new QWidget();
        page_13->setObjectName(QStringLiteral("page_13"));
        label_23 = new QLabel(page_13);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(320, 50, 421, 51));
        calendarWidget = new QCalendarWidget(page_13);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(250, 130, 521, 321));
        calendarWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);selection-color: rgb(98, 98, 98);"));
        pushButton_18 = new QPushButton(page_13);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(1500, 10, 111, 61));
        pushButton_18->setCheckable(true);
        pushButton_19 = new QPushButton(page_13);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(10, 20, 111, 61));
        pushButton_19->setCheckable(true);
        stackedWidget_2->addWidget(page_13);
        page_14 = new QWidget();
        page_14->setObjectName(QStringLiteral("page_14"));
        lineEdit = new QLineEdit(page_14);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(410, 300, 181, 41));
        label_35 = new QLabel(page_14);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(330, 70, 331, 91));
        label_35->setAlignment(Qt::AlignCenter);
        label_36 = new QLabel(page_14);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(440, 170, 121, 121));
        label_36->setStyleSheet(QLatin1String("border-color: transparent;\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 180, 218, 0), stop:0.896373 rgba(0, 248, 210, 0));"));
        label_36->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/arrow-right-2817.png")));
        label_36->setScaledContents(true);
        pushButton_4 = new QPushButton(page_14);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(410, 380, 181, 51));
        pushButton_20 = new QPushButton(page_14);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(1500, 10, 111, 61));
        pushButton_20->setCheckable(true);
        pushButton_21 = new QPushButton(page_14);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setGeometry(QRect(10, 20, 111, 61));
        pushButton_21->setCheckable(true);
        stackedWidget_2->addWidget(page_14);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        groupBox_2 = new QGroupBox(page_6);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 80, 1621, 761));
        groupBox_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 180, 218, 92), stop:0.895604 rgba(0, 248, 210, 140));"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 20, 161, 51));
        label_7->setFont(font1);
        label_7->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 220, 121, 51));
        label_8->setFont(font1);
        label_8->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 70, 121, 51));
        label_9->setFont(font1);
        label_9->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 370, 121, 51));
        label_10->setFont(font1);
        label_10->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 150, 121, 51));
        label_11->setFont(font1);
        label_11->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        num_demande = new QLineEdit(groupBox_2);
        num_demande->setObjectName(QStringLiteral("num_demande"));
        num_demande->setEnabled(true);
        num_demande->setGeometry(QRect(210, 20, 221, 51));
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
        id_client->setGeometry(QRect(220, 370, 221, 51));
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
        temps->setGeometry(QRect(210, 80, 221, 51));
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
        local->setGeometry(QRect(220, 290, 221, 51));
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
        montant->setGeometry(QRect(220, 220, 221, 51));
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
        distance->setGeometry(QRect(210, 150, 221, 51));
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
        bouton_annuler->setGeometry(QRect(740, 60, 161, 81));
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
        bouton_ajouter->setGeometry(QRect(510, 60, 161, 81));
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
        label_12->setGeometry(QRect(40, 290, 121, 51));
        label_12->setFont(font1);
        label_12->setStyleSheet(QLatin1String("font: 18pt \"Tw Cen MT\";\n"
"border-color: rgb(0,0, 0, 0);\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0));"));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(450, 170, 471, 251));
        label_15->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-style: transpaent;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;"));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/wetransfer_logo-projet-w-png_2023-11-02_1739/logo projetcolored.png")));
        label_15->setScaledContents(true);
        label_15->setWordWrap(false);
        pushButton_22 = new QPushButton(page_6);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(1500, 10, 111, 61));
        pushButton_22->setCheckable(true);
        pushButton_23 = new QPushButton(page_6);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));
        pushButton_23->setGeometry(QRect(20, 10, 111, 61));
        pushButton_23->setCheckable(true);
        stackedWidget_2->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        table_Localisation = new QTableView(page_7);
        table_Localisation->setObjectName(QStringLiteral("table_Localisation"));
        table_Localisation->setGeometry(QRect(20, 80, 1061, 761));
        table_Localisation->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.378238 rgba(0, 241, 255, 93), stop:1 rgba(0, 255, 231, 255));"));
        table_Localisation->verticalHeader()->setVisible(false);
        label_14 = new QLabel(page_7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(610, 10, 371, 51));
        label_14->setAlignment(Qt::AlignCenter);
        groupBox_3 = new QGroupBox(page_7);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(1090, 80, 551, 291));
        groupBox_3->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.388601 rgba(0, 214, 226, 122), stop:1 rgba(0, 218, 197, 211));"));
        bouton_recherche = new QPushButton(groupBox_3);
        bouton_recherche->setObjectName(QStringLiteral("bouton_recherche"));
        bouton_recherche->setGeometry(QRect(20, 150, 511, 81));
        bouton_recherche->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.378238 rgba(0, 241, 255, 93), stop:1 rgba(0, 255, 231, 255));\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../../../Downloads/search-2910.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouton_recherche->setIcon(icon7);
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
        bouton_tri = new QPushButton(page_7);
        bouton_tri->setObjectName(QStringLiteral("bouton_tri"));
        bouton_tri->setGeometry(QRect(1310, 500, 171, 81));
        bouton_tri->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
"background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.378238 rgba(0, 241, 255, 93), stop:1 rgba(0, 255, 231, 255));\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        QIcon icon8;
        icon8.addFile(QStringLiteral("../../../Downloads/sort-ascending-6615.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouton_tri->setIcon(icon8);
        pushButton_24 = new QPushButton(page_7);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        pushButton_24->setGeometry(QRect(1500, 10, 111, 61));
        pushButton_24->setCheckable(true);
        pushButton_25 = new QPushButton(page_7);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        pushButton_25->setGeometry(QRect(20, 10, 111, 61));
        pushButton_25->setCheckable(true);
        stackedWidget_2->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        groupBox_4 = new QGroupBox(page_8);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(60, 90, 381, 341));
        supprimer = new QLineEdit(groupBox_4);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setEnabled(true);
        supprimer->setGeometry(QRect(50, 140, 271, 51));
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
        bouton_supprimer->setGeometry(QRect(90, 220, 181, 81));
        bouton_supprimer->setStyleSheet(QLatin1String("font: 16pt \"Tw Cen MT Condensed Extra Bold\";\n"
" background-color: transparent;\n"
" border-style: solid;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;\n"
"selection-background-color: green;\n"
"selection-color: rgb(98, 98, 98);"));
        QIcon icon9;
        icon9.addFile(QStringLiteral("../../../Downloads/red-delete-10437.png"), QSize(), QIcon::Normal, QIcon::Off);
        bouton_supprimer->setIcon(icon9);
        table_Localisations = new QTableView(page_8);
        table_Localisations->setObjectName(QStringLiteral("table_Localisations"));
        table_Localisations->setGeometry(QRect(500, 90, 421, 331));
        table_Localisations->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.241758, y1:0.283773, x2:1, y2:1, stop:0.378238 rgba(0, 241, 255, 93), stop:1 rgba(0, 255, 231, 255));"));
        table_Localisations->verticalHeader()->setVisible(false);
        pushButton_26 = new QPushButton(page_8);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));
        pushButton_26->setGeometry(QRect(1500, 10, 111, 61));
        pushButton_26->setCheckable(true);
        pushButton_27 = new QPushButton(page_8);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        pushButton_27->setGeometry(QRect(30, 20, 111, 61));
        pushButton_27->setCheckable(true);
        stackedWidget_2->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        groupBox_5 = new QGroupBox(page_9);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(40, 90, 891, 361));
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
        local_2->setGeometry(QRect(210, 300, 221, 51));
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
        distance_2->setGeometry(QRect(220, 170, 221, 51));
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
        label_25 = new QLabel(groupBox_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(40, 470, 131, 31));
        etat_2 = new QLineEdit(groupBox_5);
        etat_2->setObjectName(QStringLiteral("etat_2"));
        etat_2->setGeometry(QRect(220, 460, 211, 51));
        pushButton_28 = new QPushButton(page_9);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        pushButton_28->setGeometry(QRect(1500, 10, 111, 61));
        pushButton_28->setCheckable(true);
        pushButton_29 = new QPushButton(page_9);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));
        pushButton_29->setGeometry(QRect(30, 10, 111, 61));
        pushButton_29->setCheckable(true);
        stackedWidget_2->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        groupBox_6 = new QGroupBox(page_10);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(40, 100, 391, 361));
        bouton_pdf = new QPushButton(groupBox_6);
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
        bouton_pdf->setIcon(icon8);
        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(40, 160, 321, 191));
        label_21->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-style: transpaent;\n"
" border-width:4px;\n"
" border-radius:20px;\n"
" border-color: cyan;"));
        label_21->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/wetransfer_logo-projet-w-png_2023-11-02_1739/logo projetcolored.png")));
        label_21->setScaledContents(true);
        label_21->setWordWrap(false);
        toolBox = new QToolBox(page_10);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(540, 90, 321, 251));
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        page_11->setGeometry(QRect(0, 0, 309, 149));
        tab_2 = new QTableView(page_11);
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
        toolBox->addItem(page_11, QStringLiteral("FICHIER PDF"));
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        page_12->setGeometry(QRect(0, 0, 309, 149));
        label_22 = new QLabel(page_12);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(10, 10, 761, 431));
        toolBox->addItem(page_12, QStringLiteral("STATISTICS"));
        pushButton_30 = new QPushButton(page_10);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        pushButton_30->setGeometry(QRect(1500, 10, 111, 61));
        pushButton_30->setCheckable(true);
        pushButton_31 = new QPushButton(page_10);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));
        pushButton_31->setGeometry(QRect(30, 20, 111, 61));
        pushButton_31->setCheckable(true);
        stackedWidget_2->addWidget(page_10);
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 20, 51, 61));
        pushButton_2->setCheckable(true);
        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1750, 20, 121, 61));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 42));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_2, SIGNAL(toggled(bool)), widget, SLOT(setVisible(bool)));
        QObject::connect(pushButton_2, SIGNAL(toggled(bool)), widget_2, SLOT(setHidden(bool)));

        stackedWidget->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(4);
        toolBox->setCurrentIndex(0);


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
        label_4->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("MainWindow", "return", Q_NULLPTR));
        label->setText(QString());
        pushButton_16->setText(QApplication::translate("MainWindow", "next", Q_NULLPTR));
        label_26->setText(QString());
        label_23->setText(QApplication::translate("MainWindow", "Calendrier des demande avec promotion", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("MainWindow", "vbcvb", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("MainWindow", "vbcvb", Q_NULLPTR));
        label_35->setText(QString());
        label_36->setText(QString());
        pushButton_4->setText(QApplication::translate("MainWindow", "VALIDER", Q_NULLPTR));
        pushButton_20->setText(QApplication::translate("MainWindow", "vbcvb", Q_NULLPTR));
        pushButton_21->setText(QApplication::translate("MainWindow", "vbcvb", Q_NULLPTR));
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
        label_15->setText(QString());
        pushButton_22->setText(QApplication::translate("MainWindow", "next", Q_NULLPTR));
        pushButton_23->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "Demandes de localisation", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        bouton_recherche->setText(QApplication::translate("MainWindow", "CHERCHER", Q_NULLPTR));
        le_recherche->setText(QString());
        le_recherche->setPlaceholderText(QApplication::translate("MainWindow", "NUM DEMANDE", Q_NULLPTR));
        bouton_tri->setText(QApplication::translate("MainWindow", "TRI", Q_NULLPTR));
        pushButton_24->setText(QApplication::translate("MainWindow", "next", Q_NULLPTR));
        pushButton_25->setText(QApplication::translate("MainWindow", "vbcvb", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Suppression", Q_NULLPTR));
        supprimer->setText(QString());
        supprimer->setPlaceholderText(QApplication::translate("MainWindow", "NUM DEMANDE", Q_NULLPTR));
        bouton_supprimer->setText(QApplication::translate("MainWindow", "SUPPRIMER", Q_NULLPTR));
        pushButton_26->setText(QApplication::translate("MainWindow", "vbcvb", Q_NULLPTR));
        pushButton_27->setText(QApplication::translate("MainWindow", "vbcvb", Q_NULLPTR));
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
        label_25->setText(QApplication::translate("MainWindow", "Etat", Q_NULLPTR));
        pushButton_28->setText(QApplication::translate("MainWindow", "vbcvb", Q_NULLPTR));
        pushButton_29->setText(QApplication::translate("MainWindow", "vbcvb", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "GENERATION", Q_NULLPTR));
        bouton_pdf->setText(QApplication::translate("MainWindow", "GENERER", Q_NULLPTR));
        label_21->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_11), QApplication::translate("MainWindow", "FICHIER PDF", Q_NULLPTR));
        label_22->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_12), QApplication::translate("MainWindow", "STATISTICS", Q_NULLPTR));
        pushButton_30->setText(QApplication::translate("MainWindow", "vbcvb", Q_NULLPTR));
        pushButton_31->setText(QApplication::translate("MainWindow", "vbcvb", Q_NULLPTR));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
