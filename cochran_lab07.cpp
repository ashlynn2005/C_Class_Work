#include <iostream>
#include <fstream>
using namespace std;

// structure declared here
struct Player{ // should be capitalized
    string name;
    string position;
    int tdown;
};

void display(Player players[], int s); // after struct
void findPlayer(Player players[], int s);
void save(Player players[], int s);

int main()
{
    const int NPLAYERS=4; // capitalize the name
    ifstream ifile;
    int option;

  // 0) define variables and arrays
    Player players[NPLAYERS]; // use the struct to define

  // 1) load from file
    ifile.open("players.txt");
    for (int i=0; i<NPLAYERS; i++)
    {
        ifile>>players[i].tdown; // struct knew the variables we are looking for, grabbed it, writing inside the array
        ifile>>players[i].position;
        ifile.ignore();
        getline(ifile, players[i].name);

    }
    ifile.close();

  // 2) repeat until option to quit
    do{

    // display options
        cout<<"Options:\n"
              "1) Display players\n"
              "2) Search player\n"
              "3) Update data of player and save\n"
              "4) Exit\n";
        cout<<"\nOption: ";
        cin>>option;
    // read the option chose
        switch(option)
        {
        case 1:
            display(players, NPLAYERS);
            break;
        case 2:
            findPlayer(players, NPLAYERS);
            break;
        case 3:
            save(players, NPLAYERS);
            break;
        case 4:
            break;
        default:
            cout<<"Invalid option"<<endl;


        }

    // select the function for said option
    }while(option != 4);


    return 0;
}

void save(Player players[], int s)
{
    ofstream ofile; //o instead of i because its OUTPUT not INPUT
    ofile.open("players.txt");
     for (int i=0; i<s; i++)
        ofile<<players[i].tdown<<" - "<<players[i].position<<" - "<<players[i].name<<endl;; // dont need {} with single line code
    ofile.close();

}

void findPlayer(Player players[], int s) // case 2
{
    string playerName;
    cin.ignore();
    cout<<"Write the name of the player: ";
    getline(cin, playerName);

    for (int i=0; i<s; i++)
    {
        if (playerName == players[i].name) // use the array to find name
        {
            cout <<players[i].tdown << " - " <<players[i].position <<" - "<<players[i].name<<endl<<endl;
            return; // do not continue looking

        }

    }
    cout<<"\nNot a player"<<endl;
}

void display(Player players[], int s) //case 1
{
    for (int i=0; i<s; i++)
        cout<<players[i].tdown<<" - "<<players[i].position<<" - "<<players[i].name<<endl;; // dont need {} with single line code
    cout<<endl;
}
