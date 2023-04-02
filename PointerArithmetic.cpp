// PointerArithmetic.cpp : C++ program to demonstrate operations allowed by pointers

#include <iostream>
using namespace std;

int main()
{
	int A[5] = { 1,3,5,7,9 }, distance;
	int* p = A;	// sets pointer to first element of array <-> *p = &A[0]
	cout <<"Pointer currently pointing to: "<< * p << endl;	// prints first element of array
	for (int i = 0; i < 5; i++)
	{
		cout << *p << " ";
		p++;
	}
	cout << endl;
	p = A;
	// Operation - 1
	p++;	// moves pointer forward to next element
	cout << "After p++, pointer currently pointing to: " << *p << endl; // prints 2nd element
	
	// Operation - 2
	p--;	// moves pointer backward to previous element
	cout << "After p--, pointer currently pointing to: " << *p << endl;	// 1st element
	
	// Operation - 3
	p += 3;	// moves pointer forward 3 places
	cout << "After p +=  3, pointer currently pointing to: " << *p << endl;
	
	// Operation - 4
	p -= 2;	// moves pointer back 2 places
	cout << "After p -= 2, pointer currently pointing to: " << *p << endl;
	
	// Operation - 5
	int* q = &A[4];
	distance = q - p;
	cout << "Distance between pointers p and q is: " << distance << " places"; // prints 3, which means q is 3 places forward from p
	return 0;
}