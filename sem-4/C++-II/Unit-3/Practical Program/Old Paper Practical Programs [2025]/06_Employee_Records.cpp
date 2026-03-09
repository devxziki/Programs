#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	int empno;
	string name, designation;
	float salary;

	ofstream outfile("Myfile.txt");
	if(!outfile){ 
		cout << "Error in Creating The File" << endl; 
		return 1; 
	}

	int n;
	cout << "Enter Number of Employees: ";
	cin >> n;

	for(int i=0; i<n; i++){
		cout << "\nEnter Details of Employee " << i+1 << ":" << endl;
		cout << "Emp No      : ";
		cin >> empno;
		cin.ignore();
		cout << "Name        : "; 
		getline(cin, name);
		cout << "Designation : "; 
		getline(cin, designation);
		cout << "Salary      : "; 
		cin >> salary;
		outfile << empno << "|" << name << "|" << designation << "|" << salary << endl;
	}
	outfile.close();
	cout << "\nSucessFully Wrote Employee Records in Myfile.txt" << endl;

	ifstream infile("Myfile.txt");
	if(!infile){ 
		cout << "Error in Reading The File" << endl; 
		return 1; 
	}

	cout << "\n--------------------------------------------" << endl;
	cout << "EmpNo  Name            Designation     Salary" << endl;
	cout << "--------------------------------------------" << endl;

	string line;
	while(getline(infile, line)){
		int pos1 = line.find('|');
		int pos2 = line.find('|', pos1+1);
		int pos3 = line.find('|', pos2+1);

		string semp  = line.substr(0, pos1);
		string sname = line.substr(pos1+1, pos2-pos1-1);
		string sdesig= line.substr(pos2+1, pos3-pos2-1);
		string ssal  = line.substr(pos3+1);

		cout.setf(ios::left, ios::adjustfield);
		cout.width(7);  cout << semp;
		cout.width(16); cout << sname;
		cout.width(16); cout << sdesig;
		cout.width(10); cout << ssal;
		cout << endl;
	}
	cout << "--------------------------------------------" << endl;
	infile.close();
	return 0;
}
