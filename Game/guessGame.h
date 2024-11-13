#pragma once
#include <iostream>
#include <string>

class GamePlayer
{
	private:
	std::string firstName;
	std::string secondName;
	std::string handle;
	int guess;
	bool isValidHandle(std::string handle)
	{
		int cnt = 0;
		for (char c : handle)
		{
		
			if (isalpha(c))
			{
				cnt++;
			}
		}
		if (cnt >= 3 &&  handle.length() >= 4) {
			return true;
		}
		return false;
	}
public:
	void setHandle(std::string handle)
	{
		if (isValidHandle(handle))
		{
			//developer can give setter. 
			this->handle = handle;

		}
	}
	GamePlayer();
	void displayName();
	void displayGuess();
	GamePlayer::GamePlayer(std::string firstName, std::string secondName, int);

};

