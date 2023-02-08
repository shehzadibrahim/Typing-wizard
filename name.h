#ifndef NAME_H
#define NAME_H
#include "user.h"
#include <QPushButton>
#include <QDialog>

namespace Ui {
class name;
}

class name : public QDialog
{
    Q_OBJECT

public:
    explicit name(QWidget *parent = nullptr);
    ~name();

    void createLineEdits();

    void getLineEditValues();
private:
    Ui::name *ui;
    QPushButton *button ;
};

#endif // NAME_H
