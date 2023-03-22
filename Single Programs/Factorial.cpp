// Factorial.cpp : Program to find factorial of a number

#include <iostream>
using namespace std;

int main()
{
    int num, factorial;
    cout << "Enter number to find factorial of: " << endl;
    cin >> num;
    factorial = num;
    for (int i = num-1; i >= 1; i--)
    {
        factorial *= i;
    }
    cout << "Factorial of " << num << " is: " << factorial << endl;
    return 0;
}