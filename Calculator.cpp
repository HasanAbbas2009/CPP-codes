// C++ Physics Wallah.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    cout << "Welcome to the Calculator made in C++\n";
    
    int n1;
    int n2;
    cout << "Enter 1st number\n";
    cin >> n1;
    cout << "Enter 2nd number\n";
    cin >> n2;

    char ch;
    cout << "A to add\n";
    cout << "S to subtract\n";
    cout << "M to multiply\n";
    cout << "D to divide\n";
    cin >> ch;
    switch (ch)
    {
    case('A') :
        cout << n1 + n2;
        break;

    case('S'):
        cout << n1 - n2;
        break;

    case('M'):
        cout << n1 * n2;
        break;

    case('D'):
        cout << n1 / n2;
        break;
    
    default:
        cout << "ERROR";
        break;

        }


    
}