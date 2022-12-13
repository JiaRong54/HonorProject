#include "userdata.h"
#include "ui_userdata.h"
#include <QChar>

UserData::UserData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserData)
{
    ui->setupUi(this);


}
UserData::~UserData()
{
    delete ui;
}


void UserData::on_Next_clicked()
{
    newplan = new Plan();
    newplan->show();
}

