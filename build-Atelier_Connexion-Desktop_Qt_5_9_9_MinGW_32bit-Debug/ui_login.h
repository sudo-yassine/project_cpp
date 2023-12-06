/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLineEdit *username;
    QLineEdit *password;
    QLabel *label;
    QLabel *label_5;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(1280, 720);
        groupBox = new QGroupBox(login);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(450, 10, 721, 651));
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
        label_2->setGeometry(QRect(30, 200, 171, 51));
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
        label_3->setGeometry(QRect(30, 120, 191, 51));
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
        pushButton->setGeometry(QRect(390, 260, 171, 81));
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
        username->setGeometry(QRect(280, 120, 381, 51));
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
        password->setGeometry(QRect(280, 190, 381, 51));
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
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 280, 376, 19));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QLatin1String("font: italic 14pt \"Sitka\";\n"
"color: rgb(69, 207, 0);"));
        label_5 = new QLabel(login);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 70, 391, 191));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/370293604_1773005379805812_53322258381366709_n-removebg-preview (1).png")));
        label_5->setScaledContents(true);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("login", "EMLOYEE LOGIN", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        label_2->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("login", "Password", Q_NULLPTR));
        label_3->setText(QApplication::translate("login", "User Name", Q_NULLPTR));
        pushButton->setText(QApplication::translate("login", "LOGIN", Q_NULLPTR));
        username->setText(QString());
        password->setText(QString());
        label->setText(QApplication::translate("login", "Transpologie Green Roads, Clean Future: ", Q_NULLPTR));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
