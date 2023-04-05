// SizeOfAnArray.cpp : C++ program to find size of an array

#include <iostream>
using namespace std;

int main()
{
	int arr[5] = { 1,2,4,5,6 };
	cout << "Size of array is: " << sizeof(arr) / sizeof(arr[0]) << endl;
	return 0;
}