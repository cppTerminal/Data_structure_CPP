#include "AbstractClass.h"

//void Animal::makeSound()  /// by making pure virtual means we can not make object of the base class.
//{
//	//std::cout << "User. " << std::endl;
//}


void dog::makeSound()
{
	std::cout << "woof. " << std::endl;

}


void cat::makeSound()
{
	std::cout << "meow. " << std::endl;
}