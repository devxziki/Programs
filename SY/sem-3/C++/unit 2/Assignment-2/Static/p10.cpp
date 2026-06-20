#include<iostream>
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
    // Using default constructor
    Rectangle rect1;
    cout << "Area of rect1 (default): " << rect1.area() << endl;

    // Using single parameter constructor (square)
    Rectangle rect2(5);
    cout << "Area of rect2 (square): " << rect2.area() << endl;

    // Using two parameter constructor (length x width)
    Rectangle rect3(4,6);
    cout << "Area of rect3 (rectangle): " << rect3.area() << endl;

    return 0;
}
