// PointerOperations.cpp : Program to demonstrate the 5 operations on pointers

#include <iostream>
using namespace std;

int main()
{
	int A[5] = { 1,2,3,4,5 };
	int* p = A;
	int* q = &A[3];
	cout << "Pointer is pointing to value: " << *p << endl;
	p++;		// Pointer will point to next location now
	cout << "After p++, pointer is pointing to value: " << *p << endl;
	p++;		// Pointer will point to next location now
	cout << "After p++ again, pointer is pointing to value: " << *p << endl;
	p--;		// Pointer will point to previous location now
	cout << "After p--, pointer is pointing to value: " << *p << endl;
	p--;		// Pointer will point to previous location now
	cout << "After p-- again, pointer is pointing to value: " << *p << endl;
	p = p + 3;		// Pointer moves 3 locations forward
	cout << "After p+3, pointer is now pointing to: " << *p << endl;
	cout << "Adress of p: " << p << endl;
	cout << "Values inside A array are: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << *(A + i) << endl;		// Can also use : cout<<*(p+i)<<endl;
	}
	cout << "Adresses of A array are: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << (A + i) << endl;
	}
	p = &A[0];
	cout << q - p << endl;		// q-p=3, so they are 3 elements away from each other
	cout << p - q << endl;		// -3 means p is behind q by 3 places
}