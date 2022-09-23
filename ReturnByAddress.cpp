// ReturnByAddress.cpp : Program to show an example where a function can return an address (we've seen examples of funtion taking address)

#include <iostream>
using namespace std;

int* fun(int size)
{
	int *p = new int[size];
	for (int i = 0; i < size; i++)
	{
		p[i] = i + 1;
	}
	return p;
}
int main()
{
	int* point = fun(5);
	cout << point;		// Returns address of the array
}