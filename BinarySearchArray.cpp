// BinarySearchArray.cpp : C++ program to demonstrate Binary Search Algorithm in array

#include <iostream>
using namespace std;

int A[11], low = 0, high = 10, mid;

int binarySearch(int k)
{
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (k == A[mid])
		{
			cout << "Key element found at " << mid << " position\n";
			return 0;
		}
		else if (k < A[mid] )
		{
			high = mid - 1; // because we've already checked mid
		}
		else
		{
			low = mid + 1;
		}
	}
	cout << "Key element not found in array.";
}

int main()
{
	int key;
	cout << "Enter array elements in ascending order: \n";
	for (int i = 0; i < 11; i++)
	{
		cin >> A[i];
	}
	cout << "Enter key element to find: \n";
	cin >> key;
	binarySearch(key);
	return 0;
}