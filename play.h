#ifndef PLAY_H
#define PLAY_H


#include <QDialog>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QTextStream>
#include <QFile>
#include "user.h"

namespace Ui {
class play;
}

class play : public QDialog
{
    Q_OBJECT
    QString Participants,Rounds,Difficulty;

public:
    explicit play(QWidget *parent = nullptr);
    ~play();

static QString getData();

signals:
    void dataChanged(const QString& data);


private slots:
    void on_textEdit_textChanged();
    void on_pushButton_clicked();




    void on_easyButton_clicked();

    void on_mediumButton_clicked();

    void on_hardButton_clicked();

private:
    Ui::play *ui;
    QLabel *label;
    QLineEdit *lineEdit;

        QPushButton *button;
};

#endif // PLAY_H
