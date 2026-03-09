#include<iostream>
using namespace std;

class Area
{
	public:
		void area(int r)
		{
			cout  << "Radius: " << r << endl;
		}
		
		void area(int l, int w)
		{
			cout <<"lenght: " << l << endl;
			cout << "width: " << w << endl;
		}
		
		void area(double b, double h)
		{
			cout << "base: " << b << endl;
			cout << "Hieght: " << h << endl;
		}
};

int main()
{
	Area a;
	a.area(30);
	a.area(10,20);
	a.area(20,30);
}
