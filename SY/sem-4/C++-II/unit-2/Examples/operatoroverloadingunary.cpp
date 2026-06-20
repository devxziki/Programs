#include<iostream>
using namespace std;

class Demo
{
	int value;			
	
	public:	
		Demo(int v)
		{
			value=v;
		}
		
		Demo operator+()
		{
			return Demo(-value);
		}
		void display()
		{
			cout<<"Value : "<<value<<endl;
		}
};

int main(){
	Demo d1(10);
	Demo d2=+d1;
	
	
	d1.display();
	d2.display();
	
	return 0;
}
