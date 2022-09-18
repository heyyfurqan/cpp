// BinarySearchInArray.cpp : Program to implement binary search in an array in C++

#include <iostream>
using namespace std;

int main()
{
	int A[10] = { 2,4,6,8,10,13,15,17,23,29 };
	int low = 0, high = 9, mid, key;
	cout << "Enter key element to search for: " << endl;
	cin >> key;
	while (low<=high)
	{
		mid = (low + high) / 2;
		if (key==A[mid])
		{
			cout << "Key element found at " << mid << " location" << endl;
			return 0;
		}
		else if (key>A[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	cout << "Key element not found in array" << endl;
}