#include <iostream>
using namespace std;

class Employee 
{
	private:
	    int employeeID;             // Unique employee ID for each employee
	    static int nextID;          // Static counter for next ID
	
	public:
	    // Constructor
	    Employee() 
		{
	        employeeID=nextID;    // Assign current ID
	        nextID++;               // Increment for next employee
	    }
	
	    // Function to display this employee's ID
	    void displayID() 
		{
	        cout << "Employee ID: " << employeeID << endl;
	    }
	
	    // Static function to display the last assigned ID
	    static void displayLastID() 
		{
	        if (nextID==1) 
			{
	            cout << "No employee ID assigned yet." << endl;
	        }
			else 
			{
	            cout << "Last assigned Employee ID: " << nextID-1 << endl;
	        }
	    }
};

// Initialize static member
int Employee::nextID=1;  // Start employee IDs from 1

int main() 
{
    Employee e1;
    Employee e2;
    Employee e3;

    // Display each employee's ID
    e1.displayID();  // 1
    e2.displayID();  // 2
    e3.displayID();  // 3

    // Display last assigned ID
    Employee::displayLastID();  // 3

    return 0;
}
