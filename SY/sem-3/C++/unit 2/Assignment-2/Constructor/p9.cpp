#include <iostream>
using namespace std;

class Shoe 
{
	private:
	    int size;
	
	public:
	    // Default constructor
	    Shoe() 
		{
	        size=0;
	    }
	
	    // Function to display the shoe size
	    void displaySize() 
		{
	        cout << "Shoe size: " << size << endl;
	    }
};

int main() 
{
    Shoe myShoe;            // Calls default constructor
    myShoe.displaySize();   // Output: Shoe size: 0
    return 0;
}
