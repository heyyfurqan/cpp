// MaxElementFromArray.cpp : Program to find max element from an array

#include <iostream>
using namespace std;

int main()
{
	int max, A[7];
	cout << "Enter numbers in array: " << endl;
	for (int i = 0; i < 7; i++)
	{
		cin >> A[i];
	}
	max = A[0];
	for (int i = 0; i < 7; i++)
	{
			if (A[i]>max)
			{
				max = A[i];
			}
	}
	cout << "Max element in array is: " << max << endl;
}