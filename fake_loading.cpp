#include "Game_Manager.h"

void Game_Manager::fake_loading()
{
    float percent = 0.0; 
    while (percent < 100.0)
    {
        percent ++;
        std::cout << percent <<"%"<< std::endl;
        Delay(0.09);
    }
}
