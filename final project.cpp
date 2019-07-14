//comsc110 final project
//Yibo Fu

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
void opening();
void showMenu();
string name;

int main()
{
    opening();
}

void opening()
{
    string name;
    cout << "**Welcome to this world.**" << "    (Enter to continue)";
    cin.get();

    cout << endl << "It is year 2525. Everyone has lost their memory." ;
    cin.get();

    cout <<endl << "kkkkkkkkkkkkkkkkkkkkk? (Enter your name) ";
    getline(cin, name);

    cout << endl << "Your name is " << name << "." ;
    cin.get();

    cout << endl << name << ": " << "Who are you?" ;
    cin.get();

    cout << endl << "I am a little memory from the Fountain of Truth.";
    cin.get();

    cout << endl << name << ": " << "How could I find memory for everyone?";
    cin.get();

    cout << endl << "You need to find the Fountain of the Truth lying in the East.";
    cin.get();

    cout << endl << "You can find the way by asking people that you meet on your journey.";
    cin.get();

    cout << endl << "These people may or may not help you.";
    cin.get();

    cout << endl << "Good luck, " << name << ".";
    cin.get();
}


