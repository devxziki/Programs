#include<iostream>
using namespace std;

class Student{
	public:
		int a=10;
		void setname(int a){
			cout << a << endl;
			cout << this->a << endl;
		}	
};


int main(){
	Student s;
	s.setname(20);
	
	return 0;
}
