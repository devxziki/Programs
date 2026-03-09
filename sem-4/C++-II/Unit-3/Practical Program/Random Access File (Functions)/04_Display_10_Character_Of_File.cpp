#include<iostream>
#include<fstream>
using namespace std;
int main(){

	// Open data.txt
	ifstream infile("data.txt");
	if(!infile){
		cout << "Error in Reading The File" << endl; 
		return 1; 
	}
	// Move get pointer to end using seekg(0, ios::end)
	infile.seekg(0, ios::end);

	// Get file size using tellg()
	long fileSize = infile.tellg();
	cout << "Total File Size: " << fileSize << " Characters" << endl;

	// Move pointer 10 characters backward using seekg(-10, ios::end)
	infile.seekg(-10, ios::end);
	cout << "Position After seekg(-10, ios::end): " << infile.tellg() << endl;

	// Read and display last 10 characters
	char ch;
	cout << "Last 10 Characters of data.txt: [";
	while(infile.get(ch)) {
		cout << ch;
	}
	cout << "]" << endl;

	infile.close();
	return 0;
}
