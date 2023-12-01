#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"client.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //int return_index();
private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_envoyer_clicked();

    void sendMail();

    void mailSent(QString) ;

private:
    Ui::MainWindow *ui;
    Client C;
};

#endif // MAINWINDOW_H
