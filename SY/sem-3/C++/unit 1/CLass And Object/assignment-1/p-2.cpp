/* write a program for date month and year in dd,mm,yyyy formate using 
class and object program */
#include<iostream>
using namespace std;

class input
{
  public:int d,m,y;
  	void getdata()
  	{
  		cout << "Enter DAy= ";
  		cin >> d;
  		cout << "Enter month= ";
  		cin >> m;
  		cout << "Enter year= ";
  		cin >> y;
    }
    
    void display()
    {
    	cout << d << "-" <<  m << "-" << y;
	}
};

int main()
{
	input k;
	k.getdata();
	k.display();
	
	return 0;
}
