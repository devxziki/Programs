#include <iostream>
using namespace std;

class B; // Forward declaration of class B

class A 
{
	private:
	    int valueA;
	
	public:
	    A(int v) 
		{
	        valueA=v;
	    }
	
	    // Declare friend function
	    friend void findMinimum(A objA,B objB);
};

class B 
{
	private:
	    int valueB;
	
	public:
	    B(int v) 
		{
	        valueB=v;
	    }
	
	    // Declare friend function
	    friend void findMinimum(A objA,B objB);
};

// Friend function definition
void findMinimum(A objA,B objB) 
{
    if (objA.valueA<objB.valueB)
    {
    	cout << "Minimum value is from Class A: " << objA.valueA << endl;
	}
    else if (objA.valueA>objB.valueB)
    {
    	cout << "Minimum value is from Class B: " << objB.valueB << endl;
	}
    else
    {
    	cout << "Both values are equal: " << objA.valueA << endl;
	}
       
}

int main() 
{
    int aVal, bVal;
    cout << "Enter value for Class A: ";
    cin >> aVal;
    cout << "Enter value for Class B: ";
    cin >> bVal;

    A objA(aVal);
    B objB(bVal);

    findMinimum(objA,objB); // call friend function

    return 0;
}
