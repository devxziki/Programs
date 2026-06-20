#include <iostream>
using namespace std;

class Number 
{
	private:
	    int num;  // private member
	
	public:
	    // Constructor
	    Number(int n=0) 
		{
	        num=n;
	    }
	
	    // Declare friend function
	    friend int multiply(Number n1,Number n2);
};

// Friend function to multiply private members
int multiply(Number n1,Number n2) 
{
    return n1.num*n2.num;
}

int main() 
{
    int val1,val2;

    cout << "Enter value for first object: ";
    cin >> val1;
    cout << "Enter value for second object: ";
    cin >> val2;

    Number obj1(val1);
    Number obj2(val2);

    int result=multiply(obj1,obj2);  // call friend function

    cout << "Multiplication of private members: " << result << endl;

    return 0;
}

