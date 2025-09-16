#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Problem 4 and 5 - Read File

    ifstream ifile;
    int age1, age2, age3;
    string name1, name2, name3;

    ifile.open("students.exe");

    ifile>>age1;
    ifile.ignore();
    getline(ifile, name1);

    ifile>>age2;
    ifile.ignore();
    getline(ifile, name2);

    ifile>>age3;
    ifile.ignore();
    getline(ifile, name3);


    ifile.close();

    cout<<age1<<":"<<name1<<endl
        <<age2<<":"<<name2<<endl
        <<age3<<":"<<name3<<endl;

    while (true)
    {
        cout<<"1) Modify 1\n"
              "2)"
    }

    return 0;
}

