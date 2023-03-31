// StaticVariables.cpp : Program to demonstrate use of static variables

#include <iostream>
using namespace std;

void fun()
{
	static int v = 0;		// v is static variable, it is not destroyed once fun() ends, scope only limited to fun()
	int a = 5;
	cout << v << " " << a << endl;
	v++;
}
int main()
{
	fun();
	fun();
	fun();
}