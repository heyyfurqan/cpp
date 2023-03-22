// MultiplicationTable.cpp : Program to print multiplication table of a given number.

#include <iostream>
using namespace std;

int main()
{
    int num, i, num1;
    cout << "Enter number to print table for: " << endl;        // Using for loop
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    i = 1;
    cout << "Enter number to print table for: " << endl;        // Using while loop
    cin >> num1;
    while (i <= 10)
    {
        cout << num1 << " x " << i << " = " << num1 * i << endl;
        i++;
    }
    return 0;
}