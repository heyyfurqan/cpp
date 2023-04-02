// Arrays.cpp : C++ program to try shit with Arrays

#include <iostream>
using namespace std;

int main()
{
	int A[4] = { 2,4,6,8 };
	int B[4] = { 3,6 }; // last 2 values are zero
	int C[] = { 1,3,5,7,9 }; // automatically allocates size according to data
	char D[4] = { 'A',66,'C',68 }; // 2 ASCII inputs

	for (int x : A) // for each loop used especially for arrays to print each element of array
	{
		cout << x;
	}
	cout << endl;
	for (int x : B) // (for each x in B)
	{
		cout << x; // last 2 values will be zero
	}
	cout << endl;
	for (int x : C)
	{
		cout << x;
	}
	cout << endl;
	for (char x : D)  // prints values in char
	{
		cout << x;
	}
	cout << endl;
	for (int x : D)  // prints ASCII values
	{
		cout << x << " ";
	}
	cout << endl;
	for (auto x : D)  // automatically determines data type
	{
		cout << x;
	}
	cout << endl;
	for (int x : C)
	{
		cout << ++x; // only prints the modified values, instead of changing them in array
	}
	cout << endl;
	for (int &x : C)  // If we add a reference, it also changes values in array
	{
		cout << ++x;
	}
}