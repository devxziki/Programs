#include <iostream>
using namespace std;

class Chair 
{
	private:
	    int legs;
	
	public:
	    // Default constructor
	    Chair() 
		{
	        legs=4;
	    }
	
	    // Function to display the number of legs
	    void displayLegs() 
		{
	        cout << "Number of legs: " << legs << endl;
	    }
};

int main() 
{
    Chair myChair;           // Calls default constructor
    myChair.displayLegs();   // Output: Number of legs: 4
    return 0;
}
