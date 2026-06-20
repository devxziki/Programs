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
	
	    // Function to display car details
	    void display() 
		{
	        cout << "Car Brand: " << brand << endl;
	        cout << "Car Year: " << year << endl;
	    }
};

int main() 
{
    // Creating an object of Car class
    Car myCar("Toyota",2022);

    // Displaying the car details
    myCar.display();

    return 0;
}
