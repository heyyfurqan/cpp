// GreaterNumber.cpp : Program to find greater of two numbers using conditional statements

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter value of a and b: " << endl;
	cin >> a >> b;
	if (a > b)
	{
		cout << "a is greater than b!" << endl;
	}
	else
	{
		cout << "b is greater than a!" << endl;
	}
	return 0;
}