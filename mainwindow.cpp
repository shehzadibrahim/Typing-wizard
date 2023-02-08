#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"play.h"
#include<QLabel>
#include "user.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Connect the signal from the button to the slot
//       connect(ui->play_button, &QPushButton::clicked, this, &MainWindow::on_play_button_clicked);

}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_play_button_clicked()
{
    qDebug() << "Button was clicked";


    play p;
    p.setModal(true);


     p.exec();
//     close();
    qDebug() << "participants"<< user::Participants;






}



void MainWindow::on_exit_button_clicked()
{
    QCoreApplication::quit();
}

