#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // Problem 1 - Calculate interest rate
    double principalStart, timeCompound, totalSavings, compoundRate;
    float intrestRate;

    cout<<"Enter your amount in your savings: "<<endl; // asks for user inputs
    cin>>principalStart;

    cout<<"Enter your interest rate (in percentage ex: .04): "<<endl;
    cin>>intrestRate;

    cout<<"How many times is it compounded: "<<endl;
    cin>>timeCompound;

    compoundRate = ((intrestRate/timeCompound)+1); // figures out first half of problem
    totalSavings = pow(compoundRate, timeCompound)*principalStart; // powers the previous answer

    cout<<"Your total amount of savings: "<<totalSavings; // prints result

    return 0;
}
