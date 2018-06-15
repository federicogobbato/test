// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdlib.h>
#include <iostream>

#include "testClasses.h"


void gameLoop() {

	//A* a1 = new B();
	//A* a2 = new B();

	//A* a1 = &B::getInstance();
	//A* a2 = &B::getInstance();

	B* a1 = B::getInstance();
	B* a2 = B::getInstance();

	std::cout << "a1: " << &(*a1) << std::endl;
	std::cout << "a2: " << &(*a2) << std::endl;
}

int main()
{
	gameLoop();

	system("PAUSE");
    return 0;
}

