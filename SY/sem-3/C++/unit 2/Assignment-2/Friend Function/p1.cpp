#include <iostream>
using namespace std;

class Number 
{
	private:
	    int num; // private data member

	public:
	    // Constructor to initialize number
	    Number(int n=0) 
		{
	        num=n;
		}

    // Friend function declaration
    friend int addNumbers(Number n1,Number n2);
};

// Friend function definition
int addNumbers(Number n1,Number n2) 
{
    // Access private members of both objects
    return n1.num+n2.num;
}

int main() 
{
    Number obj1(10); // first object
    Number obj2(20); // second object

    int sum=addNumbers(obj1, obj2); // call friend function
    cout << "Sum: " << sum << endl;

    return 0;
}
