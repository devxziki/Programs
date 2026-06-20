#include <iostream>
using namespace std;

class Laptop 
{
	private:
	    string brand;
	    int ram; // RAM size in GB
	
	public:
	    // Parameterized constructor
	    Laptop(string b,int r) 
		{
	        brand=b;
	        ram=r;
	    }
	
	    // Copy constructor
	    Laptop(const Laptop &l) 
		{
	        brand=l.brand;
	        ram=l.ram;
	    }
	
	    // Function to display laptop details
	    void display() 
		{
	        cout << "Brand: " << brand << endl;
	        cout << "RAM: " << ram << " GB" << endl;
	    }
};

int main() 
{
    // Creating a Laptop object
    Laptop laptop1("Dell",16);
    cout << "Original Laptop:" << endl;
    laptop1.display();

    // Creating a copy using the copy constructor
    Laptop laptop2=laptop1;
    cout << "\nCopied Laptop:" << endl;
    laptop2.display();

    return 0;
}
