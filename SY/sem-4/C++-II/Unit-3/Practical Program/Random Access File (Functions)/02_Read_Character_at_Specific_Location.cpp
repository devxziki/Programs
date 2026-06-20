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

	// Ask user to enter a position number
	long pos;
	cout << "Enter Position Number to Read Character: ";
	cin >> pos;

	// Move get pointer using seekg(position, ios::beg)
	infile.seekg(pos, ios::beg);

	// Read and display character at that position
	char ch;
	infile.get(ch);
	cout << "Character at Position " << pos << ": " << ch << endl;

	// Display current position using tellg()
	cout << "Current Position After Reading (tellg): " << infile.tellg() << endl;

	infile.close();
	return 0;
}
