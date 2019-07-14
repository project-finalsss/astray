//comsc110 final project
//Yibo Fu Lawrence Luong

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <thread>
#include <chrono>

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
    cout << "Who am I?\n";
    cin.get();
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
    cout << "WRYYYYYYYY*\n<You black out.>\n";
    cin.get();
}

void choice(int i)
{
    if (i = 1)
    {
        cout << "1. I don’t know.\n"
    	     << "2. I don’t know.\n"
	         << "3. I don’t know.\n"
	         << "4. I don’t know.\n";
    }
}



/*NPC

farmerNPC();
    int option,
        health = 5,
        attack = 1,
        armor = 1,
        mgc_resist = 0;
    cout << "Hey there! I'm the farmer! Would you like to buy my beets?"
    //for loop until farmer dies??
    option = combatmenu(); //open combat menu (returns their option)
    if (option = 1) //(physical attack) 
        health = health - (plyr_atk - armor);
        cout << "OW DAG NABBIT. YUR GONNA PAY!";
    else if (option = 2) //(magical attack)
        health = health - (plyr_mgc - mgc_resist);
        cout << "WHAT ARE YOU? A MAGICIAN?";
    else if (option = 3) //(talk)
        cout << "You will? Thank you! My family eatin' good t'night.";
        cout << "Here, I have an extra tractor. You can have it for free!";
        attack++;
        help_counter++;
        return help_counter, attack;
    else //(option = 4) run 
        cout << "MY BEETS! BUY THEM PLEASEEE.";
        cout << "<You got away safely.>"
        run_counter++;
        return run_counter;
    
    
    
    
    












*/
    if (j = 1)
    {
        cout << "1. I don’t know.\n"
    	     << "2. I don’t know.\n"
	         << "3. I don’t know.\n"
	         << "4. I don’t know.\n";
    }
}



