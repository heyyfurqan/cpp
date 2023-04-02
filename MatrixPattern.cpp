// MatrixPattern.cpp : C++ program to print a matrix pattern using nested for loops

#include <iostream>
using namespace std;

int main()
{
	int count = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << count << " ";
			count++;
		}
		cout << endl;
	}
}