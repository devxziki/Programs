#include<iostream>
using namespace std;

class Shape
{
	public:
		float base;
		void input()
		{
			cout << "Enter Base Value : ";
			cin >> base;
		}
		void output()
		{
			cout << "Base is : " << base << endl;
		}
};

class Polygon : public Shape
{
	public:
		float height;
		void pinput()
		{
			cout << "Enter Height : ";
			cin >> height;	
		}
		void poutput()
		{
			cout << "Height is : " << height << endl;
		}
};

class Triangle : public Polygon
{
	public:
		float area;
		void method()
		{
			area=1/2*base*height;
		}
		void toutput()
		{
			cout << "Area of Triangle is : " << area << endl;
		}
};

int main()
{
	Triangle t;
	t.input();
	t.pinput();
	t.output();
	t.poutput();
	t.method();
	t.toutput();
	return 0;
}