#ifndef DISPLAYRESULT_H
#define DISPLAYRESULT_H

#include <QDialog>
#include <QPushButton>
#include "userparticipant.h"

namespace Ui {
class displayResult;
}

class displayResult : public QDialog
{
    Q_OBJECT
    int accuracy , score;
    QList<userParticipant> participantList;

public:
    explicit displayResult(QList<userParticipant> participantList,QWidget *parent = nullptr);
    ~displayResult();

private slots:
    void on_okButton_clicked();

    void on_formWidget_customContextMenuRequested(const QPoint &pos);

    void on_pushButton_clicked();
    void createLineEdits();


    void on_verticalWidget_customContextMenuRequested(const QPoint &pos);



private:
    Ui::displayResult *ui;
     QPushButton *button;
};

#endif // DISPLAYRESULT_H
