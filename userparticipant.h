#ifndef USERPARTICIPANT_H
#define USERPARTICIPANT_H



#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;
#include <QString>
class userParticipant
{
private:
    QString name = "";
    double totalScore = 0.0;
     double currentScore = 0.0;
    double maxScore = 0.0;
    double accuracy = 0.0;
    double averageAccuracy = 0.0;
    double averageSpeed = 0.0; //characters per second

public:
    userParticipant(QString name ,double currentScore, double accuracy);
    void addScore(double score);
    void addAccuracy(double accuracy);
    void addSpeed(double speed);
   QString getName();
    double getTotalScore();
    double getMaxScore();
    double getAverageAccuracy();
    double getAverageSpeed();
    double getcurrentScore ();
    double getaccuracy();
    void printName();
    void printTotalScore();
    void printMaxScore();
    void printAverageAccuracy();
    void printAverageSpeed();
};

#endif // USERPARTICIPANT_H
//userParticipant
