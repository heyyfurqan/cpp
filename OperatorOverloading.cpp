// OperatorOverloading.cpp : Program to demonstrate operator overloading in C++

#include <iostream>
using namespace std;

class complex
{
private:
	int real;
	int imaginary;
public:
	complex(int r=0, int i=0)		// Constructor
	{
		real = r;
		imaginary = i;
	}
	complex operator+(complex x)		// Here, we have overloaded the + operator to another function
	{
		complex temp;
		temp.real = real + x.real;		// Here, the real part belongs to the object upon which the function is called (In this case, it is c1)
		temp.imaginary = imaginary + x.imaginary;
		return temp;
	}
	void getcomplex()
	{
		cout <<real << " + " << imaginary<<"i";
	}
};

int main()
{
	complex c1(4, 5);
	complex c2(6, 7);
	complex c3;
	c3 = c1 + c2;		// This + points to above operator+ function
	cout << "The values of c3 are: "; c3.getcomplex();
}