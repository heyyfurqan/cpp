// IsPalindromeFunction.cpp : A program that checks whether the given string is palindrome or not using functiom

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
 
void Palindrome(string Arr)
{
    string B = Arr;
    reverse(B.begin(), B.end());
 
    if (Arr == B)
	{
        cout<< Arr<<" is a palindrome";
    }
	else
	{
        cout<<Arr<< " is not a palindrome";
    }
}
int main()
{
    string Arr;
    cin>>Arr;
    Palindrome(Arr);
 
    return 0;
}
