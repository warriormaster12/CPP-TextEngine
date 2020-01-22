#include "Game_Manager.h"


  
void Game_Manager::Game_Text(const std::string& text)
{
    for (std::size_t i = 0; i < text.size(); ++i)
    {
        std::cout << text[i] << std::flush;

        std::this_thread::sleep_for(std::chrono::milliseconds(60));
    }
    if (end_line == true)
    {
        std::cout << "" << std::endl;
    }
}
    

