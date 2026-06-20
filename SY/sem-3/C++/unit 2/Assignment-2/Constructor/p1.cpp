#include <iostream>
#include <string>
using namespace std;

class Phone 
{
	private:
	    string model;
	
	public:
	    // Default constructor
	    Phone() 
		{
	        model="Unknown";
	    }
	
	    // Function to display model
	    void displayModel() 
		{
	        cout << "Phone Model: " << model << endl;
	    }
};

int main() 
{
    Phone myPhone;           // Calls default constructor
    myPhone.displayModel();  // Output: Phone Model: Unknown
    return 0;
}
