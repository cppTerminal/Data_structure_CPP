#include <iostream>
#include "Array_1.h"
#include "main.h"

void Array_intro()
{
	int myArray[10];			// Only occupy space of 10 int size
	std::cout << myArray[1] << std::endl;

	int myArray2[] = { 0, 1 };	// occupy  int size memory = provided no of int element. Also fill values to them 
	std::cout << myArray2[1] << std::endl;

	int myArray3[3] = {0, 1, 2};	// occupy 3 int size memory and fill values to them
	std::cout << myArray3[1] << std::endl;

	std::string books[] = {"book1", "book2"};
	std::cout << books[1] << std::endl;



	std::cout << "-----------------." << sizeof(myArray) << std::endl;


	for (int i = 0; i <= 2; ++i)
	{
		std::cout << myArray3[i] << std::endl;
	}
	std::cout << "-----------------." << std::endl;
	
	for (int i:myArray3)
	{
		std::cout << myArray3[i] << std::endl;
	}
	std::cout << "Array Completed." << std::endl;
}


void Array_inFunction(int a[])
{
	std::cout << "-------Array_inFunction----------." << sizeof(a) << std::endl;
	std::cout << (*a) << std::endl;
	std::cout << *(a+2) << std::endl;
}


int * createDynamicArray(int n)
{
	int* d = new int[n];
	for (int i = 0; i <= n; ++i)
	{
		d[i] = i;
	}
	return d;

}