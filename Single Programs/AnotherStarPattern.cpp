// AnotherStarPattern.cpp : Program to print a star pattern using nested for loops

#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i+j>=3)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
}