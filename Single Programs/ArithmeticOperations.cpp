// 10 - Sep - 2022
// ArithmeticOperations.cpp : Demonstrating the use of all arithmetic operations
#include <iostream>
using namespace std;
int main()
{
	int a = 13, b = 4, sum, difference, product, quotient, mod;
	float floatQuotient;
	sum = a + b;
	difference = a - b;
	product = a * b;
	quotient = a / b;
	mod = a % b;
	floatQuotient = (float)a / b;		// Here, we have used type casting to convert the quotient to a float
	cout << "Sum is: " << sum << endl;
	cout << "Difference is: " << difference << endl;
	cout << "Product is: " << product << endl;
	cout << "Quotient is: " << quotient << endl;
	cout << "Mod is: " << mod << endl;
	cout << "FloatQuotient is: " << floatQuotient << endl;
}