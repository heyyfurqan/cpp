// DistinctInArray.cpp : C++ program to count distinct elements in array

#include <iostream>
using namespace std;

void isDistinct(int a[])
{
	int counter = 0;
	bool isDistinct = true;
	for (int i = 0; i <= 5; i++)
	{
		for (int j = i-1; j >= 0; j--)
		{
			if (a[i] == a[j])
			{
				isDistinct = false;
				break;
			}
		}
		if (isDistinct == true)
		{
			counter++;
		}
	}
	cout << "Distinct elements are: " << counter << endl;
}

int main()
{
	int arr[5];
	cout << "Enter array elements \n";
	for (auto& x : arr)
	{
		cin >> x;
	}
	isDistinct(arr);
	return 0;
}