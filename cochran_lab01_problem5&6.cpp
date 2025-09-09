#include <iostream>
using namespace std;

int main()
{
    // Problem 6 = store purchase
    double item1, item2, item3, item4;

    item1 = 15.95; // initializes the variables to given values
    item2 = 27.95;
    item3 = 7.95;
    item4 = 12.95;

    float salesTax = .07f; // sales tax (7%) divided by 100

    double totalItems = item1 + item2 + item3 + item4; // adds all the items for total before tax
    double totalItemsWTax = (totalItems * salesTax) + totalItems; // multiples the total buy the tax and adds to total

    // bellow prints each item price and moves to next line
    cout<<"Each individual item price is: \n"<<item1<<" (item1)"<<endl<<item2<<" (item2)"<<endl<<item3<<"  (item3)"<<endl<<item4<<" (item4)"<<endl;

    cout<<"\nThe sales tax for these items are 7%\n";

    cout<<"\n"; // this just skips a line to organize output
    cout<<"Total price without the tax is: "<<totalItems<<endl;

    cout<<"\n";
    cout<<"Total price of items with the tax added is: "<<totalItemsWTax<<endl;

    return 0;
}
