#include "runTimePolymorphism.h"

void runTimePolyClass::display()
{
	std::cout << "User. "  << std::endl;
}


void runTimePolyPlayer::display()
{
	std::cout << "Player. " << std::endl;

}


void runTimePolyEnemy::display()
{
	std::cout << "Enemy. "<< std::endl;
}

//whatever type of object/user is greeting, should call/greet 
void greet(runTimePolyClass& x)
{
	std::cout << "Hi...";
	x.display();				// without rumtime polymorphism, it is calling always base class method. 

}