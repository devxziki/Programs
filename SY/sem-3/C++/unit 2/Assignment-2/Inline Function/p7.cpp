#include <iostream>
using namespace std;

// Inline function to calculate Simple Interest
inline float simpleInterest(float principal, float rate, float time) 
{
    return (principal*rate*time) /100.0;
}

int main() 
{
    float principal, rate, time;

    cout << "Enter Principal amount: ";
    cin >> principal;

    cout << "Enter Rate of interest (%): ";
    cin >> rate;

    cout << "Enter Time (years): ";
    cin >> time;

    cout << "Simple Interest: " << simpleInterest(principal,rate,time) << endl;

    return 0;
}
