#include <iostream>
using namespace std;

// Inline function to reverse an integer
inline int reverseNumber(int num) 
{
    int reversed=0;
    while (num!=0) 
	{
        int digit = num % 10;           // extract last digit
        reversed = reversed * 10 + digit; // add digit to reversed number
        num /= 10;                      // remove last digit
    }
    return reversed;
}

int main() 
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "Reversed number: " << reverseNumber(number) << endl;

    return 0;
}

