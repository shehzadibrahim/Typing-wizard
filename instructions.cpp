#include "instructions.h"
#include "ui_instructions.h"
#include "game.h"
#include <QPushButton>
#include "user.h"
#include "displayresult.h"
#include <QLineEdit>
#include <QFormLayout>
#include <ctime>
#include "userparticipant.h"
QList<userParticipant> user::participantobjList;

instructions::instructions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::instructions)
{
    ui->setupUi(this);
      connect(ui->continue_instruction, &QPushButton::clicked, this, &Game::on_textBrowser_textChanged);

}

instructions::~instructions()
{
    delete ui;
}

void instructions::on_continue_instruction_clicked()
{

int score = 0;
    for(int i = 0; i < user::Rounds; i++){

        for(int j = 0; j < user::Participants; j++){
            QString randomText = user::randomTextGenerator( (user::diff) * 200);

            Game g(i+1,user::participant_name[j],randomText);
            g.setModal(true);

               close();
                clock_t timer = clock();
             g.exec();


                                 double timeTaken = (((double)clock()) - timer) / ((double)CLOCKS_PER_SEC);

                                 for (int k = 0; k < min(randomText.size(), user::currentInputtext.size()); k++)
                                 {
                                     if (user::currentInputtext[k] == randomText[k])
                                         score++;
                                 }

                                 double accuracy =  ((double)(score * 100) /randomText.size());

                                userParticipant user(user::participant_name[j],score,accuracy);

                                //push_back
                                user::participantobjList.append(user);


        }

              displayResult abs(user::participantobjList);
              abs.setModal(true);

                close();

              abs.exec();
//            QWidget *window = new QWidget;
//            QPushButton *button1 = new QPushButton("One");
//            QLineEdit *lineEdit1 = new QLineEdit();
//            QPushButton *button2 = new QPushButton("Two");
//            QLineEdit *lineEdit2 = new QLineEdit();
//            QPushButton *button3 = new QPushButton("Three");
//            QLineEdit *lineEdit3 = new QLineEdit();

//            QFormLayout *layout = new QFormLayout(window);
//            layout->addRow(button1, lineEdit1);
//            layout->addRow(button2, lineEdit2);
//            layout->addRow(button3, lineEdit3);

//            window->show();

    }

//    Game g;
//    g.setModal(true);

//       close();
//     g.exec();

     //close();

}

