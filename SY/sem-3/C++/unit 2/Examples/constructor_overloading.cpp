#include<iostream>
using namespace std;

class joyeb
{
	string name;
	int age;
	
	public:
	   joyeb()
	   {
	    	name="Joyeb";
			age=0;	
	   }	
	   
	   joyeb(string n)
	   {
	   		name=n;
			age=0;   	
	   }
	   
	   joyeb(string n,int a)
	   {
	   		name=n;
	   		age=a;
	   }
	   
	   void display()
	   {
	   		cout << "Name: " << name << "\tAge: " << age << endl;
	   }
};

int main()
{
	joyeb p1;
	joyeb p2("joyeb");
	joyeb p3("joyeb",19);
	
	p1.display();
	p2.display();
	p3.display();
	
	return 0;	
}
