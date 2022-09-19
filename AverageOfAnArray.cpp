// AverageOfAnArray.cpp : Program to get average of all elements in an array

#include <iostream>
using namespace std;

int main()
{
	int A[3][3], average, sum = 0;
	cout << "Enter elements inside the array: " << endl;
	for (auto& x : A)
	{
		for (auto& y : x)
		{
			cin >> y;
			sum += y;
		}
	}
	average = sum / 9;
	cout << "Average of all elements inside array is: " << average << endl;
	return 0;
}