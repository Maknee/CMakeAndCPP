#include "lib1.h"
#include "lib2.h"

#include <iostream>

int main() 
{
	std::cout << "Hello world from main!" << std::endl;
	Lib1::Lib l1{};
	l1.Call();
	Lib2::Lib l2{};
	l2.Call();
	return 0;
}

