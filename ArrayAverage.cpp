//  ArrayAverage.cpp : C++ program to find average of an array

#include <iostream>
using namespace std;

int main()
{
	int n;
	float array[69], sum = 0.0, average;
	cout << "Enter number of elements inside array: \n";
	cin >> n;
	cout << "Enter array elements: \n";
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
		sum += array[i];
	}
	average = sum / n;
	cout << "Average of all array elements is: " << average;
	return 0;
}