// BitwiseOperators.cpp : Program to demonstrate use of bitwise operators in C++

#include <iostream>
using namespace std;

int main()
{
	int a = 4, b = 7;		// a = 00000100, b = 00000111

	cout << "a = " << a << "," << " b = " << b << endl;
	cout << "a & b = " << (a & b) << endl;		// prints 00000100

	cout << "a | b = " << (a | b) << endl;		// prints 00000111

	cout << "a ^ b = " << (a ^ b) << endl;

	cout << "~a = " << (~a) << endl;

	cout << "b << 1" << " = " << (b << 1) << endl;

	cout << "b >> 1 " << "= " << (b >> 1) << endl;

	return 0;
}