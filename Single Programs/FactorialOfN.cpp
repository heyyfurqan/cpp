#include <iostream>
using namespace std;

int factorial(int n)
{
	int factorial = 1;
	for (int i = 1; i <= n;)
	{
		factorial *= i;
		i++;
	}
	return factorial;
}
int main()
{
	int n;
	cout << "Enter number to find factorial of: " << endl;
	cin >> n;
	cout << "The factorial of " << n << " is: " << factorial(n) << endl;
}