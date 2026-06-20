// create a program for speed category of vehcials using class and object
#include<iostream>
using namespace std;

class speed
{
  public:int speed;	
  
  void getdata()
  {
  	cout << "Enter Speed: ";
  	cin >> speed;
  }
  
  void display()
  {
  	if(speed<=20)
  	{
  	  cout << "Speed Is Slow";	
	}
	else if(speed>=40)
	{
		cout << "Speed Is Fast";
	}
	else
	{
		cout << "Speed Is Normal";
	}
  }
};

int main()
{
	speed s;
	s.getdata();
	s.display();
}
