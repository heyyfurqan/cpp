// Constructor.cpp : Program to demonstrate the use of constructor in C++

#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;
public:
    rectangle(rectangle& rec)       // Copy constructor, it's passed as a reference to another object to copy its properties
    {
        length = rec.length;
        breadth = rec.breadth;
    }
    rectangle()     // Non-parametrized constructor (user-defined)
    {
        length = 0;
        breadth = 0;
    }
    rectangle(int x, int y)      // Parametrized constructor
    {
        setLength(x);
        setBreadth(y);
    }
    void setLength(int l)
    {
        if (l < 0)
        {
            cout << "Length can't be negative.";
        }
        else
        {
            length = l;
        }
    }
    void setBreadth(int b)
    {
        if (b < 0)
        {
            cout << "Breadth can't be negative.";
        }
        else
        {
            breadth = b;
        }
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    rectangle r(10, 5);     // Parametrized constructor is called here
    cout << "Area of rectangle 1 is: " << r.area() << endl;
    rectangle r2(r);        // r2 object is created which has same properties as r (same values) 
    cout << "Area of rectangle 2 is: " << r2.area() << endl;        // Same area because it has same values
}