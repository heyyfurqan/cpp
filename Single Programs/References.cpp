// References.cpp : Program to demonstrate use of references

#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int& y = x;		// Reference set (y is a refernce to x)(Reference must be initialized when it is declared)
	x++;
	cout << "Value of x is : " << x << endl;
	y++;
	cout << "Value of x is : " << x << endl;
	cout << "Address of x: " << &x << endl;
	cout << "Address of y: " << &y << endl;
	return 0;
}