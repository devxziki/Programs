// create a marksheet using class and object
#include<iostream>
using namespace std;

class marksheet
{
  public:int roll_no,m1,m2,m3,total;
  public:char name;
  public:float percentage;
		 
		 void getdata()
		 {
		 	cout << "Enter Roll Number= ";
		 	cin >> roll_no;
		 	cout << "Enter Name= ";
		 	cin >> name;
		 	cout << "Enter Mark1= ";
		 	cin >> m1;
		 	cout << "Enter Mark2= ";
		 	cin >> m2;
		 	cout << "Enter Mark3= ";
		 	cin >> m3;
	     } 	
	     
	     void display()
	     {
	     	cout <<"Roll No= " << roll_no <<"\n";
	     	cout <<"Name= " << name <<"\n";
	     	cout <<"Mark 1 = " << m1 <<"\n";
	     	cout <<"Mark 2 = " << m2 <<"\n";
	     	cout <<"MArk 3 = " << m3 <<"\n";
	     	total=m1+m2+m3;
	     	percentage=total*300/100;
	     	cout << "Total= " << total << "\n" << "\n" << "Percantage= " << percentage;
	     	
		 }
};

int main()
{
	marksheet k;
	k.getdata();
	k.display();
}
