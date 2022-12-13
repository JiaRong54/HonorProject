#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <ctype.h>
#include <Qchar>
#include <QTextStream>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Next_clicked()
{
    QString f_name= ui->InputFirstName->text();
    QString l_name= ui->InputLastName->text();
    QString age= ui->InputAge->text();

    userinfo=new UserData();
    userinfo ->show();
}

