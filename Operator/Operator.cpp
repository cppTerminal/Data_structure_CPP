#include <iostream>
#include "Operator.h"

void Operators()
{
	/*
	&   Bitwise AND operator,	
		Adreess operator,   - cout << &int_type works
							- cout << & string NOT work
							- 
	*	multiplication 
		Dereference operator			
	*/

	//& : address operator
	int y = 10;
	std::cout << (&y) << std::endl;  // & bucket = address
	char x = 'A';
	std::cout << (&x) << std::endl;			  // cout << &char = value of char 
	std::cout << (void*)(&x) << std::endl;    // cout << (void *)&char = Address

	//* : Pointers  
	//Pointers are used to strore address rather than values

	int* yptr = &y;
	std::cout << yptr << std::endl;		//bucket address
	std::cout << yptr +1 << std::endl;	// buckket adress + 1
	
	char* xptr = &x;
	std::cout << (void *)xptr << std::endl;		// &bucket = address
	//std::cout << (void *)xptr + 1 << std::endl;	// buckket adress + 1



	// * Dereferencing 
	/*
	variable				variable address
		|				   ^	   |
		|				  /		   |
		.	             /         .
		&				/		 int*
	variable address			pointer   -->		*Value of x
	*/


	int buck = 10;
	std::cout << buck << std::endl;
	std::cout << &buck << std::endl;
	//std::cout << *buck << std::endl;  //Its not pointers so we can not *

	int* bptr = &buck;
	std::cout << bptr << std::endl; // address as &buck
	std::cout << *bptr << std::endl; // value of buck 

}