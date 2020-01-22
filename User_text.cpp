 #include "Game_Manager.h" 

void Game_Manager::User_Text(std::string Question, std::string Respons)
{
    Game_Text(Question, false); 
    std::cin >> User_answer;
    if(Respons !="")
    {
        Game_Text(Respons + User_answer, true);
    }
    else 
    {
        Game_Text(User_answer, true);
    }
}

