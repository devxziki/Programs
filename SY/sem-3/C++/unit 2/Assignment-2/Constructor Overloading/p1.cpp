#include <iostream>
using namespace std;

class Rectangle 
{
	private:
	    double length;
	    double width;
	
	public:
	    // Default constructor (0x0)
	    Rectangle() 
		{
	        length=0;
	        width=0;
	    }
	
	    // Constructor with one parameter (square)
	    Rectangle(double side) 
		{
	        length=side;
	        width=side;
	    }
	
	    // Constructor with two parameters (length and width)
	    Rectangle(double l,double w) 
		{
	        length=l;
	        width=w;
	    }
	
	    // Method to calculate area
	    double area() 
		{
	        return length*width;
	    }
};

int main() 
{
    Rectangle r1;          // default constructor
    Rectangle r2(5);       // square constructor
    Rectangle r3(4,6);    // length and width constructor

    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    cout << "Area of r3: " << r3.area() << endl;

    return 0;
}
