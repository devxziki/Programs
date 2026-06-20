#include <iostream>
using namespace std;

// Inline function to convert Celsius to Fahrenheit
inline float celsiusToFahrenheit(float celsius) 
{
    return (celsius*9.0/5.0)+32.0;
}

int main() 
{
    float celsius;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(celsius) << "F" << endl;

    return 0;
}

