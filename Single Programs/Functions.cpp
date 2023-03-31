// Functions.cpp : Program to demonstrate functions

#include <iostream>
using namespace std;

int add(int a, int b)
{
	return a + b;
}
int main()
{
	int x = 5, y = 7, sum;
	sum = add(5, 7);
	cout << "Sum is: " << sum;
	return 0;
}