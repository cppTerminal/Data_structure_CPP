### Operators

& : Address of operator.

	//& : address operator provides the memory address of a variable
	int y = 10;
	std::cout << &y << std::endl;  // Address of y

When printing addresses for char variables, casting is needed to see the address instead of the character value:

	char x = 'A';
	std::cout << (&x) << std::endl;			// cout << &char = VALUE of char 
	std::cout << (void*)(&x) << std::endl;    	// cout << (void *)&char = Address

---------------------------------------------
	
// Call by value
/*
funciton(var);->function(local_var)  
Local changs 
Var Intact 
*/

	    before								 later
	--------------- 					---------------   
m		 10				0x789				 10	
	---------------						---------------
						
	 --------------- 					---------------
&f	|	 10 		|	0xabc				 11	
	---------------						---------------



|				|
|				| f  = 10
|	  | 10 |	| f  = f + 1
|		f		| f  = 11
 ---------------
|				|
|				|	f  = 10
|	  | 10 |	|	f  = f + 1	
|		m		|	m  = 10, f = 11
----------------

// Call by Address
/*
funciton(&var);->function(*local_var)         

Accept address
Both variable updates
value of Address is actually changing.
Playing with memory location  -> rather than copying 
*/

m & f both are at same memory location

	before								later
 --------------- 					---------------
|	| 10 |		|	abc					 11	
 ---------------					---------------


|				|   f  = abc
|				|  *f  = 10
|	  | abc |	|  *f  = *f + 1
|	    f		|  abc  = 11
 ---------------
|				|
|				|	m  = 10
|	  | 10 |	|	f  = abc	
|	&m = abc	|	m  = 10, f = 11
 ---------------

// Call by reference  &y = x; 
funciton(&var);->function(local_var)


int &y = x;   reference to variable 
			  It non mutable

value			   10
reference    	  x, y 

 y=y+1		//x b change ho gya h 
value			   11
reference    	  x, y

int z = 30;
y = z;			// changes x, y = 30
	
value			   30
reference    	  x, y




	before								later
 --------------- 					---------------
|	| 10 |		|	abc					 11	
 ---------------					---------------



|				|   f  = &m
|				|  *f  = * &f
|	  | &m |	|  *f  = *f + 1
|	    f		|  
 ---------------
|				|
|				|	m  = 10
|	   10		|	f  = &m	
|	&m = abc	|	m  = 10, f = 11
 ---------------


 Major difference between two is 
 f = 10  rather than address/reference  f = &m
 f = abc rather than reference f = &m
 f = &m  reference 



 ------------------------------------------------------
 # Array

 // datatype NameOfArray[size]

 Array name behaves like poitner but not a actual pointer.
 Array 
 a[i] = a+i		-->

 int *ptr = (int*)malloc(sizeof(int))
 

 // Pointer can be reassigned but array can not be reassigned to another value.


 Static vs Dynamic
 ================

 int a[n]; // Static Allocation

 call funciton created in stack. 
 any operation on stack will get deleted if not returned (void funciton())
 

 Heap meomry is outside call stack. 
 heap object does not get destroyed on return. 
 it destroys on program completion.

 


 --------------------------------
 int arr[10] = {1,3,4,5,5,5,6};
 char arrC[10] = "poonam";

 Overloading of the 
 std::cour << (int_type)
 std::cour << (char_ type_)


 std:cout << arr;  <--- prints address of integer type array
 std:cout << arrC;  <--- prints address of char type array


 char name[100] = "poonam"; auto terminated by null character
 char name[100] = {'p','o','o','n','a','m'};  no terminaltion
 char name{'p','o','o','n','a','m'};  no terminaltion

// input using loop
for(int i = 0; i<size; i++)
{
cin >> name[i];
}
std::cout << name; 

// better way
cin >> name;			// untill space detected. auto terminated by null character

std::cout << name; 


cin.get() --> reads line
cin.getline() --> array_name, size, 'condition'

strlen(array)_ --. no o char includeind space, newline
sizeof(array) --> arrry size

------------------------------

functors

C++ functor is function object is a class or struct object
that can be called like a function

stl algorithms uses it

class functor{
};

functor foo; -- its an object 

foo();		-- object is called as fucntion

foo(arg)    -- can be provided argument 

int foo(int &) -- can have return type
 


 ----------------------------------

 exception handling


cerr : stderr


std::exception  parenet calss of all c++ exceptions
std::bad_alloc  dynamica memory fails
std::bad_cast  c++ attempt
std::bad_exception


std::cerr << ex.what();_



-------------------------------

Inheritance 

Provides a way creating new classes from existing classes

New class contains data and behaviour of existing class
	- allows reuse of existings classes without worrying about testing of already implemented mehtods
	(well tested classes so no need to worry) 
	- allows modifications of methods of xistings class without modifiying original classes


	inherited class : public base
	{

	}


related classes, common details abstact out 

	clss User {
	name, 
	handle
	action();
	};

	class player : public User
	{
	 streanth;
	 action() override;
	}

	class enemy : public User
	{
	 running speed;
	 action() override;
	};

	 ------------------------------------------------------

Access Modifier : Public, private, public

Protected : 
- accessible from base calss iteself
- accessible from class derived from base
- NOt accessible by object of base or derived 
- means setMethod() and getMethod() works but p.protected_member = "xyz" not works


class child : public Base
{};

//Public Inheritane
Parent =	Public -: public in child
			protected -: protected in child. 
			private -: no access in get 

	
//Private Inheritance
Parent =	Public		-: private in child
			protected	-: private in child. 
			private		-: no access


----------------------------------------
// Child class does not inherit cTor, destructor, overloaded assignment operator from base class

// When child class is created : base class constructor executes and derived contructor executes
// for Desctructor, order is opposite.


------------------------------

polyphormism - having many forms

int max(int a, int b)
{
return --------
}

float max(float a, float b)
{
	return float

}


^|^ --- COMPILE TIME BINDING OR EARLY BINDING

							polyphormism
					
					|								|
			compile time						runtime polyphormism
				/			\
			|				   |					
function overloading	Operator overloading		[virtual fucntions]


RunTime polyphormism:


	runTimePolyClass* u = new runTimePolyClass();		// Should Call User Class Dislpay()
	u->display();

	runTimePolyClass* p = new runTimePolyPlayer();		// Should Call User pLAYER Dislpay(). bUT NOT happening
	p->display();

	bininding is alwayss calling base class method().


	//Rut time polymortphism achieved by adding vitual keyword in the base class to the method.


	//Abstract classes 



	-------------------------- Generic programming

	Function template
		int max (int, int);
		float max(float, float);
		string max(string, string);

		template<typename T, typename U>
		T function_Name(T param2, U param2)
		{
			return type_T;
		}_

		function_name<int, float>(int, float);
		function_name<int, int>(int, int);
	
	
	Class Template
		To create a single class to work with different data type
		Class template comes in handy as they can make our code shorter and management.

		template<class T>
		class classname
		{
		private :
			T var;
		};
		

	
	------------------- OOP
	// build a multiplayer guess	game 
	// game decides random number x between 1-10;
	// player who guess x correclty win the match
	// if no one able to guess correctly the we will repeat fame
	.. with game choosing random number

	
	int main()
	{
		// player knows : name, secondName, handle, guess
		// player behaviour : makeGuess(), changeHandle();

		player p1;
	
	}

	only single ctror will be called.
	ctror is as same name as class name
	ctor over-rider to compiler default over ride
	ctor overloading possible
	ctror can be used to initialise attributes.


	getter() setter()
	------------

	constant -> const 
	initialization allowed, assignement not

	class_ctor(int x) : datamember(value)_ -- initialization 


	data member is not changng in function then 
	we can put const for function 

	void functom() const
	{
	}


	copy constroctor
	GuessGame g1(string, string, int);
	g1.display();

	GuessGame g2(g1);   copy constror

	//g1 pass by reference bhejna padega.
	className(className &g1) : fistname(first), secondName(second)
	{
	this->handle = g1.handle;
	}


	guessGame g2 = g1 : copy assignment operator

	must be assigned by values, initization of values for ctor will not work;



	#ifndef Token
