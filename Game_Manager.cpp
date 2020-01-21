#include "Game_Manager.h"

#include <iostream>
#include <unistd.h> //sleep library

  
void Game_Manager::Game_Text(std::string Ss)
{
    std::cout << Ss << std::endl;
}
    
void Game_Manager::User_Text(std::string Question, std::string Respons)
{
    std::cout << Question;
    std::cin >> User_answer;
    if(Respons != "")
    {
        std::cout << Respons << User_answer << std::endl;
    }
    else 
    {
        std::cout << User_answer << std::endl;
    }
}

void Game_Manager::Delay(float User_Seconds)
{
    float Seconds = 0.0;
    while(Seconds < User_Seconds)
    {
        Seconds ++;
        sleep(1);
    }
}
void Game_Manager::fake_loading()
{
    float percent = 0.0; 
    while (percent < 100.0)
    {
        percent ++;
        std::cout << percent << std::endl;
        Delay(0.09);
    }
}
