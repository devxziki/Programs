#include<iostream>
using namespace std;

class Circle
{
  public:float r,sum;
  
  void get()
      {
  	    cout << "Enter Radius: ";
  	    cin >> r;
  	    
  	   
  	    
	  }	
	  
	  void area()
	  {
	  	sum;
	  }
	  
	  void display()
	  {
	  	cout << "Area of Circle is: " << sum << "\n";
	  }
	  
};

int main()
{
	Circle k;
	k.get();
	k.area();
	k.display();
}
