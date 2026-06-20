#include <iostream>
using namespace std;

class Shoe 
{
	private:
	    int size;
	    string color;
	
	public:
	    // Parameterized constructor
	    Shoe(int s,string c) 
		{
	        size=s;
	        color=c;
	    }
	
	    // Function to display shoe details
	    void display() 
		{
	        cout << "Shoe Size: " << size << endl;
	        cout << "Shoe Color: " << color << endl;
	    }
};

int main() 
{
    // Creating an object of Shoe class
    Shoe myShoe(42, "Black");

    // Displaying the shoe details
    myShoe.display();

    return 0;
}
