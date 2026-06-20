#include <iostream>
using namespace std;

class FunctionTracker 
{
	private:
	    static int callCount;  // Static data member to keep track of calls
	
	public:
	    // Static function that counts and displays the number of calls
	    static void trackFunction() 
		{
	        callCount++;  // Increment count every time the function is called
	        cout << "Function has been called " << callCount << " times." << endl;
	    }
};

// Initialize static member
int FunctionTracker::callCount=0;

int main() 
{
    // Call the static function multiple times
    FunctionTracker::trackFunction();
    FunctionTracker::trackFunction();
    FunctionTracker::trackFunction();

    return 0;
}
