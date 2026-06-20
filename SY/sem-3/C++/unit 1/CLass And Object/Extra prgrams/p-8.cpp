#include<iostream>
using namespace std;

class Rectangle
{
  public:float l,b,sum;
  
  void get()
      {
  	    cout << "Enter length of rectangle: ";
  	    cin >> l;
  	    
  	    cout << "Enter Breadth of rectangle: ";
  	    cin >> b;
  	    
	  }	
	  
	  void area()
	  {
	  	sum;
	  }
	  
	  void display()
	  {
	  	cout << "Area of rectangle is: " << sum << "\n";
	  }
	  
};

int main()
{
	Rectangle k;
	k.get();
	k.area();
	k.display();
}
