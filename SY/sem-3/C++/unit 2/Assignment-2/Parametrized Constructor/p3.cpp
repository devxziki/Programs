#include <iostream>
using namespace std;

class Laptop 
{
	private:
	    string brand;
	    int ram;
	
	public:
	    // Parameterized constructor
	    Laptop(string b,int r) 
		{
	        brand=b;
	        ram=r;
	    }
	
	    // Function to display laptop details
	    void display() 
		{
	        cout << "Laptop Brand: " << brand << endl;
	        cout << "RAM Size: " << ram << " GB" << endl;
	    }
};

int main() 
{
    // Creating an object of Laptop class
    Laptop myLaptop("Dell",16);

    // Displaying the laptop details
    myLaptop.display();

    return 0;
}
