#include<iostream>
using namespace std;

class Value{
	public:
		int value=10;
		void display(){
			cout << this->value << endl;
		}	
};


int main(){
	Value v;
	v.display();
	
	return 0;
}
