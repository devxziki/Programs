#include <iostream>
using namespace std;

class Chair 
{
	private:
	    string material;
	    float weight; // in kilograms
	
	public:
	    // Parameterized constructor
	    Chair(string m,float w) 
		{
	        material=m;
	        weight=w;
	    }
	
	    // Copy constructor
	    Chair(const Chair &c) 
		{
	        material=c.material;
	        weight=c.weight;
	    }
	
	    // Function to display chair details
	    void display() 
		{
	        cout << "Material: " << material << endl;
	        cout << "Weight: " << weight << " kg" << endl;
	    }
};

int main() 
{
    // Creating a Chair object
    Chair chair1("Wood", 12.5);
    cout << "Original Chair:" << endl;
    chair1.display();

    // Creating a copy using the copy constructor
    Chair chair2=chair1;
    cout << "\nCopied Chair:" << endl;
    chair2.display();

    return 0;
}
