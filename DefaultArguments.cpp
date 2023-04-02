// DefaultArguments.cpp : C++ program to demonstrate default arguments in functions

#include <iostream>
using namespace std;

int sum(int x, int y, int z = 0)	// here, z has a default value incase two parameters are passed
{
	return x + y + z;
}

int main()
{
	int a = 5, b = 6, c = 9;
	cout << "Sum of a and b is: " << sum(a, b) << endl;
	cout << "Sum of a, b and c is: " << sum(a, b, c) << endl;
	return 0;
}