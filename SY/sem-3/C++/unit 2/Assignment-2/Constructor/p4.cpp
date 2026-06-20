#include <iostream>
#include <string>
using namespace std;

class Flower 
{
	private:
	    string color;
	
	public:
	    // Default constructor
	    Flower() 
		{
	        color="Red";
	    }
	
	    // Function to display color
	    void displayColor() 
		{
	        cout << "Flower color: " << color << endl;
	    }
};

int main() 
{
    Flower myFlower;          // Calls default constructor
    myFlower.displayColor();  // Output: Flower color: Red
    return 0;
}
