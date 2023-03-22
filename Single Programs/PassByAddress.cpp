// PassByAddress.cpp : Program to show pass by address

#include <iostream>
using namespace std;

void swap(int* a, int* b)		// We can see that this function can access the variables of the main function,
{								// A function can't access the parameters of another function, but pointers give it this ability
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int x = 10, y = 20;
	swap(&x, &y);
	cout << x << " " << y;		// Here, swap function can access parameters and has swapped them. 
}