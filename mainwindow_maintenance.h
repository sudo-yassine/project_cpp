#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"maintenance.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pb_Ajouter_clicked();

    void on_pb_Supprimer_clicked();

    void on_pb_mod_clicked();

    void on_pb_chercher_clicked();

    void on_pb_tri_clicked();

    void on_pb_pdf_clicked();

    void on_tabWidget_currentChanged(int index);

    //void on_pb_stat_clicked();

    //void on_le_stat_linkActivated(const QString &link);

    void on_pb_histo_clicked();


    void on_stat_clicked();

private:
    Ui::MainWindow *ui;
    Maintenance M;
};

#endif // MAINWINDOW_H
