//comsc110 final project
//Yibo Fu Lawrence Luong

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;
void opening();
void choice(int);

int main()
{
    opening();
}

void opening()
{
    cout << "Greetings child." << " (Press any key to continue)";
    cin.get();
    cout << "It is the year 2525. Many people have lost their memories due to the Great Mystery. Tell me child, do you remember who you are?\n" ;
    cin.get();
    cout << "Who am I? (Enter your name)\n";
    choice(1);
    cin.get();
    cin.ignore();
    cout << "\nI see. Perhaps you may still be of some use. You were destined to find me after all.";
    cin.get();
    cout << "Who am I? I am a memory from the Fountain of Truth. But I am incomplete…" ;
    cin.get();
    cout << "Recover my other pieces and all will be revealed.";
    cin.get();
    cout << "The ones that still remember… Help them and they will help you.";
    cin.get();
    cout << "Good luck, child.\n";
    cin.get();
    cout << "WHRRRRRR*\n<You black out.>\n";
    cin.get();
}

void choice(int j)
{
    if (j = 1)
    {
        cout << "1. I don’t know.\n"
    	     << "2. I don’t know.\n"
	         << "3. I don’t know.\n"
	         << "4. I don’t know.\n";
    }
}



