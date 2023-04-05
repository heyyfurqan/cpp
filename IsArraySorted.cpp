// IsArraySorted.cpp : C++ program to check if an array is sorted or not

#include <iostream>
using namespace std;

void isSorted(int a[])
{
	for (int i = 1; i < 5; i++)
	{
		if (a[i - 1] > a[i])
		{
			cout << "Not sorted.\n";
			return;
		}
	}
	cout << "Sorted.\n";
}

int main()
{
	int arr[5];
	cout << "Enter array elements \n";
	for (auto& x : arr)
	{
		cin >> x;
	}
	isSorted(arr);
}