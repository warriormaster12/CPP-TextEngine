#include "Game_Manager.h"

std::string Choice[0];

void Game_Manager::Create_Choice(std::string Text, int index)
{
    std::cout << index + 1 << std::flush;
    Choice[index] = Text;
    Game_Text(Choice[index]);
}
