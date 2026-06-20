// create age bmi using class and object
#include<iostream>
using namespace std;
class age
{
	public:string name;
	public:float age;
	
	void getdata()
	{
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Age: ";
		cin >> age;
	}
	
	void display()
	{
		cout << "Name: " << name << "\n";
		
		if(age<13)
		{
			cout << "kid";
		}
		else if(age>=13 && age<=19)
		{
			cout << "teen";
		}
		else if(age>=20 && age<=59)
		{
			cout << "Adult";
		}
		if(age>60)
		{
			cout << "senior";
		}
	}
};

int main()
{
  age k;
  k.getdata();
  k.display();	
}
