// DiscountCalculator.cpp : Program to calculate discount from bill amount

#include <iostream>
using namespace std;

int main()
{
    float billAmount, discount;
    cout << "Enter your bill amount: " << endl;
    cin >> billAmount;
    if (billAmount>=500.0)
    {
        discount = 20;
        discount /= 100;
        billAmount = billAmount - billAmount * discount;
        cout << "Your discount is: " << discount * 100 << "%" << endl;
        cout << "Your bill after discount is: " << billAmount << endl;
    }
    else if (billAmount>=100 && billAmount<500)
    {
        discount = 10;
        discount /= 100;
        billAmount = billAmount - billAmount * discount;
        cout << "Your discount is: " << discount * 100 << "%" << endl;
        cout << "Your bill after discount is: " << billAmount << endl;
    }
    else
    {
        cout << "No discount for you :(" << endl;
    }
    return 0;
}