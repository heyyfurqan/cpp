// InsertionOperatorOverloading.cpp : Program to demonstrate overloading of insertion (<<) operator

#include <iostream>
using namespace std;

class complex
{
private:
	int real;
	int imaginary;
public:
	complex(int r = 0, int i = 0)
	{
		real = r;
		imaginary = i;
	}
	friend ostream& operator<< (ostream& o, complex x);
};
ostream& operator<< (ostream& o, complex x)		// Function of ostream type which needs to be passed as reference
{
	o << x.real << " + " << x.imaginary << "i";
	return o;
}

int main()
{
	complex c1(7, 9);
	cout << c1;		// operator<<(cout,c1)  --> Equivalence
}