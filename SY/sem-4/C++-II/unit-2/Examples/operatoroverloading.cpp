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
		
		Demo operator+(Demo &obj)
		{
			return Demo(value-obj.value);
		}
		void display()
		{
			cout<<"Value : "<<value<<endl;
		}
};

int main(){
	Demo d1(10);
	Demo d2(20);
	Demo d3=d1+d2;
	
	d1.display();
	d2.display();
	d3.display();
	
	return 0;
}
