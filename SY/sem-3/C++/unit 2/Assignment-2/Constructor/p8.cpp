#include <iostream>
using namespace std;

class Tv
{
	public:
	    // Default constructor
	    Tv() 
		{
	        cout << "TV is on standby" << endl;
	    }
};

int main() 
{
    Tv myTV; // Default constructor is called automatically
    return 0;
}
