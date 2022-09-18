// ArrayTesting.cpp : Program to check basic functions of an array

#include <iostream>
using namespace std;

int main()
{
	int A[5] = { 1,2,3,4,5 };		// Array declaration and initialization
	for (int i = 0; i < 5; i++)
	{
		cout << A[i] << endl;
	}
	int B[3];		// Array declaration
	cout << "Enter elements for array: " << endl;
	for (int i = 0; i < 3; i++)		// Taking input in array
	{
		cin >> B[i];
	}
	for (int i = 0; i < 3; i++)		// Taking output from array
	{
		cout << B[i] << endl;
	}
	int C[] = { 0,3,4,65,7,3,5 };		// Array size not defined, so size is equal to no. of elements stored in it
	cout << "Elements of D array are: " << endl;
	int D[5] = { 1,2 };		// Only 2 elements declared, rest of the array is 0
	for (int i = 0; i < 5; i++)
	{
		cout << D[i] << endl;
	}
	cout << "Accessing elements quickly using for each loop: " << endl;
	for (auto x : C)		// For each loop to access elements quicker
	{
		cout << x << endl;
	}
}