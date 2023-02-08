#include "displayresult.h"
#include "ui_displayresult.h"
#include <QLabel>
#include <QFormLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>

#include "user.h"

displayResult::displayResult(QList<userParticipant> participantList,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::displayResult)
{
//this->accuracy=accuracy;
    this->participantList=participantList;

    ui->setupUi(this);

//   QFormLayout *formLayout = new QFormLayout(this);
//    formLayout->setGeometry(QRect(390,180, 271, 80));
//           QLabel *label[user::Participants];
//              QLabel *label2[user::Participants];
//           for (int i = 0; i < 5; i++) {
//               label[i] = new  QLabel("SATYA", this);
//                  label2[i] = new  QLabel("SATYA", this);

//               formLayout->addRow(label[i], label2[i]);

//           }

//           formLayout->layoutLeft
//           for(int i= 0; i <10; i++){
//                 ui->nameList->addItem("\thello");
//                         ui->accuracyList->addItem(accuracy);
//                           ui->scoreList->addItem(score);
//           }

           for ( userParticipant abc :  participantList) {

               ui->nameList->addItem(abc.getName());
                      QString accuracy =  QString::number(abc.getaccuracy());
                       ui->accuracyList->addItem(accuracy);
                        QString score =  QString::number(abc.getcurrentScore());
                         ui->scoreList->addItem(score);

           }






}

displayResult::~displayResult()
{
    delete ui;
}

void displayResult::on_okButton_clicked()
{

    close();
}

void displayResult :: createLineEdits()
{

    QFormLayout *formLayout = new QFormLayout;
           QLabel *label[user::Participants];
           for (int i = 0; i < 5; i++) {
               label[i] = new  QLabel("SATYA", this);

               formLayout->addRow(label[i], label[i]);
           }

          static_cast<QVBoxLayout*>(layout())->addLayout(formLayout);




//                close();
}





void displayResult::on_pushButton_clicked()
{

}


void displayResult::on_formWidget_customContextMenuRequested(const QPoint &pos)
{
     qDebug() << "name of participant in static";
    QFormLayout *formLayout = new QFormLayout(this);
            QLabel *label[user::Participants];
               QLabel *label2[user::Participants];
            for (int i = 0; i < 5; i++) {
                label[i] = new  QLabel("SATYA", this);
                   label2[i] = new  QLabel("SATYA", this);

                formLayout->addRow(label[i], label2[i]);
//                 ui->formLayout->addRow(label[i], label2[i]);
            }
            QWidget *formWidget = new QWidget;
//            formWidget->setLayout(formLayout);


//            ui->formWidget->setLayout(formLayout);


}


void displayResult::on_verticalWidget_customContextMenuRequested(const QPoint &pos)
{    QFormLayout *formLayout = new QFormLayout(this);
     QLabel *label[user::Participants];
        QLabel *label2[user::Participants];
     for (int i = 0; i < 5; i++) {
         label[i] = new  QLabel("SATYA", this);
            label2[i] = new  QLabel("SATYA", this);

         formLayout->addRow(label[i], label2[i]);
     }

}

