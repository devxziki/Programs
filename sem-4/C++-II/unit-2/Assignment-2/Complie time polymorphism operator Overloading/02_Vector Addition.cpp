#include<iostream>
using namespace std;

class Vector
{
	int value;			
	
	public:	
		Vector(int v)
		{
			value=v;
		}
		
		Vector operator -(Vector &obj)
		{
			return Vector(value+obj.value);
		}
		void display()
		{
			cout<<"Value : "<<value<<endl;
		}
};

int main()
{
	int a,b;
	cout << "Enter Value of A: ";
	cin >> a;
	
	cout << "Enter Value of B: ";
	cin >> b;
	
	Vector d1(a);
	Vector d2(b);
	Vector d3=d1-d2;
	
	d1.display();
	d2.display();
	d3.display();
	
	return 0;
}
