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

int plyr_health = 10,
    plyr_atk = 2,
    plyr_mgc = 0,
    plyr_armor = 0,
    plyr_mgc_resist = 0,
    fight_counter = 0;
    help_counter = 0;
    run_counter = 0;



int main()
{
    opening();
}

void opening()
{
    string w = "Greetings child." << " (Press any key to continue)";
    slowSpeed(w);
    cin.get();
    string q = "It is the year 2525. Many people have lost their memories due to the Great Mystery. Tell me child, do you remember who you are?\n" ;
    slowSpeed(q);
    cin.get();
    string a = "Who am I?\n";
    slowSpeed(a);
    cin.get();
    choice(1);
    cin.get();
    cin.ignore();
    string s = "\nI see. Perhaps you may still be of some use. You were destined to find me after all.";
    slowSpeed(s);
    cin.get();
    string d = "Who am I? I am a memory from the Fountain of Truth. But I am incomplete¡­" ;
    slowSpeed(d);
    cin.get();
    string f = "Recover my other pieces and all will be revealed.";
    slowSpeed(f);
    cin.get();
    string g = "The ones that still remember¡­ Help them and they will help you.";
    slowSpeed(g);
    cin.get();
    string h = "Good luck, child.\n";
    slowSpeed(h);
    cin.get();
    string j = "WRYYYYYYYYY*\n<You black out.>\n";
    slowSpeed(j);
    cin.get();
}

void choice(int i)
{
    if (i = i)
    {
        cout << "1. I don’t know.\n"
    	     << "2. I don’t know.\n"
	         << "3. I don’t know.\n"
	         << "4. I don’t know.\n";
    }
}



/*NPC
int farmerNPC();
    int option,
        health = 5,
        attack = 1,
        armor = 1,
        mgc_resist = 0;
    cout << "Hey there! I'm the farmer! I'm not much of a fighter hehe. Would you like to buy my beets?"
    while (true)
    {
        int turn = 0;
        option = combatmenu(); //open combat menu (returns their option)
        if (option = 1) //(physical attack) 
            health = health - (plyr_atk - armor);
            healthCheck(health, "'I've been BEET! :('");
            
            cout << "OW DAG NABBIT. YUR GONNA PAY!\n Here I go, BEET JUICE BEETDOWN!";
            plyr_health = plyr_health - (attack - plyr_armor);
            cout >> "<You received " << (attack - plyr_armor) << " damage!";
            
            
            
            if (health <= 0) 
            {
                cout << "'I've been BEET! :('";
                fight_counter++;
                return fight_counter;
            }
            
            
            
        else if (option = 2) //(magical attack)
            health = health - (plyr_mgc - mgc_resist);
            cout << "WHAT ARE YOU? A MAGICIAN?\nHere I go, BEET JUICE BEETDOWN!\n";
            plyr_health = plyr_health - (attack - plyr_armor);
            cout >> "<You received " << (attack - plyr_armor) << " damage!";
            if (health <= 0) 
            {
                cout << "'I've been BEET! :('";
                fight_counter++;
                return fight_counter;
            }
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
        turn++;
        if (turn = 20) cout << "'Oh no, my beets are ripe! Time to harvest!'\n<The farmer flees.>";
    }
    
chickenguruNPC();
    int option,
        health = 1,
        attack = 
    
    
    
healthCheck(int health,string dialogue)
    if (health <= 0) 
        {
            cout << dialogue;
            fight_counter++;
            return fight_counter;
        }
 
    
*/
    
void slowSpeed(string s)
{
    for (char c : s)
    {
        this_thread::sleep_for(milliseconds(50));
        cout << c << flush;
    }
}

