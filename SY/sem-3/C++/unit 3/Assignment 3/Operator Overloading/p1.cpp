#include<iostream>
using namespace std;

class Point
{
	private:
		int value;
	
	public:
		Point(int v=0)
		{
			value=v;
		}
		
		Point operator-(Point &a)
		{
			return Point(value+a.value);
		}	
	
	void display()
	{
		cout<<"Value is : "<<value<<endl;
	}	
};

int main(){
	
	Point p1(10),p2(20);
	Point p3=p1-p2;
	
	p1.display();
	p2.display();
	p3.display();
	
	return 0;
}
