#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void sound(){
			cout << "Animal" << endl;
		}
};

class Dog: public Animal{
	public:
		void sound(){
			cout << "Dog" << endl;
		}
};

class Cat: public Animal{
	public:
		void sound(){
			cout << "Cat" << endl;
		}
};

class Cow: public Animal{
	public:
		void sound(){
			cout << "Cow" << endl;
		}
};

int main(){
	Animal* a;
	Dog d;
	Cat c;
	Cow c1;
	
	a=&d;
	a->sound();
	a=&c;
	a->sound();
	a=&c1;
	a->sound();
	
	return 0;
}
