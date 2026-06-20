/* write a program for hour minute and seconf in hh,mm,ss formate using 
class and object program */
#include<iostream>
using namespace std;

class input
{
  public:int h,m,s;
  	void getdata()
  	{
  		cout << "Enter Hour= ";
  		cin >> h;
  		cout << "Enter minute= ";
  		cin >> m;
  		cout << "Enter seconds= ";
  		cin >> s;
    }
    
    void display()
    {
    	cout << h << ":" <<  m << ":" << s;
	}
};

int main()
{
	input k;
	k.getdata();
	k.display();
	
	return 0;
}
