#ifndef PLAN_H
#define PLAN_H

#include <QDialog>

namespace Ui {
class Plan;
}

class Plan : public QDialog
{
    Q_OBJECT

public:
    explicit Plan(QWidget *parent = nullptr);
    ~Plan();

private:
    Ui::Plan *ui;
};

#endif // PLAN_H
