#include <iostream>
using namespace std;

class TV 
{
	private:
	    string brand;
	    int screenSize; // in inches
	
	public:
	    // Parameterized constructor
	    TV(string b,int s) 
		{
	        brand=b;
	        screenSize=s;
	    }
	
	    // Copy constructor
	    TV(const TV &t) 
		{
	        brand=t.brand;
	        screenSize=t.screenSize;
	    }
	
	    // Function to display TV details
	    void display() 
		{
	        cout << "Brand: " << brand << endl;
	        cout << "Screen Size: " << screenSize << " inches" << endl;
	    }
};

int main() 
{
    // Creating a TV object
    TV tv1("Samsung",55);
    cout << "Original TV:" << endl;
    tv1.display();

    // Creating a copy using the copy constructor
    TV tv2=tv1;
    cout << "\nCopied TV:" << endl;
    tv2.display();

    return 0;
}
