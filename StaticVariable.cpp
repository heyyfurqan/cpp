// StaticVariable.cpp : C++ program to show static variables

#include <iostream>
using namespace std;
int a = 5;
void fun()
{
	static int v = 12;	// static means it's global but only accessible by function fun
	cout << a++ << " " << ++v << endl;
}

void main()
{
	fun();
	fun();
	fun();
}