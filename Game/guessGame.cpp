#include "guessGame.h"

	void GamePlayer::displayName()
	{
		std::cout << firstName << " " << secondName << std::endl;
	}

	void GamePlayer::displayGuess()
	{
		displayName();
		std::cout << handle << " guessed " << guess << std::endl;
	}
	GamePlayer::GamePlayer()
	{
		std::cout << "player object" << std::endl; 
	}
	GamePlayer::GamePlayer(std::string first, std::string second, int guess)
	{
		std::cout << "player object" << std::endl;
		firstName = first;
		secondName = second;
		this->guess = guess;
	}