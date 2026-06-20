#include <iostream>
using namespace std;

class Student 
{
	private:
	    int studentID;
	    string name;
	    char grade;
	
	public:
	    // Default constructor
	    Student() 
		{
	        studentID=0;
	        name="N/A";
	        grade='N';
	    }
	
	    // Constructor with student ID
	    Student(int id) 
		{
	        studentID=id;
	        name="N/A";
	        grade='N';
	    }
	
	    // Constructor with student ID and name
	    Student(int id,string n)
		 {
	        studentID=id;
	        name=n;
	        grade='N';
	    }
	
	    // Constructor with student ID, name, and grade
	    Student(int id,string n,char g) 
		{
	        studentID=id;
	        name=n;
	        grade=g;
	    }
	
	    // Method to display student information
	    void showStudent() 
		{
	        cout << "Student ID: " << studentID << endl;
	        cout << "Name: " << name << endl;
	        cout << "Grade: " << grade << endl;
	        cout << "---------------------" << endl;
	    }
};

int main() 
{
    Student s1;                	    // Default constructor
    Student s2(101);               // Constructor with ID
    Student s3(102,"Alice");      // Constructor with ID and name
    Student s4(103,"Bob",'A');   // Constructor with ID, name, and grade

    s1.showStudent();
    s2.showStudent();
    s3.showStudent();
    s4.showStudent();

    return 0;
}
