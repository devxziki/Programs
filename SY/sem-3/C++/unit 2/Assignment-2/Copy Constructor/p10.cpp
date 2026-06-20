#include <iostream>
using namespace std;

class Bottle 
{
	private:
	    int volume;       // in milliliters
	    string type;      // e.g., "Plastic", "Glass"
	
	public:
	    // Parameterized constructor
	    Bottle(int v,string t) 
		{
	        volume=v;
	        type=t;
	    }
	
	    // Copy constructor
	    Bottle(const Bottle &b) 
		{
	        volume=b.volume;
	        type=b.type;
	    }
	
	    // Function to display bottle details
	    void display() 
		{
	        cout << "Volume: " << volume << " ml" << endl;
	        cout << "Type: " << type << endl;
	    }
};

int main() 
{
    // Creating a Bottle object
    Bottle bottle1(500,"Glass");
    cout << "Original Bottle:" << endl;
    bottle1.display();

    // Creating a copy using the copy constructor
    Bottle bottle2=bottle1;
    cout << "\nCopied Bottle:" << endl;
    bottle2.display();

    return 0;
}
