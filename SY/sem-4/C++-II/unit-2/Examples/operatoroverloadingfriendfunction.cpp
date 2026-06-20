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
		
		friend Demo operator+(Demo &abc,Demo &obj);
		void display()
		{
			cout<<"Value : "<<value<<endl;
		}
};


Demo operator+(Demo &abc,Demo &obj)
{
	return Demo(abc.value-obj.value);
}


int main()
{
	Demo d1(10);
	Demo d2(20);
	Demo d3=d1+d2;
	
	d1.display();
	d2.display();
	d3.display();
	
	return 0;
}
