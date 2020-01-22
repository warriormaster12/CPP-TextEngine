 #include "Game_Manager.h" 

void Game_Manager::User_Text(std::string Question, std::string Respons)
{
    Game_Text(Question);
    std::cin >> User_answer;
    if(Respons !="")
    {
        Game_Text(Respons + User_answer);
        
    }
    else 
    {
        Game_Text(User_answer);
    }
}

