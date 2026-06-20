#include<iostream>
using namespace std;

class Person{
	public:
		int age=10;
		void isolder(int age){
			cout << age << endl;
			cout << this->age << endl;
		}	
};


int main(){
	Person p;
	p.isolder(30);
	
	return 0;
}
