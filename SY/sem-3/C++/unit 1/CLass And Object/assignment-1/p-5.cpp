// create a Employee data using class and object
#include<iostream>
using namespace std;

class Employee
{
  public:int empid,salary,isalary;
  public:string name,department;
  
		 
		 void getdata()
		 {
		 	cout << "Enter Employee ID= ";
		 	cin >> empid;
		 	cout << "Enter Name= ";
		 	cin >> name;
		 	cout << "Enter Department is: ";
		 	cin >> department;
		 	cout << "Enter Salary= ";
		 	cin >> salary;
	     } 	
	     
	     void display()
	     {
	     	cout <<"Employee ID= " << empid <<"\n"; 
	     	cout <<"Name= " << name <<"\n";
	     	cout <<"Employee department = " << department <<"\n";
	     	cout <<"Employee salary = " << salary <<"\n";
	     	cout <<"Increamented salary= " << salary*50/100 << "\n";
	     	cout <<"Total Increamented salary= " << salary+(salary*50/100);
		 }
};

int main()
{
	Employee k;
	k.getdata();
	k.display();
}
