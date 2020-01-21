#include <iostream>

//Created libraries
#include "Game_Manager.cpp"

using namespace std; 

void Event_Sequence()
{
    Game_Manager manager_inst; //instantiate Game Manager class
    manager_inst.Delay(0.5);
    manager_inst.Game_Text("Hello human!");
    manager_inst.Delay(3);
    manager_inst.Game_Text("Welcome to my little game");
    manager_inst.Delay(3);
    manager_inst.User_Text("What's your name? ", "Nice to meet you ");
    // manager_inst.fake_loading();
}

int main()
{
    Event_Sequence();

    return 0;
}


