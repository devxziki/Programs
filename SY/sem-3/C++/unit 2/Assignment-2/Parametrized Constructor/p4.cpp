#include <iostream>
using namespace std;

class Flower 
{
	private:
	    string color;
	    float height;
	
	public:
	    // Parameterized constructor
	    Flower(string c,float h) 
		{
	        color=c;
	        height=h;
	    }
	
	    // Function to display flower details
	    void display() 
		{
	        cout << "Flower Color: " << color << endl;
	        cout << "Flower Height: " << height << " cm" << endl;
	    }
};

int main() 
{
    // Creating an object of Flower class
    Flower myFlower("Red",25.5);

    // Displaying the flower details
    myFlower.display();

    return 0;
}
