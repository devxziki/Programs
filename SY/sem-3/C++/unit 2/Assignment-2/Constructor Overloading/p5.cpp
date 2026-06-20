#include <iostream>
using namespace std;

class Box 
{
	private:
	    double length;
	    double width;
	    double height;
	
	public:
	    // Default constructor (1x1x1)
	    Box() 
		{
	        length=1;
	        width=1;
	        height=1;
	    }
	
	    // Constructor with one parameter (cube)
	    Box(double side) 
		{
	        length=width=height=side;
	    }
	
	    // Constructor with 3 parameters (length, width, height)
	    Box(double l,double w,double h) 
		{
	        length=l;
	        width=w;
	        height=h;
	    }
	
	    // Method to calculate volume
	    double volume() 
		{
	        return length*width*height;
	    }
};

int main() 
{
    Box b1;              // Default constructor
    Box b2(3);          // Cube constructor
    Box b3(2,4,5);     // Length, width, height constructor

    cout << "Volume of b1: " << b1.volume() << endl;
    cout << "Volume of b2: " << b2.volume() << endl;
    cout << "Volume of b3: " << b3.volume() << endl;

    return 0;
}
