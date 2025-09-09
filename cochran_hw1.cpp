#include <iostream>
using namespace std;


int main()
{
    // Problem 1 - miles
    double carHold, carTravel, milesPerGalon;

    carHold = 15; // total gallons it holds
    carTravel = 375; // total miles before refill

    milesPerGalon = carTravel / carHold; // finds miles per gallon

    cout<<"The estimated miles per gallons on this car is: "<<milesPerGalon<<endl;

    return 0;
}
