#include <iostream>
using namespace std;

class Car 
{
	private:
	    string brand;
	    int year;
	
	public:
	    // Parameterized constructor
	    Car(string b,int y) 
		{
	        brand=b;
	        year=y;
	    }
	
	    // Copy constructor
	    Car(const Car &c) 
		{
	        brand=c.brand;
	        year=c.year;
	    }
	
	    // Function to display car details
	    void display() 
		{
	        cout << "Brand: " << brand << endl;
	        cout << "Year: " << year << endl;
	    }
};

int main() 
{
    // Creating a Car object
    Car car1("Toyota",2022);
    cout << "Original Car:" << endl;
    car1.display();

    // Creating a copy using the copy constructor
    Car car2=car1;
    cout << "\nCopied Car:" << endl;
    car2.display();

    return 0;
}
