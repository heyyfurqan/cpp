// ClassForRationalNumbers.cpp : Program to demonstrate a class for rational numbers by overloading + and << operators

#include <iostream>
using namespace std;

class rational
{
private:
    int numerator;
    int denominator;
public:
    rational(int p = 0, int q = 0)
    {
        numerator = p;
        denominator = q;
    }
    friend rational operator+ (rational a, rational b);
    friend ostream& operator<< (ostream& o, rational& x);
};

rational operator+ (rational a, rational b)
{
    rational temp;
    temp.numerator = a.numerator + b.numerator;
    temp.denominator = a.denominator + b.denominator;
    return temp;
}
ostream& operator<< (ostream& o, rational& x)
{
    o << x.numerator << "/" << x.denominator;
    return o;
}

int main()
{
    rational r1(4, 7);
    rational r2(3, 3);
    rational r3;
    r3 = r1 + r2;
    cout << r3;
}