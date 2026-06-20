#include <iostream>
using namespace std;

class Number 
{
	private:
	    int num;  // private integer
	
	public:
	    // Constructor
	    Number(int n=0) 
		{
	        num=n;
	    }
	
	    // Declare friend function
	    friend void checkNumber(Number n);
};

// Friend function to check the number using ternary operator
void checkNumber(Number n) 
{
    // Nested ternary operator to classify number
    string result = (n.num > 0) ? "Positive" : (n.num < 0) ? "Negative" : "Zero";

    cout << "The number " << n.num<< " is " << result << "." << endl;
}

int main() 
{
    int val;

    cout << "Enter a number: ";
    cin >> val;

    Number obj(val);

    checkNumber(obj); // call friend function

    return 0;
}
