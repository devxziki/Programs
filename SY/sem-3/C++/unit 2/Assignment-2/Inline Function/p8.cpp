#include <iostream>
using namespace std;

// Inline function to check if a year is leap year
inline bool isLeapYear(int year) 
{
    // Leap year if divisible by 400 or (divisible by 4 and not by 100)
    return ( (year%400==0) || (year%4==0 && year%100!=0));
}

int main() 
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year)) 
	{
        cout << year << " is a Leap Year." << endl;
    } 
	else 
	{
        cout << year << " is NOT a Leap Year." << endl;
    }

    return 0;
}
