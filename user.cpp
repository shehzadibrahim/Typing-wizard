#include "user.h"
#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 26;
#include <QLabel>
#include <QFormLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <QLineEdit>
user::user()
{

}
QString user::  randomTextGenerator( int n){

    srand(time(NULL));
    char letters[MAX_SIZE] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q',
    'r','s','t','u','v','w','x',
    'y','z'};


    QString ran = "";
    for (int i=0;i< n;i++)
    ran=ran + letters[rand() % MAX_SIZE];


    return ran;



}



