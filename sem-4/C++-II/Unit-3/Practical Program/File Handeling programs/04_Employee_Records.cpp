#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	int id; string name, dept; float salary, highest=0;
	string hname="";
	ofstream outfile("emp.txt");
	if(!outfile){ 
		cout << "Error in Creating The File" << endl; 
		return 1; 
	}
	cout << "Enter Details of 5 Employees (ID Name Department Salary):" << endl;
	for(int i=0; i<5; i++){
		cout << "Employee " << i+1 << " - ID: "; cin >> id;
		cout << "Employee " << i+1 << " - Name: "; cin >> name;
		cout << "Employee " << i+1 << " - Department: "; cin >> dept;
		cout << "Employee " << i+1 << " - Salary: "; cin >> salary;
		outfile << id << " " << name << " " << dept << " " << salary << endl;
		if(salary>highest){
		 highest=salary; 
		 hname=name; 
		}
	}
	outfile.close();
	cout << "SucessFully Wrote Employee Records in emp.txt" << endl;
	cout << "Highest Salary: " << hname << " = " << highest << endl;
	return 0;
}
