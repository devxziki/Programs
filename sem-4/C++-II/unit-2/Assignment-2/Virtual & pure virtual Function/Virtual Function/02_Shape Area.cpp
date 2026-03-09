#include<iostream>
using namespace std;

class Shape{
	public:
		virtual void area(){
			cout << "Call From Shape" << endl;
		}
};

class Circle : public Shape{
	public:
		void area(){
			cout << "Call From Circle" << endl;
		}
};

class Rectangle : public Shape{
	public:
		void area(){
			cout << "Call From Rectangle" << endl;
		}
};

int main(){
	Circle c;
	Rectangle r;
	
	c.area();
	r.area();
	
	return 0;
}
