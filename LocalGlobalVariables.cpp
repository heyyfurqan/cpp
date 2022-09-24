// LocalGlobalVariables.cpp : Program to demonstrate local and global variables

#include <iostream>
using namespace std;

int doge = 69;		// Global variable, can be used everywhere
void fun()
{
	int a;		// Local variable, only can be used inside function fun
	a = 5;
	cout << a << endl;
	cout << doge << endl;
}
int main()
{
	int c;		// Local variable, only accessible by main function
	c = 16;
	fun();
	cout << c << endl;
	cout << doge << endl;
}