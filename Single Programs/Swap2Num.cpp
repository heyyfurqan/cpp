// Swap2Num.cpp : C++ Program to swap two variables without using third variable

#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter a and b: " << endl;
	cin >> a >> b;
	cout << "Before swap: " << endl << "a: " << a << " b: " << b << endl;
	a += b;
	b = a - b;
	a = a - b;
	cout << "After swap: " << endl << "a: " << a << " b: " << b << endl;
}