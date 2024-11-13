#pragma once
#include<iostream>
class Animal {
public:
	virtual void makeSound() = 0;  // =0 means we are making pure virtual functyion.
};

class dog : public Animal
{
public:
	void makeSound();
};

class cat : public Animal
{
public:
	void makeSound();

};
