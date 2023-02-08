#ifndef USER_H
#define USER_H
#include <QString>
#include <QStringList>
#include "userparticipant.h"

class user
{

public:
      static int Participants,Rounds , diff;//Difficulty,
      static QStringList participant_name;
      static QString currentInputtext;
      static QString randomTextGenerator(int);
      static QList<userParticipant> participantobjList;

    user();

};

//QString user::Participants = "Hello ";
#endif // USER_H
