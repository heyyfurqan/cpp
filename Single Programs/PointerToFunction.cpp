// PointerToFunction.cpp : Program to demonstrate use of pointer to a function

#include <iostream>
using namespace std;

int max(int x, int y)
{
	return x > y ? x : y;
}
int min(int x, int y)
{
	return x < y ? x : y;
}
int main()
{
	int (*fp)(int, int);		// Declaring pointer to a function (fp)
	fp = max;
	(*fp)(10, 5);		// max function is called
	fp = min;		// fp is initialized to min function
	(*fp)(10, 5);		// min function is called
	return 0;		// Here, function overriding is used internally to achieve runtime polymorphism
}