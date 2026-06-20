#include <iostream>
using namespace std;

class MaxTracker 
{
	private:
	    static int maxValue;  // Static variable to store maximum value
	
	public:
	    // Constructor that accepts a value and updates maxValue if needed
	    MaxTracker(int value)
		 {
	        if (value>maxValue) 
			{
	            maxValue=value;
	        }
	    }
	
	    // Static function to display the maximum value
	    static void displayMax() 
		{
	        cout << "Maximum value so far: " << maxValue << endl;
	    }
};

// Initialize static member
int MaxTracker::maxValue=INT_MIN;  // Start with smallest possible integer

int main() 
{
    MaxTracker m1(10);
    MaxTracker m2(25);
    MaxTracker m3(7);
    MaxTracker m4(30);

    // Display the maximum value
    MaxTracker::displayMax();

    return 0;
}
