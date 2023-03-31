// MatrixAddition.cpp : Program to add two matrices

#include <iostream>
using namespace std;

int main()
{
	int A[3][3], B[3][3], sum[3][3];
	cout << "Enter values for first matrix: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "Enter values for second matrix: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> B[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum[i][j] = A[i][j] + B[i][j];
		}
	}
	cout << "The sum of two matrices is: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << sum[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}