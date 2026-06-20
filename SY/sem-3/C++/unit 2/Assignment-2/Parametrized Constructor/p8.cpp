#include <iostream>
using namespace std;

class TV 
{
	private:
	    string brand;
	    int screenSize;
	
	public:
	    // Parameterized constructor
	    TV(string b,int s) 
		{
	        brand=b;
	        screenSize=s;
	    }
	
	    // Function to display TV details
	    void display() 
		{
	        cout << "TV Brand: " << brand << endl;
	        cout << "Screen Size: " << screenSize << " inches" << endl;
	    }
};

int main() 
{
    // Creating an object of TV class
    TV myTV("Samsung",55);

    // Displaying the TV details
    myTV.display();

    return 0;
}
