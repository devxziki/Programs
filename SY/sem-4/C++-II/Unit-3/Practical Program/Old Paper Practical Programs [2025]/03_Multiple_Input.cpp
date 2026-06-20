#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ofstream outfile("MyFile.txt");
	if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }

	int n;
	cout << "Enter Number of Lines to Write in MyFile.txt: ";
	cin >> n;
	cin.ignore();

	cout << "Enter " << n << " Lines:" << endl;
	for(int i=0; i<n; i++){
		string line;
		cout << "Line " << i+1 << ": ";
		getline(cin, line);
		outfile << line << endl;
	}
	outfile.close();
	cout << "SucessFully Wrote " << n << " Lines in MyFile.txt" << endl;

	ifstream infile("MyFile.txt");
	if(!infile){ 
		cout << "Error in Reading The File" << endl; 
		return 1; 
	}

	char ch;
	int totalChars=0;
	cout << "\nContents of MyFile.txt:" << endl;
	cout << "------------------------" << endl;
	while(infile.get(ch)){
		cout << ch;
		if(ch!='\n') totalChars++;
	}
	cout << "------------------------" << endl;
	cout << "Total Number of Characters in MyFile.txt: " << totalChars << endl;
	infile.close();
	return 0;
}
