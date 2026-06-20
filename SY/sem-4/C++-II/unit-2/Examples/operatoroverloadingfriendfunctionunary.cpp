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
		
		friend Demo operator++(Demo &obj);
		void display()
		{
			cout<<"Value : "<<value<<endl;
		}
};


Demo operator++(Demo &obj)
{
	return Demo(-obj.value);
}


int main()
{
	Demo d1(10);
	Demo d2=++d1;
	
	d1.display();
	d2.display();
	
	return 0;
}
