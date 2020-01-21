#include <iostream>
#include <unistd.h> //sleep library
#include <string>

using namespace std; 

class Game_Manager
{
public:

    std::string User_answer;
    
    void Game_Text(std::string Ss) //Text created by game
    {
        std::cout << Ss << std::endl;
    }
    
    void User_Text(std::string Question, std::string Respons) //In game user input function
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

    void Delay(float User_Seconds)
    {
        float Seconds = 0.0;
        while(Seconds < User_Seconds)
        {
            Seconds ++;
            sleep(1);
        }
    }
    void fake_loading()
    {
        float percent = 0.0; 
        while (percent < 100.0)
        {
            percent ++;
            std::cout << percent << std::endl;
            Delay(0.09);
        }
    }
};