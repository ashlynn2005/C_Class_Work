#include <iostream>
using namespace std;

int main()
{
    // Problem 3 - Mobile Service

    char package;
    float leftMins;
    double minutes;

    const float PRICE_A=39.99, PRICE_B=59.99, PRICE_C=69.99;
    float       ADD_A = 0.45f, ADD_B = 0.40f;
    const int MIN_A =450, MIN_B=900;
    float total;

    cout<<"Please enter your deal package (A,B,C) and the TOTAL minutes you have used this month. (separate with space)"<<endl;
    cin>>package>>minutes;

    if (package=='A' && minutes<=450)
    {
        total = PRICE_A;
        cout<<"Your monthly bill is: "<<total<<endl;
    }
    else if (package=='A' && minutes>450)
    {
        leftMins = minutes-450;
        total = (leftMins*ADD_A) + PRICE_A;
        cout<<"Your monthly bill is: "<<total<<endl;
    }
    else if (package =='B' && minutes<=900)
    {
        total = PRICE_B;
        cout<<"Your monthly bill is: "<<total<<endl;
    }
    else if (package=='B' && minutes>900)
    {
        leftMins = minutes-900;
        total = (leftMins*ADD_B) + PRICE_B;
        cout<<"Your monthly bill is: "<<total<<endl;
    }
    else if (package=='C')
    {
        total = PRICE_C;
        cout<<"Your monthly bill is: "<<total<<endl;
    }
    else
    {
        cout<<"Not an option given."<<endl;
    }


    return 0;
}
