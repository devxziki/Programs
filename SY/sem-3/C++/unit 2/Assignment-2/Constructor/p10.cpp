#include <iostream>
using namespace std;

class Bottle 
{
	private:
	    int volume; // in milliliters
	
	public:
	    // Default constructor
	    Bottle() 
		{
	        volume=500;
	    }
	
	    // Function to display the volume
	    void displayVolume() 
		{
	        cout << "Bottle volume: " << volume << "ml" << endl;
	    }
};

int main() 
{
    Bottle myBottle;           // Calls default constructor
    myBottle.displayVolume();  // Output: Bottle volume: 500 ml
    return 0;
}
