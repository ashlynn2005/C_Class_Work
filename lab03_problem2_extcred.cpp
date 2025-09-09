#include <iostream>
using namespace std;

int main()
{
    // Problem 2 - Days in Month

    int month, days, year;

    cout<<"Enter a month (1-12): ";
    cin>>month;

    if (month==4 || month==6 || month==9 || month==11)
    {
        days=30;
    }
    else if (month!=2)
    {
        days=31;
    }
    else
    {
        cout<<"Enter the year of this month: "<<endl;
        cin>>year;

        if (year%100==0 || year%100!=0)
        {
            if(year%4==0 || year%400==0)
            {
                days=29;
            }
            else
            {
                days=28;
            }
        }
    }

    // print results
    cout<<"Your month (including if its a leap) has: "<<days<<" days!"<<endl;

    return 0;
}
