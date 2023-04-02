// AccessingHeap.cpp : C++ program to access heap memory using pointers

#include <iostream>
using namespace std;

int main()
{
	int* p;
	p = new int[5];	// creates new array in heap and points to its starting address
	p[0] = 69;	// storing data in array using pointer
	p[1] = 2, p[2] = 3, p[3] = 4, p[4] = 5;
	cout << "Elements in array are: ";
	for (int i = 0; i < 5; i++)
	{
		cout << p[i] << " ";
	}
	delete []p;	// deletes array (using pointer)
	p = nullptr;	// pointer no long pointing
	return 0;
}