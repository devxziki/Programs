#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ofstream outfile("table.txt");
	if(!outfile){ 
		cout << "Error in Creating The File" << endl; 
		return 1; 
	}
	for(int i=1; i<=10; i++){
		for(int j=1; j<=10; j++){
			outfile << i << " x " << j << " = " << i*j << endl;
		}
		outfile << endl;
	}
	outfile.close();
	cout << "SucessFully Wrote Multiplication Tables in table.txt" << endl;

	ifstream infile("table.txt");
	if(!infile){ 
		cout << "Error in Reading The File" << endl; 
		return 1; 
	}
	string line;
	cout << "Multiplication Tables From table.txt:" << endl;
	while(getline(infile, line)){
		cout << line << "\n";
	}
	infile.close();
	return 0;
}
