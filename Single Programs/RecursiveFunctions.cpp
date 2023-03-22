// RecursiveFunctions.cpp : Program to demonstrate use of recursive functions

#include <iostream>
using namespace std;

void fun(int x)
{
	if (x>0)
	{
		cout << x << endl;
		fun(x - 1);		// Function keeps on calling itself, but everytime, x gets lesser by 1
	}
}
int main()
{
	fun(5);
}