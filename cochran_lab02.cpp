#include <iostream>
using namespace std;

int main()
{
    int bagCapacity=30, servings=10, servingCalories=150; // given variables
    int nCookies, consumedCalories;

    int cookiePerServe, caloriePerCookie; // variables I created for math

    cout<<"How many cookies did you eat?"<<endl;
    cin>>nCookies;

    cookiePerServe = bagCapacity/servings; // gives how many cookies are in one serving
    caloriePerCookie = servingCalories/cookiePerServe; // gives what ONE cookie calories equal to

    consumedCalories = caloriePerCookie*nCookies; // multiples the number of calories per cookie and the num of cookies actually consumed

    cout<<"You consumed "<<consumedCalories<<" calories."<<endl;

    return 0;


    /* Problem 3 - weights
    double palletWeightItself, palletWithLoad, numOfWidgets; // given variables (all but the last one)

    const float widgetsWeight = 12.5; // never changing variable

    // asks the user to input the needed numbers
    cout<<"Enter the pallet weight and then the pallet total weight with the widgets (separate with a space): "<<endl;
    cin>>palletWeightItself>>palletWithLoad; // givens variables the inputed values

    numOfWidgets = (palletWithLoad - palletWeightItself)/widgetsWeight; // math to find answer

    cout<<"Numbers of widgets on pallet: "<<numOfWidgets<<endl; // prints result

    */


}
