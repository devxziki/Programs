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
	
	    // Copy constructor
	    Shoe(const Shoe &sh) 
		{
	        size=sh.size;
	        color=sh.color;
	    }
	
	    // Function to display shoe details
	    void display() 
		{
	        cout << "Size: " << size << endl;
	        cout << "Color: " << color << endl;
	    }
};

int main() 
{
    // Creating a Shoe object
    Shoe shoe1(42,"Black");
    cout << "Original Shoe:" << endl;
    shoe1.display();

    // Creating a copy using the copy constructor
    Shoe shoe2=shoe1;
    cout << "\nCopied Shoe:" << endl;
    shoe2.display();

    return 0;
}
