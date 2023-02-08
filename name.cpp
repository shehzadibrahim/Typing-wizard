#include "name.h"
#include "ui_name.h"
#include "user.h"
#include <QPushButton>
#include <QApplication>
#include <QFormLayout>
#include <QInputDialog>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QWidget>
#include <QDebug>
#include"instructions.h"
QStringList user::participant_name ;

name::name(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::name)
{
    ui->setupUi(this);
    QVBoxLayout *layout = new QVBoxLayout(this);
            button = new QPushButton("Click to write the name of Participant");
            layout->addWidget(button);

            connect(button, &QPushButton::clicked, this, &name::createLineEdits);
}

name::~name()
{
    delete ui;
}

 void name :: createLineEdits()
 {
     button->setVisible(false);
     QFormLayout *formLayout = new QFormLayout;
            QLineEdit *lineEdit[ user::Participants];
            for (int i = 0; i <  user::Participants; i++) {
                lineEdit[i] = new QLineEdit;
//                QString text = "participant " + QString::number(i);
                formLayout->addRow(QString("Participant -> %1").arg(i + 1), lineEdit[i]);
            }
            QPushButton *getValuesButton = new QPushButton("Submit");
                   formLayout->addRow(getValuesButton);
                   connect(getValuesButton, &QPushButton::clicked, this, &name::getLineEditValues);
           static_cast<QVBoxLayout*>(layout())->addLayout(formLayout);




//                close();
 }

 void name :: getLineEditValues()
   {
//       QStringList values;
//       QLineEdit *lineEdit = qobject_cast<QLineEdit*>(findChild<QWidget*>());
//       while (lineEdit) {
//           values << lineEdit->text();
//                 lineEdit = qobject_cast<QLineEdit*>(lineEdit->nextInFocusChain());
//       }
//       qDebug() << "Line edit values:";
//       for (const QString &value : values) {
//           qDebug() << value;
//       }


     QList<QLineEdit*> lineEdits = this->findChildren<QLineEdit*>();
     QStringList values;
     for (QLineEdit *lineEdit : lineEdits) {
         if (lineEdit->text().isEmpty()) {
             continue;
         }
         values.append(lineEdit->text());
         user::participant_name.append(lineEdit->text());
     }
     qDebug() << "name of participant in static" << user::participant_name;


     instructions i;
     i.setModal(true);

         close();
      i.exec();
//     close();
   }

