 #include "Game_Manager.h" 

void Game_Manager::User_Text(std::string Question, std::string Respons)
{
    end_line = false;
    Game_Text(Question); 
    std::cin >> User_answer;
    if(Respons !="")
    {
        end_line = true;
        Game_Text(Respons + User_answer);
    }
    else 
    {
        end_line = true;
        Game_Text(User_answer);
    }
}

