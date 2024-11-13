#include "Array_1.h"
#include "Operator.h"
#include "vector"
#include "algorithm"
//#include "LinearSearch.h"
#include "Inheritance.h"
#include "runTimePolymorphism.h"
#include "AbstractClass.h"

#include<functional>
//Library Functor
// arithmatic : plus, minus, multiplies, etc

#include <iostream>
#include "guessGame.h"

class Hello
{
public:
	void operator()() {
		std::cout << "Functor object" << std::endl;
	}
	void operator()(std::string str){
		std::cout << "Functor object : " << str << std::endl;
	}
	
};
class Add {
	int base;

public : 
	Add(int base) {
		this->base = base;
	}
	int operator() (int a, int b) {
		return (a + b + base);
	}

};
//using namespace std;
int main()
{
	//freopen("./Error.txt", "w", stderr);
//	----functor---------------------

	Hello h;
	h();    // its an object but act as function.
	h("Poonam");
	
	
	Add add1(3);
	std::cout << "add : " << add1(10, 20) << std::endl;
	std::cerr << "------------functor error---------------" << std::endl;

	std::plus<int> add;
	std::cout << "add : " << add(10, 20) << std::endl;
	//add(10, 2);

	std::vector<int> v = {10, 20, 4, 5, 40, 1};
	sort(v.begin(), v.end(), std::greater<int>());

	for (auto x : v)
	{
		std::cout << ", " << x;
	}

	Array_intro();
	Operators();

	int a[10] = { 5,4,77,88,4,5,3,7,3,9 };

	Array_inFunction(a);
	
	int n = 15;
	int *dArray = createDynamicArray(n);
	std::cout << "Dyanmic Array" << std::endl;

	for (int i = 0; i <= n; ++i)
	{
		std::cout << "dA :" << dArray[i] << std::endl;
	}
	//delete[] dArray;



	//------------------------ Error Handling
	int arr[5] = {2, 4,5,6,7};
	int ind = 7; // rand() % 10;
	int no = 0; // rand() % 2;

	try {
		if (ind < 0, ind>4) {
			throw "Error : Index Out of bound";
		}
		if (no == 0) {
			throw 0;
		}
		std::cout << "Division : " << ind << "," << no << "," << arr[ind] << "," << arr[ind] / no<< std::endl;
	}

	catch (const char* exception) // exception
	{
		std::cerr << "Error : Index Out of bound" << exception << std::endl;
	}
	catch (int &exception)  // other type of exception
	{
		std::cerr << "Divisuon by 0 : " << exception << std::endl;

	}

	//int ind = LinearSearch(a, 10, 12);

	//------------------------ Inheritance

	/*
	User u;
	u.name = "Abhishek";


	Player p;
	p.name = "Poonam";

	Enemy e;
	e.name = "babalu";

	//Test Public Member and method.
	e.display();
	u.display();
	p.display();


	//Test protected member
	//u.handle = "xz"; // protected member can not be accessed by object of base or derived class.
	u.takeAction();
	p.takeAction();		// but through some method() we can do that.


	//Test private 
	std::cout << u.getScore(10) << std::endl;   //base class & its object can access its private member thought method.
	
	std::cout << p.getScore(2) << std::endl;   // derived class or its object can not access base calss private member.
	*/
	
	//------------------------ Constructor in Inheritance


	//User u("Poonam", "24");
	//u.display();

	/*Player p("shreya", "24", 100);
	p.display();
	p.takeAction(2, 3);
	p.getScore(2);*/


	//------------------------ runTimePoly polymorphism

	//runTimePolyClass rtp;
	//runTimePolyPlayer rtPplayer;

	//rtp.display(); // run time binindg


	runTimePolyClass* u = new runTimePolyClass();
	u->display();

	runTimePolyClass* p = new runTimePolyPlayer();
	p->display();
	
	runTimePolyClass x1;
	greet(x1);

	runTimePolyPlayer x2;
	greet(x2);


	//------------------------ Abstract class

	dog d1, d2, d3;
	cat c1, c2, c3;

	Animal* animal = &c1;   //  animals
	animal->makeSound();
	
	//array of animal pointers
	Animal *pa[] = {&d1, &c2, &c3, &d2, &c1, &d3};   // array of animals
	//pa->makeSound();
	for (int i = 0; i < 6; i++)
	{
		pa[i]->makeSound();
	}



//	Animal animalSound;;   // C++ object of abstract class type is not allowed: function is a pure virtual function
	//animalSound.makeSound();  //


	//---------------- Game
	std::string player = "Poonam";
	std::string surname = "jangid";

	GamePlayer p1(player, surname, 3);;
	//p1.firstName = "poonam";
	//p1.secondName = "jan";

	p1.displayName();
	p1.displayGuess();
	return 0;

}
