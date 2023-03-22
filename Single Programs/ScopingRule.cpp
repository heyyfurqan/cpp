// ScopingRule.cpp : Program to demonstrate scoping rule inside C++

#include <iostream>
using namespace std;

int g = 8;		// Global Scope
int main()
{
	int g = 5;		// Local Scope (only inside main function)
	{
		int g = 2;		// Local Scope (only inside this block)
		cout << g << endl;
	}
	cout << g << endl;
	cout << ::g << endl;		// We used scope resolution (::) to access the global variable g
}