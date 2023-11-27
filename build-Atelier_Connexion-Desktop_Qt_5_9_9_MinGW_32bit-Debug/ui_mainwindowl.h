/********************************************************************************
** Form generated from reading UI file 'mainwindowl.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWL_H
#define UI_MAINWINDOWL_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowL
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *line_username;
    QLabel *label_2;
    QLineEdit *line_password;
    QPushButton *pb_connecter;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowL)
    {
        if (MainWindowL->objectName().isEmpty())
            MainWindowL->setObjectName(QStringLiteral("MainWindowL"));
        MainWindowL->resize(800, 600);
        centralwidget = new QWidget(MainWindowL);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(240, 110, 251, 351));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        line_username = new QLineEdit(groupBox);
        line_username->setObjectName(QStringLiteral("line_username"));

        verticalLayout->addWidget(line_username);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        line_password = new QLineEdit(groupBox);
        line_password->setObjectName(QStringLiteral("line_password"));

        verticalLayout->addWidget(line_password);

        pb_connecter = new QPushButton(groupBox);
        pb_connecter->setObjectName(QStringLiteral("pb_connecter"));

        verticalLayout->addWidget(pb_connecter);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        MainWindowL->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowL);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindowL->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowL);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowL->setStatusBar(statusbar);

        retranslateUi(MainWindowL);

        QMetaObject::connectSlotsByName(MainWindowL);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowL)
    {
        MainWindowL->setWindowTitle(QApplication::translate("MainWindowL", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindowL", "se connecter ", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindowL", "ID de la vehicule :", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindowL", "Mot de passe :", Q_NULLPTR));
        pb_connecter->setText(QApplication::translate("MainWindowL", "Se connecter ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("MainWindowL", "<html><head/><body><p>,,</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("MainWindowL", "Mot de passe oublie ?", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindowL", "____________________________________________________________________________________________________", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindowL", "Creer un autre compte", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowL: public Ui_MainWindowL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWL_H
