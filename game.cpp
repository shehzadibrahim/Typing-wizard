#include "game.h"
#include "ui_game.h"
#include<QTextBrowser>
#include <QLabel>
#include "user.h"
#include "displayresult.h"
#include <QString>
#include <QFormLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <QLineEdit>
#include <QTextEdit>

QString user::currentInputtext;


Game::Game(int roundNo, QString name,QString typingText,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);
    this->roundNo = roundNo;
    this->name = name;
    this->typingText = typingText;

//    QTextBrowser *textBrowser = new QTextBrowser;
//    textBrowser->setText("Your plain text here");

//        QLabel *label = new QLabel("hello satya", this);
//        label->show();

//     ui->Player_name->setText("HELLO SHEZARD");
//     ui->textBrowser->setText("Your plain text here");
    ui->Player_name->setText(name);
    ui->textBrowser->setText(typingText);
     QString text = "ROUND :  " + QString::number(roundNo);
    ui->Round_name->setText(text);//Round_name
//on_textBrowser_textChanged();

}

Game::~Game()
{
    delete ui;
}

void Game::on_textBrowser_textChanged()
{
   // QTextBrowser textBrowser;
//    QTextBrowser *textBrowser = new QTextBrowser;
//    textBrowser->setText("hello satya");
//     textBrowser->show();
}




//void Game::on_startButton_clicked()
//{
//    ui->textBrowser->setText("Your plain text here");
//}


void Game::on_submitButton_clicked()
{
    QString inputText =ui->textEditans->toPlainText();
     qDebug() << "inputText"<<inputText;
     user::currentInputtext = inputText;



//      displayResult abs;
//      abs.setModal(true);

        close();
//      abs.exec();


//    QCoreApplication::quit();
}


void Game::on_Player_name_linkActivated(const QString &link)
{

}


void Game::on_Round_name_linkActivated(const QString &link)
{

}

