#include<iostream>
using namespace std;

class Box{
	public:
		int a=10;
		void setlength(int a){
			cout << a << endl;
			cout << this->a << endl;
		}	
};


int main(){
	Box b;
	b.setlength(20);
	
	return 0;
}
