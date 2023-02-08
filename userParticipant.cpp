#include "userparticipant.h"

userParticipant::userParticipant(QString name ,double currentScore, double accuracy)
{
    this->name = name;
    this->currentScore=currentScore;
    this->accuracy=accuracy;
}
void userParticipant::addScore(double score)
{
    totalScore = totalScore + score;
    maxScore = max(maxScore, score);
    return;
}
void userParticipant::addAccuracy(double accuracy)
{
    averageAccuracy = (averageAccuracy + accuracy) / 2;
}
void userParticipant::addSpeed(double speed)
{
    averageSpeed = (averageSpeed + speed) / 2;
}
QString userParticipant::getName()
{
    return name;
}
double userParticipant::getTotalScore()
{
    return totalScore;
}
double userParticipant::getMaxScore()
{
    return maxScore;
}
double userParticipant::getAverageAccuracy()
{
    return averageAccuracy;
}
double userParticipant::getAverageSpeed()
{
    return averageSpeed;
}
double userParticipant::getcurrentScore()
{
    return currentScore;
}
double userParticipant::getaccuracy()
{
    return accuracy;
}
void userParticipant::printName()
{
//    cout << name;
    return;
}
void userParticipant::printTotalScore()
{
    cout << fixed << setprecision(2) << totalScore;
    return;
}
void userParticipant::printMaxScore()
{
    cout << fixed << setprecision(2) << maxScore;
    return;
}
void userParticipant::printAverageAccuracy()
{
    cout << fixed << setprecision(2) << averageAccuracy;
    return;
}
void userParticipant::printAverageSpeed()
{
    cout << fixed << setprecision(2) << averageSpeed;
    return;
}
