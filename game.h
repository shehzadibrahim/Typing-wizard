#ifndef GAME_H
#define GAME_H
#include "result.h"

#include <QDialog>

namespace Ui {
class Game;
}

class Game : public QDialog
{
    Q_OBJECT
    QString name , typingText;
    int roundNo;


public:
    explicit Game( int roundNo, QString name,QString typingText,QWidget *parent = nullptr);
    ~Game();
    static void on_textBrowser_textChanged();

private slots:






//    void on_startButton_clicked();

    void on_submitButton_clicked();

    void on_Player_name_linkActivated(const QString &link);

    void on_Round_name_linkActivated(const QString &link);

private:
    Ui::Game *ui;
};

#endif // GAME_H
