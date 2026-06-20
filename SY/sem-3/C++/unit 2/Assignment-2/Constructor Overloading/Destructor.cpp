#include <iostream>
using namespace std;

class Demo 
{
	public:
	    // Constructor
	    Demo() 
		{
	        cout << "Constructor called" << endl;
	    }
	
	    // Destructor
	    ~Demo() 
		{
	        cout << "Destructor called" << endl;
	    }
};

int main() 
{
    cout << "Creating object d1" << endl;
    Demo d1;  // Constructor will be called here

    cout << "End of main function" << endl;
    // Destructor will be called automatically when d1 goes out of scope

    return 0;
}
