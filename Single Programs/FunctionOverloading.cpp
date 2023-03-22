// FunctionOverloading.cpp : Program to demonstrate function overloading in C++

#include <iostream>
using namespace std;

int add(int a, int b)
{
	return a + b;
}
float add(float a, float b)
{
	return a + b;
}
int add(int a, int b, int c)
{
	return a + b + c;
}
int main()
{
	int a, b, c, sum;
	float addd;
	cout << "Enter numbers: " << endl;
	cin >> a >> b;
	sum = add(a, b);
	cout << "Sum of numbers is: " << sum << endl;
	float d, e;
	cout << "Enter numbers: " << endl;
	cin >> d >> e;
	addd = add(d, e);
	cout << "Sum of numbers is: " << addd << endl;
	cout << "Enter numbers: " << endl;
	cin >> a >> b >> c;
	sum = add(a, b, c);
	cout << "Sum of numbers is: " << sum << endl;
}