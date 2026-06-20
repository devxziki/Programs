#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
using namespace std;
int main(){
	ofstream outfile("File1.txt");
	if(!outfile){ 
		cout << "Error in Creating The File" << endl; 
		return 1;
	}

	string line;
	cin.ignore();
	cout << "Enter a Line to Write in File1.txt: ";
	getline(cin, line);
	outfile << line << endl;
	outfile.close();
	cout << "SucessFully Wrote Line in File1.txt" << endl;

	ifstream infile("File1.txt");
	if(!infile){ 
		cout << "Error in Reading The File" << endl; 
		return 1; 
	}

	char ch;
	cout << "UPPERCASE Output From File1.txt:" << endl;
	while(infile.get(ch)){
		cout << (char)toupper(ch);
	}
	cout << endl;
	infile.close();
	return 0;
}
