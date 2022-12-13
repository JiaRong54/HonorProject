#ifndef USERDATA_H
#define USERDATA_H
#include "plan.h"
#include <QDialog>

namespace Ui {
class UserData;
}

class UserData : public QDialog
{
    Q_OBJECT

public:
    explicit UserData(QWidget *parent = nullptr);
    ~UserData();
    void setinfo();

private slots:
    void on_Next_clicked();

private:
    Ui::UserData *ui;
    Plan *newplan;
};

#endif // USERDATA_H
