#pragma once
#include<iostream>
class runTimePolyClass {
public:
	void display();
};

class runTimePolyPlayer : public runTimePolyClass
{
public:
	void display();
};

class runTimePolyEnemy : public runTimePolyClass
{
public:
	void display();

};

void greet(runTimePolyClass& x);