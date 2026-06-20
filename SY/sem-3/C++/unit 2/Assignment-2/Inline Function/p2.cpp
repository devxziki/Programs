#include <iostream>
using namespace std;

// Inline function to find the maximum of two numbers
inline int maxOfTwo(int a, int b) 
{
    return (a>b) ? a:b;
}

int main() 
{
    int num1, num2;
    cout << "Enter  Number 1: ";
    cin >> num1;
    cout << "Enter  Number 2: ";
    cin >> num2;

    int maximum=maxOfTwo(num1, num2);
    cout << "The greater number is: " << maximum <<endl;

    return 0;
}
