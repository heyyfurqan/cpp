// OneMoreStarPattern.cpp : This is the last star pattern

#include <iostream>
using namespace std;

int main()
{
	int space, rows;
	cout << "Enter number of rows: " << endl;
	cin >> rows;
	for (int i = 0; i < rows; i++)
	{
		for (space = i; space < rows; space++)
		{
			cout << "  ";
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}