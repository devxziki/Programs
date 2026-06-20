#include <iostream>
using namespace std;

// Inline function to check if a number is even
inline bool isEven(int number) {
    return (number%2==0);
}

int main() 
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isEven(num)) 
	{
        cout << num << " is Even." << endl;
    } 
	else 
	{
        cout << num << " is Odd." << endl;
    }

    return 0;
}
