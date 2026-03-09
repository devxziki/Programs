#include<iostream>
#include<fstream>
using namespace std;
int main(){

	// Open data.txt using ios::in | ios::out
	fstream file("data.txt", ios::in | ios::out);
	if(!file){ 
		cout << "Error in Opening The File" << endl; 
		return 1; 
	}

	// Ask user for position and new character
	long pos;
	char newChar;
	cout << "Enter Position to Replace Character: ";
	cin >> pos;
	cout << "Enter New Character: ";
	cin >> newChar;

	// Show old character first
	file.seekg(pos, ios::beg);
	char oldChar;
	file.get(oldChar);
	cout << "Old Character at Position " << pos << ": " << oldChar << endl;

	// Move put pointer using seekp(position, ios::beg)
	file.seekp(pos, ios::beg);

	// Replace the character at that location
	file.put(newChar);

	// Display position using tellp()
	cout << "Position After Replacement (tellp): " << file.tellp() << endl;
	cout << "SucessFully Replaced Character at Position " << pos << " with '" << newChar << "'" << endl;

	// Display updated file content
	file.seekg(0, ios::beg);
	string line;
	cout << "\nUpdated data.txt:" << endl;
	cout << "------------------" << endl;
	while(getline(file, line)){
		cout << line << "\n";
	}
	cout << "------------------" << endl;

	file.close();
	return 0;
}
