#pragma once
#include<iostream>
class User {
public:
	std::string name;
protected:
	std::string handle;
	int score = 0;
private:
	int privateMember;
public:
	void takeAction(int);
	int getScore(int);
	User();
	~User();
	User(std::string name, std::string handle)
	{
		this->name = name;
		this->handle = handle;
	}
	void display();
};

class Player : public User
{
public:
	Player();
	~Player();
	Player(std::string name, std::string handle, int strenth):User(name, handle) // avoid duplication in ctor. and memnber initialisation
	{
		//this->name = name;
		//this->handle = handle;  
		this->streanth = strenth;
	}
	void display();
	void takeAction(int, int);
	int getScore(int);
	int streanth = 0;

};

class Enemy : public User
{
public:
	Enemy() {};
	void display();
	//void takeAction();
	//int getScore(int);
	int running_speed = 0;

};

