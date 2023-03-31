// StarPatternUsingNestedForLoop.cpp : Printing a star pattern using nested for loops

#include <iostream>
using namespace std;

int main()
{
	cout << "One pattern: " << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i>=j)
			{
				cout <<"* ";
			}
		}
		cout << endl;
	}
	cout << "Another pattern: " << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j >= i)
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