#include <iostream>
using namespace std;

class Number 
{
	private:
	    int num;   // private number
	
	public:
	    // Constructor to initialize number
	    Number(int n=0) 
		{
	        num=n;
	    }
	
	    // Declare friend function
	    friend float average(Number n1,Number n2,Number n3);
};

// Friend function to calculate average of three private numbers
float average(Number n1,Number n2,Number n3) 
{
    return (n1.num+n2.num+n3.num)/3.0f;  // average
}

int main() 
{
    int val1,val2,val3;

    cout << "Enter value for first object: ";
    cin >> val1;
    cout << "Enter value for second object: ";
    cin >> val2;
    cout << "Enter value for third object: ";
    cin >> val3;

    Number obj1(val1),obj2(val2),obj3(val3);

    float avg=average(obj1,obj2,obj3); // call friend function

    cout << "Average of the three numbers: " << avg << endl;

    return 0;
}
