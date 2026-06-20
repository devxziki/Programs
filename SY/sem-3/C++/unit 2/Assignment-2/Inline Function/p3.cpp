#include <iostream>
using namespace std;

// Inline function to calculate square
inline int square(int n) 
{
    return n*n;
}

// Inline function to calculate cube
inline int cube(int n) 
{
    return n*n*n;
}

int main() 
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Square of: " << num << square(num) << endl;
    cout << "Cube of:  " << num << cube(num) << endl;

    return 0;
}

