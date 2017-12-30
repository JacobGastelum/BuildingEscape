// Pointers and References Practice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int val = 1;
int val2 = 2;
int* valPtr = &val;
int& valRef = val;

void printVals() 
{
	std::cout << "Values:" << std::endl;
	std::cout << "val: " << val << " val2: " << val2 << " valPtr: " << *valPtr << " valRef: " << valRef << std::endl;
	std::cout << "Address:" << std::endl;
	std::cout << "val: " << &val << " val2: " << &val2 << " valPtr: " << valPtr << " valRef: " << &valRef << std::endl;
}

int main()
{
	// Print initial values
	printVals();
	// Repoint pointer
	valPtr = &val2;
	printVals();
	// Rewrite value at pointer location
	*valPtr = 3;
	printVals();
	// Rewrite value at reference location
	valRef = 4;
	printVals();

    return 0;
}

