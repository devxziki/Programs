#include <iostream>
#include <string>
using namespace std;

class Car 
{
	private:
	    string brand;
	
	public:
	    // Default constructor
	    Car() 
		{
	        brand="Generic";
	    }
	
	    // Function to display the brand
	    void displayBrand() 
		{
	        cout << "Car brand: " << brand << endl;
	    }
};

int main() 
{
    Car myCar;              // Calls default constructor
    myCar.displayBrand();   // Output: Car brand: Generic
    return 0;
}
