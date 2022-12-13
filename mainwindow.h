#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "userdata.h"
#include "user.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    string getf_name();

private slots:

    void on_Next_clicked();

private:
    Ui::MainWindow *ui;
    UserData *userinfo;
    user *User;
};
#endif // MAINWINDOW_H
