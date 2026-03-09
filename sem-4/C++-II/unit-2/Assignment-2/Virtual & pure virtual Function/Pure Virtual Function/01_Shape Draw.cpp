#include<iostream>
using namespace std;

class Shape{
	public:
		virtual void draw()=0;
};

class Circle : public Shape{
	public:
		void draw(){
			cout << "Call From Circle" << endl;
		}
};

class Square : public Shape{
	public:
		void draw(){
			cout << "Call From Square" << endl;
		}
};

int main(){
	Square s;
	Circle c;
	
	c.draw();
	s.draw();
	
	return 0;
}
