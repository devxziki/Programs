#include<iostream>
using namespace std;

class Shape
{
	public:
		string color;
		void sinput()
		{
			cout << "Enter Color : ";
			cin >> color;
		}
		void soutput()
		{
			cout << "Shape Color is : " << color << endl;
		}
};

class Rectangle : public Shape
{
	public:
		float l,w,a;
		void rinput()
		{
			cout << "Enter Width of Rectangle : ";
			cin >> w;
			cout << "Enter Length of Rectangle : ";
			cin >> l;
		}
		void rmethod()
		{
			a=l*w;
		}
		void routput()
		{
			cout << "Length is : " << l << endl;
			cout << "Width is : " << w << endl;
			cout << "Area Of Rectangle is : " << a << " Square Units" << endl;
		}
};

int main()
{
	Rectangle r;
	r.sinput();
	r.rinput();
	r.rmethod();
	r.soutput();
	r.routput();
	return 0;
}
