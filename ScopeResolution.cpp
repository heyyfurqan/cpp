// ScopeResolution.cpp : C++ program to show scope resolution of variables

#include <iostream>
using namespace std;

int x = 10;
int main()
{
	int x = 20;
	{
		int x = 30;
		cout << "1. " << x << endl;
	}
	cout << "2. " << x << endl;
	cout << "3. " << ::x;	// :: is scope resolution operator for global scope
}