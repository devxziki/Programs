#include<iostream>
using namespace std;

class Shape{
	public:
		virtual void area(){
			cout << "Shape: "<< endl;
		}
};

class Circle: public Shape{
	public:
		int r;
		void area(){
			cout << "Enter Radius: ";
			cin >> r;
			cout << "Circle Area: " << r*r*r << endl;
		}
};

class Rectangle: public Shape{
	public:
		int h,w;
		void area(){
			cout << "Enter Hieght: ";
			cin >> h;
			cout << "Enter Width: ";
			cin >> w;
			cout << "Rectangle Area: " << h*w << endl;
		}
};

class Triangle: public Shape{
	public:
		void area(){
			int h,b;
			cout << "Enter Hieght: ";
			cin >> h;
			cout << "Enter Base: ";
			cin >> b;
			cout << "Triangle Area: " << h*b << endl;
		}
};

int main(){
	Shape* s;
	Circle c;
	Rectangle r;
	Triangle t;
	
	s=&c;
	s->area();
	s=&r;
	s->area();
	s=&t;
	s->area();
	
	return 0;
}
