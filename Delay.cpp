#include"Game_Manager.h"

void Game_Manager::Delay(float User_Seconds)
{
    using namespace std::chrono_literals;
    float Seconds = 0.0;
    while(Seconds < User_Seconds)
    {
        Seconds += 0.1;
        std::this_thread::sleep_for(0.1s);
    }
}