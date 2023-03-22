// LeapYearChecker.cpp : Program to check if a year is leap year or not

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the year: " << endl;
    cin >> year;
    if (year%100==0)
    {
        if (year/=100;year%4==0)
        {
            cout << year*100 << " is a leap year" << endl;
        }
        else
        {
            cout << year*100 << " is not a leap year" << endl;
        }
    }
    else
    {
        if (year%4==0)
        {
            cout << year << " is a leap year" << endl;
        }
        else
        {
            cout << year << " is not a leap year" << endl;
        }
    }
    return 0;
}