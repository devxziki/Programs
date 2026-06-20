//create a class teampreature wih attributes using class and object
#include<iostream>
using namespace std;

class temreature
{
 public:int c,f;
   void getdata()
   {
   	cout << "Enter Celsius= ";
   	cin >> c;
   }
   
   void display()
   {
   	f=(c*(9/5))+32;
   	cout << "Fahrenhit= "<< f;
   }
 	
}; 

int main()
{
	temreature k;
	k.getdata();
	k.display();
	
}
