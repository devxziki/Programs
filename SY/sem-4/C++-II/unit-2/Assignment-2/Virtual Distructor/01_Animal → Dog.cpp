#include<iostream>
using namespace std;

class Animal{
	public:
		virtual ~Animal(){
			cout << "Animal Destructor Called" << endl;
		}
};

class Dog: public Animal{
	public:
		~Dog(){
			cout << "Dog Destructor Called" << endl;
		}
};

int main(){
	Dog d;
	
	return 0;
}
