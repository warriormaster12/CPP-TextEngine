#include "Components/Game_Manager.h"


void Event_Sequence()
{
    Game_Manager manager_inst; //instantiate Game Manager class
    manager_inst.Delay(0.5);
    manager_inst.Game_Text("Hello human!"); //Text created by the game with a boolean end_line
    manager_inst.Delay(1.5);
    manager_inst.Game_Text("Welcome to my little game");
    manager_inst.Delay(1.5);
    manager_inst.User_Text("What's your name? ", "Nice to meet you ");
    manager_inst.Delay(0.5);
    manager_inst.Game_Text("Setting you up");
    manager_inst.Delay(1.5);
    manager_inst.fake_loading();
    manager_inst.Create_Choice(". Choise", 0);
    manager_inst.Create_Choice(". Another choise", 1);
}

int main()
{
    Event_Sequence();

    return 0;
}


