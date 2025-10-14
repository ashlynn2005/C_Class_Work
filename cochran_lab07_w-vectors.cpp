#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// structure declared here
struct Player{ // should be capitalized
    string name;
    string position;
    int tdown;
};

void display(vector<Player> pv); // after struct
void findPlayer(vector<Player> pv);
void save(vector<Player> pv);
void add(vector<Player> &pvr);

int main()
{
    const int NPLAYERS=4; // capitalize the name
    ifstream ifile;
    int option;

  // 0) define variables and arrays
    Player players[NPLAYERS];
    vector<Player>play;

  // 1) load from file
    Player temp;
    ifile.open("players.txt");
    for (int i=0; i<NPLAYERS; i++)
    {
        ifile>>temp.tdown; // struct knew the variables we are looking for, grabbed it, writing inside the array
        ifile>>temp.position;
        ifile.ignore();
        getline(ifile, temp.name);
        play.push_back(temp);

    }
    ifile.close();

  // 2) repeat until option to quit
    do{

    // display options
        cout<<"Options:\n"
              "1) Display players\n"
              "2) Search player\n"
              "3) Save\n"
              "4) Add player\n"
              "5) Exit\n";
        cout<<"\nOption: ";
        cin>>option;
    // read the option chose
        switch(option)
        {
        case 1:
            display(play);
            break;
        case 2:
            findPlayer(play);
            break;
        case 3:
            save(play);
            break;
        case 4:
            add(play);
            break;
        case 5:
            break;
        default:
            cout<<"Invalid option"<<endl;


        }

    // select the function for said option
    }while(option != 5);


    return 0;
}

void add(vector<Player> &pvr) // add & for reference vector
{
    Player temp;
    string name, position;
    int tdown;

    cout<<"Write name: ";
    cin.ignore();
    getline(cin, temp.name);

    cout<<"Write position: ";
    cin.ignore();
    getline(cin, temp.position);

    cout<<"Write number of touchdowns: ";
    cin>>temp.tdown;

    pvr.push_back(temp);
}

void save(vector<Player> pv) // case 3
{
    ofstream ofile; //o instead of i because its OUTPUT not INPUT
    ofile.open("players.txt");
     for (Player p: pv)
        ofile<<p.tdown<<" - "<<p.position<<" - "<<p.name<<endl;; // dont need {} with single line code
    ofile.close();

}

void findPlayer(vector<Player> pv) // case 2
{
    string playerName;
    cin.ignore();
    cout<<"Write the name of the player: ";
    getline(cin, playerName);

    for (Player p: pv)
    {
        if (playerName == p.name) // use the array to find name
        {
            cout <<p.tdown << " - " <<p.position <<" - "<<p.name<<endl<<endl;
            return; // do not continue looking

        }

    }
    cout<<"\nNot a player"<<endl;
}

void display(vector<Player> pv) //case 1
{
    for (Player p: pv)
        cout<<p.tdown<<" - "<<p.position<<" - "<<p.name<<endl;; // dont need {} with single line code
    cout<<endl;
}
