#include <iostream>
using namespace std;

class Bottle 
{
	private:
	    int volume;
	    string type;
	
	public:
	    // Parameterized constructor
	    Bottle(int v,string t) 
		{
	        volume=v;
	        type=t;
	    }
	
	    // Function to display bottle details
	    void display() 
		{
	        cout << "Bottle Volume: " << volume << " ml" << endl;
	        cout << "Bottle Type: " << type << endl;
	    }
};

int main() 
{
    // Creating an object of Bottle class
    Bottle myBottle(500,"Plastic");

    // Displaying the bottle details
    myBottle.display();

    return 0;
}
