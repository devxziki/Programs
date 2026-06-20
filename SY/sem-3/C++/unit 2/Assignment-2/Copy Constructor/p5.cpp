#include <iostream>
using namespace std;

class Pen 
	{
	private:
	    string color;
	    float inkLevel; // Ink level in ml
	
	public:
	    // Parameterized constructor
	    Pen(string c,float ink) 
		{
	        color=c;
	        inkLevel=ink;
	    }
	
	    // Copy constructor
	    Pen(const Pen &p) 
		{
	        color=p.color;
	        inkLevel=p.inkLevel;
	    }
	
	    // Function to display pen details
	    void display() 
		{
	        cout << "Color: " << color << endl;
	        cout << "Ink Level: " << inkLevel << " ml" << endl;
	    }
};

int main() 
{
    // Creating a Pen object
    Pen pen1("Blue",10.5);
    cout << "Original Pen:" << endl;
    pen1.display();

    // Creating a copy using the copy constructor
    Pen pen2=pen1;
    cout << "\nCopied Pen:" << endl;
    pen2.display();

    return 0;
}
