#include <iostream>
using namespace std;

class Chair 
{
	private:
	    string material;
	    float weight;
	
	public:
	    // Parameterized constructor
	    Chair(string m,float w) 
		{
	        material=m;
	        weight=w;
	    }
	
	    // Function to display chair details
	    void display() 
		{
	        cout << "Chair Material: " << material << endl;
	        cout << "Chair Weight: " << weight << " kg" << endl;
	    }
};

int main() 
{
    // Creating an object of Chair class
    Chair myChair("Wood",7.5);

    // Displaying the chair details
    myChair.display();

    return 0;
}
