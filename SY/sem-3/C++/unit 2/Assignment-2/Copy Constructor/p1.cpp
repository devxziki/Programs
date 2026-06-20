#include <iostream>
using namespace std;

class Phone 
{
	private:
	    string model;
	    float price;
	
	public:
	    // Parameterized constructor
	    Phone(string m,float p) 
		{
	        model=m;
	        price=p;
	    }
	
	    // Copy constructor
	    Phone(const Phone &p) 
		{
	        model=p.model;
	        price=p.price;
	    }
	
	    // Function to display phone details
	    void display() 
		{
	        cout << "Model: " << model << endl;
	        cout << "Price: $" << price << endl;
	    }
};

int main() 
{
    // Creating a Phone object
    Phone phone1("iPhone 14",9999.99);
    cout << "Original Phone:" << endl;
    phone1.display();

    // Creating a copy using the copy constructor
    Phone phone2=phone1;
    cout << "\nCopied Phone:" << endl;
    phone2.display();

    return 0;
}
