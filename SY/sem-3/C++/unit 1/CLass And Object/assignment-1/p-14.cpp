// count student attendence who is alligible for exam using class and object
#include<iostream>
using namespace std;

class student
{
   public:int roll_no,total_classes,attended_classes;	
   public:string name;
   public:float student_e;
   
   void getdata()
   {
   	 cout << "Enter Roll No: ";
	 cin >> roll_no; 
	 
	 cout << "Enter Name: ";
	 cin >> name;
	 
	 cout << "Total Classes: ";
	 cin >> total_classes;
	 
	 cout << "Enter Attented classes: ";
	 cin >> attended_classes;
   }
   
   void display()
   {
   	cout << "Student Roll no is: " << roll_no << "\n";
   	cout << "Student Name is: " << name << "\n";
   	cout << "Total Classes  is: " << total_classes << "\n";
   	cout << "Student Attended classes  is: " << attended_classes << "\n";
   	
   	student_e=attended_classes*100/total_classes;
o   	if(student_e>=75)
   	{
   	  cout << "Student Is Eligible";	
	}
	else
	{
		cout << "Student is NotEligible";
	}
    }
};

int main()
{
  student j;
  j.getdata();
  j.display();
}
