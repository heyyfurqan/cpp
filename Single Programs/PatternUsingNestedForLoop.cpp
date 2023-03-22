// PatternUsingNestedForLoop.cpp : Program to print a pattern of increasing numbers (a matrix) using nested for loops 

#include <iostream>
using namespace std;

int main()
{
	int counter = 1;
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			cout << counter << " ";
			counter++;
		}
		cout << endl;
	}
}