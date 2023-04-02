// DynamicArrayUsingPointer.cpp : C++ program to create dynamic-sized array using pointers

#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "Tell the size of array you would like to create: \n";
	cin >> size;
	int* p = new int[size];	// creates array of required size
	cout << "Size of array is: " << sizeof p << endl;
	p[0] = 12;
	delete []p;
	// Suppose we want to change the size of array
	cout << "Enter the new size of array: ";
	cin >> size;
	p = new int[size];
	cout << "Size of array after changing size is: " << sizeof p << endl;
	return 0;
}