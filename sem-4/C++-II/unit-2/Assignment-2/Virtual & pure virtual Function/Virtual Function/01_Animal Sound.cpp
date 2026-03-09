#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void sound(){
			cout << "Call From Animal" << endl;
		}
};

class Dog : public Animal{
	public:
		void sound(){
			cout << "Call From Dog" << endl;
		}
};

class Cat : public Animal{
	public:
		void sound(){
			cout << "Call From Cat" << endl;
		}
};

int main(){
	Dog d;
	Cat c;
	
	d.sound();
	c.sound();
	
	return 0;
}
