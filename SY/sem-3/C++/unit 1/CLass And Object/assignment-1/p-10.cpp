// create a program for checking the age of citizen for voting using class and object
#include<iostream>
using namespace std;

class citizen
{
	public:string name;
	public:int age;
	
	void getdata()
	{
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Age: ";
		cin >> age;
	}
	
	void display()
	{
		cout << "Name: "<< name << "\n";
		cout << "Age: "<< age << "\n";
		
		if(age>18)
		{
			cout << "Citizen is Eligible";
		}
		else
		{
			cout << "Citizen is no eligible";
		}
	}
};

int main()
{
  citizen k;
  k.getdata();
  k.display();
}
