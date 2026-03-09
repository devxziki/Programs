#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ofstream outfile("file01.txt");
	if(!outfile){ 
		cout << "Error in Creating The File" << endl; 
		return 1; 
	}

	string text;
	cin.ignore();
	cout << "Enter Text to Write in file01.txt: ";
	getline(cin, text);
	outfile << text << endl;
	outfile.close();
	cout << "SucessFully Wrote Text in file01.txt" << endl;

	ifstream infile("file01.txt");
	if(!infile){ 
		cout << "Error in Reading The File" << endl; 
		return 1; 
	}

	char ch;
	int totalChars=0;
	cout << "Contents of file01.txt:" << endl;
	while(infile.get(ch)){
		cout << ch;
		if(ch!='\n'){
			totalChars++;
		}
	}
	cout << "Total Number of Characters in file01.txt: " << totalChars << endl;
	infile.close();
	return 0;
}
