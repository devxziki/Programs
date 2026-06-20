#include <iostream>
using namespace std;

class Pen 
{
	private:
	    int inkLevel;
	
	public:
	    // Default constructor
	    Pen() 
		{
	        inkLevel=100;
	    }
	
	    // Function to display ink level
	    void displayInkLevel() 
		{
	        cout << "Ink level: " << inkLevel << endl;
	    }
};

int main() 
{
    Pen myPen;              // Calls default constructor
    myPen.displayInkLevel(); // Output: Ink level: 100
    return 0;
}
