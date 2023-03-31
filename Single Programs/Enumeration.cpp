// Enumeration.cpp : Program to demonstrate use of user-defined data type enum.

#include <iostream>
using namespace std;

// By default, value of monday is 0, tuesday is 1 and so on.
// Here, week is a user defined data type.
enum week { monday, tuesday, wednesday, thursday, friday, saturday, sunday = 69 };

int main()
{
    cout << "Monday has value " << monday << endl;
    week w;
    w = sunday;
    cout << w;
    return 0;
}