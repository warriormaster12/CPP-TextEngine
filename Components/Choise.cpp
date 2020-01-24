#include "Game_Manager.h"

std::string Choise[0];

void Game_Manager::Create_Choise(std::string Text, int index)
{
    std::cout << index + 1 << std::flush;
    Choise[index] = Text;
    Game_Text(Choise[index]);
}
