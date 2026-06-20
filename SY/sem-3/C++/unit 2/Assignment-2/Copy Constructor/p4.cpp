#include <iostream>
using namespace std;

class Flower 
{
	private:
	    string color;
	    float height; // Height in centimeters
	
	public:
	    // Parameterized constructor
	    Flower(string c,float h) 
		{
	        color=c;
	        height=h;
	    }
	
	    // Copy constructor
	    Flower(const Flower &f) 
		{
	        color=f.color;
	        height=f.height;
	    }
	
	    // Function to display flower details
	    void display() 
		{
	        cout << "Color: " << color << endl;
	        cout << "Height: " << height << " cm" << endl;
	    }
};

int main() 
{
    // Creating a Flower object
    Flower flower1("Red",25.5);
    cout << "Original Flower:" << endl;
    flower1.display();

    // Creating a copy using the copy constructor
    Flower flower2=flower1;
    cout << "\nCopied Flower:" << endl;
    flower2.display();

    return 0;
}
