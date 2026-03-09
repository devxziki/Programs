#include<iostream>
using namespace std;

class Shape{
	public:
		virtual ~Shape(){
			cout << "Shape Destructor Called" << endl;
		}
};

class Circle: public Shape{
	public:
		~Circle(){
			cout << "Circle Destructor Called" << endl;
		}
};

int main(){
	Circle c;
	
	return 0;
}
