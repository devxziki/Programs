// create a bmi calculator using class and object
#include<iostream>
using namespace std;
class bmi
{
	public:string name;
	public:float h,w;
	
	void getdata()
	{
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Hieght: ";
		cin >> h;
		cout << "Enter Wieght: ";
		cin >> w;
	}
	
	void display()
	{
		cout << "Name: " << name << "\n";
		cout << "Height: " << h << "\n";
		cout << "Wieght: " << w << "\n";
		
		if(w<18.5)
		{
			cout << "Underwieght";
		}
		else if(w>=18.5 && w<=24.9)
		{
			cout << "Normal";
		}
		else if(w>=25 && w<=29.9)
		{
			cout << "Overwieght";
		}
		if(w>30)
		{
			cout << "obese";
		}
	}
};

int main()
{
  bmi k;
  k.getdata();
  k.display();	
}
