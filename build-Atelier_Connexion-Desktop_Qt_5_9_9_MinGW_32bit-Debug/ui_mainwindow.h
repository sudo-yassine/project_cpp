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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lecin;
    QLineEdit *lenumtel;
    QLineEdit *leprenom;
    QLineEdit *lepermis;
    QLineEdit *lenom;
    QLineEdit *leemail;
    QPushButton *pb_ajouter;
    QWidget *tab;
    QTableView *tab_client;
    QTabWidget *tabWidget_2;
    QWidget *tab_6;
    QLineEdit *lineEdit;
    QWidget *tab_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *tab_3;
    QLineEdit *le_id_supp;
    QLabel *label_7;
    QPushButton *pb_supprimer;
    QWidget *tab_4;
    QGroupBox *groupBox_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *Nom;
    QLabel *label_13;
    QLineEdit *lecin2;
    QLineEdit *lenumtel2;
    QLineEdit *lprenom2;
    QLineEdit *lepermis2;
    QLineEdit *lenom2;
    QLineEdit *leemail2;
    QPushButton *pb_modifier;
    QWidget *tab_5;
    QTabWidget *tabWidget_3;
    QWidget *tab_8;
    QLabel *label_12;
    QTextEdit *textEdit;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QPushButton *envoyer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(931, 590);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 911, 521));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 711, 341));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 60, 56, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 130, 56, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 216, 56, 20));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(370, 50, 56, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(370, 140, 56, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(370, 220, 56, 16));
        lecin = new QLineEdit(groupBox);
        lecin->setObjectName(QStringLiteral("lecin"));
        lecin->setGeometry(QRect(150, 60, 113, 22));
        lenumtel = new QLineEdit(groupBox);
        lenumtel->setObjectName(QStringLiteral("lenumtel"));
        lenumtel->setGeometry(QRect(160, 130, 113, 22));
        leprenom = new QLineEdit(groupBox);
        leprenom->setObjectName(QStringLiteral("leprenom"));
        leprenom->setGeometry(QRect(170, 220, 113, 22));
        lepermis = new QLineEdit(groupBox);
        lepermis->setObjectName(QStringLiteral("lepermis"));
        lepermis->setGeometry(QRect(480, 60, 113, 22));
        lenom = new QLineEdit(groupBox);
        lenom->setObjectName(QStringLiteral("lenom"));
        lenom->setGeometry(QRect(480, 140, 113, 22));
        leemail = new QLineEdit(groupBox);
        leemail->setObjectName(QStringLiteral("leemail"));
        leemail->setGeometry(QRect(490, 210, 113, 22));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(550, 290, 93, 28));
        leemail->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        lecin->raise();
        lenumtel->raise();
        leprenom->raise();
        lepermis->raise();
        lenom->raise();
        pb_ajouter->raise();
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab_client = new QTableView(tab);
        tab_client->setObjectName(QStringLiteral("tab_client"));
        tab_client->setGeometry(QRect(25, 21, 851, 321));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(30, 350, 841, 111));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        lineEdit = new QLineEdit(tab_6);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(290, 20, 241, 31));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        pushButton = new QPushButton(tab_7);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 20, 93, 28));
        pushButton_2 = new QPushButton(tab_7);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 20, 93, 28));
        pushButton_3 = new QPushButton(tab_7);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 20, 93, 28));
        pushButton_4 = new QPushButton(tab_7);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(400, 20, 93, 28));
        pushButton_5 = new QPushButton(tab_7);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(520, 20, 93, 28));
        tabWidget_2->addTab(tab_7, QString());
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        le_id_supp = new QLineEdit(tab_3);
        le_id_supp->setObjectName(QStringLiteral("le_id_supp"));
        le_id_supp->setGeometry(QRect(290, 190, 113, 22));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(190, 180, 91, 31));
        pb_supprimer = new QPushButton(tab_3);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(550, 187, 93, 31));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 20, 721, 331));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 60, 56, 16));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 160, 56, 16));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 240, 56, 16));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(290, 70, 56, 16));
        Nom = new QLabel(groupBox_2);
        Nom->setObjectName(QStringLiteral("Nom"));
        Nom->setGeometry(QRect(290, 146, 56, 20));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(300, 230, 56, 16));
        lecin2 = new QLineEdit(groupBox_2);
        lecin2->setObjectName(QStringLiteral("lecin2"));
        lecin2->setGeometry(QRect(120, 60, 113, 22));
        lenumtel2 = new QLineEdit(groupBox_2);
        lenumtel2->setObjectName(QStringLiteral("lenumtel2"));
        lenumtel2->setGeometry(QRect(120, 150, 113, 22));
        lprenom2 = new QLineEdit(groupBox_2);
        lprenom2->setObjectName(QStringLiteral("lprenom2"));
        lprenom2->setGeometry(QRect(120, 230, 113, 22));
        lepermis2 = new QLineEdit(groupBox_2);
        lepermis2->setObjectName(QStringLiteral("lepermis2"));
        lepermis2->setGeometry(QRect(380, 70, 113, 22));
        lenom2 = new QLineEdit(groupBox_2);
        lenom2->setObjectName(QStringLiteral("lenom2"));
        lenom2->setGeometry(QRect(380, 150, 113, 22));
        leemail2 = new QLineEdit(groupBox_2);
        leemail2->setObjectName(QStringLiteral("leemail2"));
        leemail2->setGeometry(QRect(380, 230, 113, 22));
        pb_modifier = new QPushButton(groupBox_2);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(570, 140, 93, 28));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget_3 = new QTabWidget(tab_5);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(170, 40, 531, 421));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        tabWidget_3->setFont(font);
        tabWidget_3->setStyleSheet(QLatin1String("background-color :  #808080	; \n"
"border-radius : 20px;\n"
"\n"
"\n"
"\n"
"\n"
"    \n"
"    color: #FFFFFF\n"
"; \n"
"    font-size: 18px;"));
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        label_12 = new QLabel(tab_8);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 50, 47, 14));
        textEdit = new QTextEdit(tab_8);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(90, 80, 371, 221));
        textEdit->setStyleSheet(QLatin1String("background-color :  #000000; \n"
""));
        label_14 = new QLabel(tab_8);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 80, 81, 16));
        label_15 = new QLabel(tab_8);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 20, 47, 14));
        lineEdit_9 = new QLineEdit(tab_8);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(90, 50, 211, 20));
        lineEdit_9->setStyleSheet(QLatin1String("background-color :  #000000; \n"
""));
        lineEdit_10 = new QLineEdit(tab_8);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(90, 20, 371, 20));
        lineEdit_10->setStyleSheet(QLatin1String("background-color :  #000000; \n"
""));
        envoyer = new QPushButton(tab_8);
        envoyer->setObjectName(QStringLiteral("envoyer"));
        envoyer->setGeometry(QRect(380, 320, 75, 23));
        tabWidget_3->addTab(tab_8, QString());
        tabWidget->addTab(tab_5, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 931, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);
        tabWidget_2->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "CIN :", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Num tel", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Permis", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Email", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Ajouter un client.", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Stat", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Trie CIN", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Trie Nom", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Trie Prenom", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "Options", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Afficher les clients", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "CIN:", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Supprimer un client", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "CIN:", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Num tel", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Permis", Q_NULLPTR));
        Nom->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Email", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Modifier les infos", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Sujet", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Message", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Mail", Q_NULLPTR));
        envoyer->setText(QApplication::translate("MainWindow", "envoyer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("MainWindow", "Contact", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Envoyer email", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
