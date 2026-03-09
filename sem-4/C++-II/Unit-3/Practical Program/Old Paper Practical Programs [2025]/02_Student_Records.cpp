#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	int rno, pin;
	string name, address, city;

	ofstream outfile("stud.txt");
	if(!outfile){ 
		cout << "Error in Creating The File" << endl; 
		return 1; 
	}

	int n;
	cout << "Enter Number of Students: ";
	cin >> n;

	for(int i=0; i<n; i++){
		cout << "\nEnter Details of Student " << i+1 << ":" << endl;
		cout << "Roll No  : "; 
		cin >> rno;
		cin.ignore();
		cout << "Name     : "; 
		getline(cin, name);
		cout << "Address  : "; 
		getline(cin, address);
		cout << "City     : "; 
		getline(cin, city);
		cout << "Pin Code : "; 
		cin >> pin;
		outfile << rno << "|" << name << "|" << address << "|" << city << "|" << pin << endl;
	}
	outfile.close();
	cout << "\nSucessFully Wrote Student Records in stud.txt" << endl;

	ifstream infile("stud.txt");
	if(!infile){ 
		cout << "Error in Reading The File" << endl; 
		return 1; 
	}

	cout << "\n----------------------------------------------------------" << endl;
	cout << "RNo   Name            Address         City       PinCode" << endl;
	cout << "----------------------------------------------------------" << endl;

	string line;
	while(getline(infile, line)){
		// parse fields separated by |
		int pos1 = line.find('|');
		int pos2 = line.find('|', pos1+1);
		int pos3 = line.find('|', pos2+1);
		int pos4 = line.find('|', pos3+1);

		string srno    = line.substr(0, pos1);
		string sname   = line.substr(pos1+1, pos2-pos1-1);
		string saddr   = line.substr(pos2+1, pos3-pos2-1);
		string scity   = line.substr(pos3+1, pos4-pos3-1);
		string spin    = line.substr(pos4+1);

		// print formatted
		cout.setf(ios::left, ios::adjustfield);
		cout.width(6);  cout << srno;
		cout.width(16); cout << sname;
		cout.width(16); cout << saddr;
		cout.width(11); cout << scity;
		cout.width(7);  cout << spin;
		cout << endl;
	}
	cout << "----------------------------------------------------------" << endl;
	infile.close();
	return 0;
}
