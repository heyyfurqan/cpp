// LinearSearchUsingFunction.cpp : Program to implement linear search using functions

#include <iostream>
using namespace std;

int key;
int linear_search(int A[],int key)
{
	for (int i=0; i < 10; i++)
	{
		if (key==A[i])
		{
			cout << "Key element found at " << i << " location." << endl;
			return i;
		}
	}
	cout << "Key element not found." << endl;
}

int main()
{
	int A[10];
	cout << "Enter elements inside array: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> A[i];
	}
	cout << "Enter key element to search for: " << endl;
	cin >> key;
	linear_search(A, key);
}