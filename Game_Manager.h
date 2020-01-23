#pragma once

#include <string>
#include <iostream>

//Time cross-platform libraries
#include <chrono>
#include <thread>

class Game_Manager
{
public:
 
	//Text created by game
	void Game_Text(const std::string& text);
    
	//In game user input function
	void User_Text(std::string Question, std::string Respons);

	void Delay(float User_Seconds);

	void fake_loading();

private:
	std::string User_answer;
    bool end_line = true; 
};
