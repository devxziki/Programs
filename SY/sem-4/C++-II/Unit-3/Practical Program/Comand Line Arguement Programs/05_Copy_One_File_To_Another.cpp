#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char* argv[]){

	// Check if two file names are passed
	if(argc < 3){
		cout << "Error: Please Pass Two File Names as Arguments" << endl;
		cout << "Usage: ./c5 <sourcefile> <destinationfile>" << endl;
		return 1;
	}

	// Accept two file names from command line
	char* sourceFile = argv[1];
	char* destFile   = argv[2];

	// Open source file for reading
	ifstream infile(sourceFile);
	if(!infile){
		cout << "Error in Reading The File: " << sourceFile << endl;
		return 1;
	}

	// Open destination file for writing
	ofstream outfile(destFile);
	if(!outfile){
		cout << "Error in Creating The File: " << destFile << endl;
		return 1;
	}

	// Copy contents of first file into second file
	char ch;
	int count = 0;
	while(infile.get(ch)){
		outfile.put(ch);
		count++;
	}

	infile.close();
	outfile.close();

	// Display success message
	cout << "SucessFully Copied " << sourceFile << " into " << destFile << endl;
	cout << "Total Characters Copied: " << count << endl;

	// Display copied file content
	ifstream verify(destFile);
	if(!verify){
	 cout << "Error in Reading The File" << endl; 
	 return 1; 
	}
	string line;
	cout << "\nContents of " << destFile << ":" << endl;
	cout << "-----------------------------" << endl;
	while(getline(verify, line)) {
		cout << line << "\n";
	}
	cout << "-----------------------------" << endl;
	verify.close();

	return 0;
}
