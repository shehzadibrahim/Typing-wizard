#include "result.h"
#include "ui_result.h"
#include <QLabel>
#include "user.h"

result::result(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::result)
{
    ui->setupUi(this);



        for(int j = 0; j < user::Participants; j++){

//            Game g(i+1,user::participant_name[j],user::randomTextGenerator( (user::diff) * 200));
//            g.setModal(true);

//               close();
//             g.exec();
            label = new QLabel(user::participant_name[j], this);
        }



}

result::~result()
{
    delete ui;
}
