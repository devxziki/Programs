#include <iostream>
using namespace std;

// Inline function to check if a number is positive, negative or zero
inline string checkNumber(int num) 
{
    // Using nested ternary operator
    return (num>0) ? "Positive":(num<0) ? "Negative":"Zero";
}

int main() 
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "The number is " << checkNumber(number) << "." << endl;

    return 0;
}
