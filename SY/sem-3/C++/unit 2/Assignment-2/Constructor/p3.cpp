#include <iostream>
using namespace std;

class Laptop 
{
	public:
	    // Default constructor
	    Laptop() 
		{
	        cout << "Laptop ready" << endl;
	    }
};

int main() 
{
    Laptop myLaptop; // Default constructor is called automatically
    return 0;
}
