// SumOfFirstnNaturalNumbers.cpp : Program to find sum of first n natural numbers using loops

#include <iostream>
using namespace std;

int main()
{
    int n, m, sum = 0, sum1 = 0;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    cout << "Enter the value of m: " << endl;
    cin >> m;
    int j = 0;
    while (j<=m)
    {
        sum1 += j;
        j++;
    }
    cout << "Sum of first " << m << " natural numbers is: " << sum1 << endl;
    return 0;
}