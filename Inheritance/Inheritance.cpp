#include "Inheritance.h"

User::User() {
	std::cout << "I am building user." << std::endl;
}
Player::Player() {
	std::cout << "I am building Player." << std::endl;
}

User::~User() {
	std::cout << "I am destroying user." << std::endl;
}

Player::~Player() {
	std::cout << "I am destroying Player." << std::endl;
}

	void User::display()
	{
		std::cout << "User. " << name << " handle- " << handle << std::endl;
	}


	void Player::display()
	{
		std::cout << "Player. " << name << " handle- " << handle << " streanth- " << streanth << std::endl;

	}


	void Enemy::display()
	{
		std::cout << "Enemy. " << name << " handle- " << handle << std::endl;
	}

	void User::takeAction(int jump)
	{

		std::cout << "User action- " << jump << std::endl;
	}

	void Player::takeAction(int jump, int streanth)  // we can remove duplication by insg the base takeAction();
	{
		User::takeAction(jump);
		score += streanth * 2;
		std::cout << "Player score- " << score << std::endl;
	}
	int User::getScore(int jump)
	{
		return score = 2 * jump;
	}
	int Player::getScore(int jump)
	{
		return score;					
		//return  score = 2 * jump;//Derived class can not acess private member of base class.
	}