// ShortCircuit.cpp : Program to demonstrate ShortCircuiting in C++

#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 7, i = 6;
	if (a>b && ++i<b)		// Since, a<b here, so i is not incremented.
	{

	}
	cout << i << endl;
	if (a > b || ++i <= b)		// Here, a<b but ++i=b, so i gets incremented.
	{

	}
	cout << i << endl;
}