#pragma once

#include <string>

class Game_Manager
{
public:
 
	//Text created by game
	void Game_Text(std::string Ss);
    
	//In game user input function
	void User_Text(std::string Question, std::string Respons);

	void Delay(float User_Seconds);

	void fake_loading();

private:
	std::string User_answer;

};
