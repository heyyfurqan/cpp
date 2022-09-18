// SumOfArrayElements.cpp : Program to add all elementrs of an array

#include <iostream>
using namespace std;

int main()
{
	int sum = 0, A[5];
	cout << "Enter elements of array to add: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> A[i];
		sum += A[i];
	}
	cout << "Sum of array elements is: " << sum << endl;
	return 0;

}