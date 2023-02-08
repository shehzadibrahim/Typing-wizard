#include "play.h"
#include "ui_play.h"
#include <QVector>
#include<QLabel>
#include "user.h"
#include <QTextStream>
#include <QFile>
#include<iostream>
#include "name.h"
#include <QDialog>
#include <QFormLayout>
#include <QInputDialog>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QDebug>

int user::Participants ;
//int user::Difficulty;
int user::Rounds ;
int user::diff ;


play::play(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::play)
{
    ui->setupUi(this);
     //connect(ui->play_button, &QPushButton::clicked, this, &play::on_pushButton_clicked);





    //             label = new QLabel("", this);
    //



//      QVBoxLayout *layout = new QVBoxLayout();
//       layout->addWidget(lineEdit);
//       layout->addWidget(button);
//       layout->addWidget(label);

//       QWidget *centralWidget = new QWidget(this);
//       centralWidget->setLayout(layout);
//        setLayout(layout);

//    QVBoxLayout *layout = new QVBoxLayout(&play);
//        QPushButton *button = new QPushButton("Click here");
//        QLineEdit *lineEdit = new QLineEdit;

//        layout->addWidget(button);
//        layout->addWidget(lineEdit);

//        QObject::connect(button, &QPushButton::clicked, [lineEdit]{
//            lineEdit->setPlaceholderText("Enter your name");
//            lineEdit->setFocus();
//        });

//   connect(button, &QPushButton::clicked, this, &play::on_pushButton_clicked);

    // Create the line edit
//           lineEdit = new QLineEdit;
//          lineEdit->setVisible(false);

//           // Create the main layout
//           QVBoxLayout* mainLayout = new QVBoxLayout;

//           mainLayout->addWidget(lineEdit);
//           setLayout(mainLayout);


 }









play::~play()
{
    delete ui;
}

void play::on_textEdit_textChanged()
{
   // close();
}

QString play::getData()
{
    // Collect data from text edit box
    return "Collected Data";
}


void play::on_pushButton_clicked()
{


    Participants=ui->textEdit1->toPlainText();

    qDebug() << "participants"<<Participants;
    bool ok;
    int a =  Participants.toInt(&ok);
    if (ok) {
      qDebug()<< "Conversion failed. Repeat conversion"<< a;
    }


//    Difficulty=ui->textEdit2->toPlainText();
//    qDebug() << "Difficulty"<<Difficulty;

//    int b =  Difficulty.toInt(&ok);
//        if (ok) {
//          qDebug()<< "Conversion failed. Repeat conversion"<< b;
//        }






    Rounds=ui->textEdit3->toPlainText();
    qDebug() << "Rounds"<<Rounds;

    int c = Rounds.toInt(&ok);
        if (ok) {
          qDebug()<< "Conversion failed. Repeat conversion"<<c;
        }




    user::Participants = a;
//    user::Difficulty = b ;
    user::Rounds =c ;

//           label->setText(lineEdit->text());


//            lineEdit = new QLineEdit(this);
//             label = new QLabel("", this);
//             button = new QPushButton("Update Label", this);

//             QVBoxLayout *layout = new QVBoxLayout();
//             layout->addWidget(lineEdit);
//             layout->addWidget(button);
//             layout->addWidget(label);

//             setLayout(layout);
//    lineEdit = new QLineEdit;
//   lineEdit->setVisible(false);

//    // Create the main layout
//    QVBoxLayout* mainLayout = new QVBoxLayout;

//    mainLayout->addWidget(lineEdit);
//    setLayout(mainLayout);





    name p;
    p.setModal(true);

        close();
     p.exec();


//    name *childWindow = new name;
//    QVBoxLayout *layout = new QVBoxLayout(childWindow);
//    QFormLayout *formLayout = new QFormLayout;

//    QLineEdit *lineEdit[a];
//    for (int i = 0; i < a; i++) {
//        lineEdit[i] = new QLineEdit;
//        formLayout->addRow(QString("Line Edit %1").arg(i + 1), lineEdit[i]);
//    }
//    layout->addLayout(formLayout);
//    childWindow->show();


//close();
//QCoreApplication::quit();




}




void play::on_easyButton_clicked()
{
    if(ui->easyButton->isChecked()){
            user::diff = 1;
    }

}


void play::on_mediumButton_clicked()
{
    if(ui->mediumButton->isChecked()){
        user::diff= 2;
    }

}


void play::on_hardButton_clicked()
{
    if(ui->hardButton->isChecked()){
        user::diff  = 3;
    }
}

