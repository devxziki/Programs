#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){

	// Write multiple lines into data.txt
	ofstream outfile("data.txt");
	if(!outfile){ 
		cout << "Error in Creating The File" << endl; 
		return 1; 
	}
	outfile << "Hello World This Is Line One" << endl;
	outfile << "C++ File Handling Is Very Useful" << endl;
	outfile << "seekg and tellg are used for Random Access" << endl;
	outfile.close();
	cout << "SucessFully Wrote Multiple Lines in data.txt" << endl;

	// Open in read mode
	ifstream infile("data.txt");
	if(!infile){ 
		cout << "Error in Reading The File" << endl; 
		return 1; 
	}

	// Move get pointer to end using seekg(0, ios::end)
	infile.seekg(0, ios::end);

	// Display total characters using tellg()
	long totalChars = infile.tellg();
	cout << "Total Number of Characters in data.txt: " << totalChars << endl;

	infile.close();
	return 0;
}
