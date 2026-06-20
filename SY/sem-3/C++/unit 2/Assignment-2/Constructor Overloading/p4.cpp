#include <iostream>
using namespace std;

class Distance 
{
	private:
	    int feet;
	    int inches;
	
	public:
	    // Default constructor (0 feet 0 inches)
	    Distance() 
		{
	        feet=0;
	        inches=0;
	    }
	
	    // Constructor with total inches
	    Distance(int totalInches) 
		{
	        feet=totalInches/12;
	        inches=totalInches%12;
	    }
	
	    // Constructor with feet and inches
	    Distance(int f,int i) 
		{
	        feet=f;
	        inches=i;
	    }
	
	    // Method to display distance
	    void displayDistance() 
		{
	        cout << feet << " feet " << inches << " inches" << endl;
	    }
};

int main() 
{
    Distance d1;            // Default constructor
    Distance d2(25);        // Total inches constructor
    Distance d3(5,8);      // Feet and inches constructor

    cout << "d1: "; d1.displayDistance();
    cout << "d2: "; d2.displayDistance();
    cout << "d3: "; d3.displayDistance();

    return 0;
}
