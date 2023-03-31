// SumOfNFirstNaturalNumbers.cpp : Calculate sum of N number of first natural numbers
#include <iostream>
using namespace std;
int main()
{
    int sum, n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    sum = (n * (n + 1)) / 2;
    cout << "Sum of first n natural numbers is " << sum;
    return 0;
}