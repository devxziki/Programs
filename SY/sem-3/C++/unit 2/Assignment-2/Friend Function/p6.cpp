#include <iostream>
using namespace std;

class Number 
{
	private:
	    int num;  // private integer
	
	public:
	    // Constructor to initialize number
	    Number(int n=0) 
		{
	        num=n;
	    }
	
	    // Declare friend function
	    friend void findGreater(Number n1,Number n2);
};

// Friend function to find and print greater private number
void findGreater(Number n1,Number n2) 
{
    if (n1.num>n2.num)
    {
    	cout << "Greater number is from first object: " << n1.num << endl;
	}
    else if (n2.num>n1.num)
    {
    	cout << "Greater number is from second object: " << n2.num << endl;
	}
    else
    {
    	 cout << "Both numbers are equal: " << n1.num << endl;
	}
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

    findGreater(obj1,obj2); // call friend function

    return 0;
}
