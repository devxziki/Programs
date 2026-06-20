#include <iostream>
using namespace std;

class Pen 
{
	private:
	    int inkLevel;
	    string color;
	
	public:
	    // Parameterized constructor
	    Pen(int ink,string c) 
		{
	        inkLevel=ink;
	        color=c;
	    }
	
	    // Function to display pen details
	    void display() 
		{
	        cout << "Pen Ink Level: " << inkLevel << "%" << endl;
	        cout << "Pen Color: " << color << endl;
	    }
};

int main() 
{
    // Creating an object of Pen class
    Pen myPen(75,"Blue");

    // Displaying the pen details
    myPen.display();

    return 0;
}
