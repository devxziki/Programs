#include <iostream>
using namespace std;

class Counter 
{
	private:
	    static int count;  // Static data member to keep track of objects
	
	public:
	    // Constructor
	    Counter() 
		{
	        count++;  // Increment count whenever an object is created
	    }
	
	    // Static function to display the count
	    static void displayCount() 
		{
	        cout << "Number of Counter objects created: " << count << endl;
	    }
};

// Initialize static data member
int Counter::count=0;

int main() 
{
    Counter c1;
    Counter c2;
    Counter c3;

    // Display the number of objects created
    Counter::displayCount();

    return 0;
}
