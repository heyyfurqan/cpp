// MatrixMultiplication.cpp : Program to multiply two matrices

#include <iostream>
using namespace std;

int main()
{
	int A[2][3], B[2][3], C[2][3], row1, column1, row2, column2;
	cout << "Enter no of rows and columns for first matrix: " << endl;
	cin >> row1 >> column1;
	cout << "Enter no of rows and columns for second matrix: " << endl;
	cin >> row2 >> column2;
	while (column1!=row2)
	{
		cout << "Enter no of rows and columns for first matrix again: " << endl;
		cin >> row1 >> column1;
		cout << "Enter no of rows and columns for second matrix again: " << endl;
		cin >> row2 >> column2;
	}
	cout << "Enter elements of first matrix: " << endl;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < column1 ; j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "Enter elements of second matrix: " << endl;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < column2; j++)
		{
			cin >> B[i][j];
		}
	}
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < column2; j++)
		{
			C[i][j] = 0;
			for (int k = 0; k < column1; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	cout << "Product of two matrices: " << endl;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < column2; j++)
		{
			cout << C[i][j]<<" ";
			if (j == column2 - 1)
			{
				cout << endl;
			}
		}
	}
	return 0;
}