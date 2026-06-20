#include <iostream>
using namespace std;

class Student 
{
	private:
	    int rollNumber;                // Unique roll number for each student
	    static int nextRollNumber;     // Static data member to keep track of next roll number
	
	public:
	    // Constructor
	    Student() 
		{
	        rollNumber=nextRollNumber;  // Assign current roll number
	        nextRollNumber++;             // Increment for next student
	    }
	
	    // Function to display roll number
	    void displayRollNumber() 
		{
	        cout << "Student Roll Number: " << rollNumber << endl;
	    }
};

// Initialize static member
int Student::nextRollNumber=1;  // Start roll numbers from 1

int main() 
{
    Student s1;
    Student s2;
    Student s3;

    s1.displayRollNumber();  // Output: 1
    s2.displayRollNumber();  // Output: 2
    s3.displayRollNumber();  // Output: 3

    return 0;
}
