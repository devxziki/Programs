#include<iostream>
using namespace std;

class University{
	public:
		string un;
		void input(){
			cout << "Enter University Name: ";
			cin >> un;
		}
		
		void display(){
			cout << " University Name is: " << un << endl;
		}
		
};

class College: public University{
	public:
		string cn;
		void input1(){
			cout << "Enter College Name: ";
			cin >> cn;
		}
		
		void display1(){
			cout << " College Name is: " << cn << endl;
		}
};

class Department: public College{
	public:
		int rno;
		string n;
		void input2(){
			cout << "Enter Student Rno: ";
			cin >> rno;
			cout << "Enter Student Name: ";
			cin >> n;
		}
		
		void display2(){
			cout << " Student Rno: " << rno << endl;
			cout << " Student Name: "<< n << endl;
		}
};


int main(){
	Department d;
	d.input();
	d.input1();
	d.input2();
	
	d.display();
	d.display1();
	d.display2();
	
	return 0;
}
