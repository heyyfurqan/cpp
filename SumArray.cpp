// SumArray.cpp : C++ program to find sum of all elements of an array, also the max element

#include <iostream>
using namespace std;

int main()
{
	int A[] = { 4,8,6,9,5,2,7 };
	int sum = 0, max = A[0];
	for (auto x : A)
	{
		sum += x;
		if (x > max)
		{
			max = x;
		}
	}
	cout << "Sum of all elements in array is: " << sum << endl;
	cout << "Max element in array is: " << max;
}