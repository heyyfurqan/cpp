// Pointers.cpp : Program to demonstrate usage of pointers

#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int *p;		// Pointer declaration
	p = &x;		// Pointer initialization
	cout << x << endl;		// Prints value of x
	cout << &x << endl;		// Prints adress where x is stored
	cout << p << endl;		// Prints adress of x (p=&x)
	cout << *p << endl;	//Dereferencing 	// Prints the data the p is pointing to
	cout << &p << endl;		// Prints adress of pointer
}