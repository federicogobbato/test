// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdlib.h>
#include <iostream>

#include "testClasses.h"


void gameLoop() {

	//Singleton1
	//A* a1 = B::getInstance();
	//A* a2 = B::getInstance();

	//Singleton2
	//A* a1 = &B::getInstance();
	//A* a2 = &B::getInstance();

	//Singleton3
	//A* a1 = new B();
	//A* a2 = new B();

	A* a1 = A::GenerateA(Atype::Btype);
	A* a2 = A::GenerateA(Atype::Btype);

	std::cout << "a1: " << &(*a1) << std::endl;
	std::cout << "a2: " << &(*a2) << std::endl;
}

int main()
{
	gameLoop();

	system("PAUSE");
    return 0;
}

