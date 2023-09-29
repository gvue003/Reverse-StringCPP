// Reverse a String: Write a function to reverse a string without using built-in string reversal functions.

#include <iostream>
using namespace std;

int main()
{
    string str = "It's my first time using CPP!";
    int len = str.length();
    for (int i = len - 1; i >= 0; i--)
        cout << str[i];
    return 0;
}
