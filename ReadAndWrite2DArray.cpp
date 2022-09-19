// ReadAndWrite2DArray.cpp : Program to read and write data into a 2d array

#include <iostream>
using namespace std;

int main()
{
	int A[2][3] = { {2,4,6},{9,6,2} };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << A[i][j]<<" ";
		}
		cout << endl;
	}
	cout << "Using for each to read data from a 2d array: " << endl;
	for (auto& x:A)		// Using & for type inference
	{
		for (auto& y : x)
		{
			cout << y<<" ";		// In the same way, it can be used for takng values in array
		}
		cout << endl;
	}
}