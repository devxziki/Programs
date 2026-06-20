// get the tempreature depending on numers inputed by the users using class and object method
#include<iostream>
using namespace std;

class tempreature
{
  public:int number;
  
  void getdata()
  {
    cout << "Enter Tempreature: ";
	cin >> number;	
  }	
  
  void display()
  {
  	if(number<=20)
  	{
  	  cout << "Tempreature is cold ";	
	}
	else if(number>=35)
	{
		cout << "Tempreature is hot ";
	}
	else
	{
		cout << "Tempreature is moderate ";
	}
  }
  
};

int main()
{
  tempreature k;
  k.getdata();
  k.display(); 	
}
