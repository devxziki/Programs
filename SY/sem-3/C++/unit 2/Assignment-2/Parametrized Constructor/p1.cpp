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
	
	    // Function to display phone details
	    void display() 
		{
	        cout << "Phone Model: " << model << endl;
	        cout << "Phone Price: $" << price << endl;
	    }
};

int main() 
{
    // Creating an object of Phone class
    Phone myPhone("iPhone 15",99999.99);

    // Displaying the phone details
    myPhone.display();

    return 0;
}
