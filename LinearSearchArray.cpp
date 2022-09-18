// LinearSearchArray.cpp : program for implementing linear search in an array

#include <iostream>
using namespace std;

int main()
{
	int key, A[10];
	cout << "Enter elements of an array: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> A[i];
	}
	cout << "Enter key element to find in array: " << endl;
	cin >> key;
	for (int i = 0; i < 10; i++)
	{
		if (key==A[i])
		{
			cout << "Key element found at " << i << " position." << endl;
			return 0;
		}
	}
	cout << "Key not found." << endl;
}