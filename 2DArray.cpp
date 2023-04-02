// 2DArray.cpp : C++ program to demonstrate use of 2D arrays in C++

#include <iostream>
using namespace std;

int main()
{
	int A[2][3] = { {1,2,3},{4,5,6} };  // 2D array initialization
	int B[2][3] = { 1,2,3,4,5,6 };  // Same elements, another method
	int C[2][3];
	cout << "Enter elements in C array: \n";
	for (auto& x : C)
	{
		for (auto& y : x)
		{
			cin >> y;  // This is correct way to input elements in 2D array using for each loop
		}
	}
	cout << "Array elements are: \n";
	for (auto& x : C)
	{
		for (auto& y : x)
		{
			cout << y << " ";
		}
		cout << endl;
	}
}