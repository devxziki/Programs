#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void move()=0;
};

class Fish : public Animal{
	public:
		void move(){
			cout << "Call From Fish" << endl;
		}
};

class Bird : public Animal{
	public:
		void move(){
			cout << "Call From Bird" << endl;
		}
};

int main(){
	Fish f;
	Bird b;
	
	f.move();
	f.move();
	
	return 0;
}
