#include <iostream>
using namespace std;

// Inline function to add two integers
inline int add(int a, int b) 
{
    return a+b;
}

// Inline function to multiply two integers
inline int multiply(int a, int b) 
{
    return a*b;
}

int main()
{
    int num1=5, num2=10;

    cout << "Sum: " << add(num1, num2) <<endl;
	cout << "Product: " << multiply(num1, num2) << endl;

    return 0;
}
