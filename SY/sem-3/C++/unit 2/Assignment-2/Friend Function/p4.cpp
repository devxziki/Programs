#include <iostream>
using namespace std;

class Sample 
{
	private:
	    int data;  // private data member
	
	public:
	    // Constructor
	    Sample(int d=0) 
		{
	        data=d;
	    }
	
	    // Function to display the data
	    void display() 
		{
	        cout << data << endl;
	    }
	
	    // Declare friend function
	    friend void swapValues(Sample &s1,Sample &s2);
};

// Friend function to swap private data members
void swapValues(Sample &s1, Sample &s2) 
{
    int temp=s1.data;
    s1.data=s2.data;
    s2.data=temp;
}

int main() 
{
    Sample obj1(10),obj2(20);

    cout << "Before swapping:" << endl;
    cout << "Object 1: ";
    obj1.display();
    cout << "Object 2: ";
    obj2.display();

    swapValues(obj1,obj2);  // call friend function

    cout << "\nAfter swapping: " << endl;
    cout << "Object 1: ";
    obj1.display();
    cout << "Object 2: ";
    obj2.display();

    return 0;
}
