#include <iostream>
using namespace std;

class Number 
{
	private:
	    int num;  // private number
	
	public:
	    // Constructor
	    Number(int n) 
		{
	        num=n;
	    }
	
	    // Friend functions declaration
	    friend int square(Number n);
	    friend int cube(Number n);
};

// Friend function to return square of private number
int square(Number n) 
{
    return n.num*n.num;
}

// Friend function to return cube of private number
int cube(Number n) 
{
    return n.num*n.num*n.num;
}

int main() 
{
    int value;
    cout << "Enter a number: ";
    cin >> value;

    Number obj(value);

    cout << "Square of " << value << ":" << square(obj) << endl;
    cout << "Cube of " << value << ":" << cube(obj) << endl;

    return 0;
}
