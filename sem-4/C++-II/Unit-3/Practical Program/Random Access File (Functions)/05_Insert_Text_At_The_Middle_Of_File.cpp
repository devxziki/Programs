#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){

	// Open data.txt in ios::in | ios::out
	fstream file("data.txt", ios::in | ios::out);
	if(!file){ 
		cout << "Error in Opening The File" << endl; 
		return 1; 
	}

	// Show original content
	string line, fullContent="";
	cout << "Original data.txt:" << endl;
	cout << "------------------" << endl;
	while(getline(file, line)){
		cout << line << "\n";
		fullContent += line + "\n";
	}
	cout << "------------------" << endl;

	// Move pointer to end and find file size using tellg()
	file.clear();
	file.seekg(0, ios::end);
	long fileSize = file.tellg();
	cout << "File Size: " << fileSize << " Characters" << endl;

	// Calculate middle position (size / 2)
	long midPos = fileSize / 2;
	cout << "Middle Position: " << midPos << endl;

	// Read full content into string
	file.seekg(0, ios::beg);
	string before = "", after = "";
	char ch;
	long i = 0;
	while(file.get(ch)){
		if(i < midPos){
			before += ch;
		}
		else{
			after += ch;
		}
		i++;
	}

	// Insert word at middle
	string insertWord = " [MIDDLE] ";
	string newContent = before + insertWord + after;

	// Write back full new content
	file.close();
	ofstream outfile("data.txt");
	if(!outfile){ 
		cout << "Error in Writing The File" << endl; 
		return 1; 
	}
	outfile << newContent;
	outfile.close();

	// Move put pointer to middle using seekp() - show position
	fstream verify("data.txt", ios::in | ios::out);
	verify.seekp(midPos, ios::beg);
	cout << "Put Pointer at Middle Position (seekp/tellp): " << verify.tellp() << endl;
	verify.close();

	// Display final file content
	ifstream infile("data.txt");
	if(!infile){ 
		cout << "Error in Reading The File" << endl; 
		return 1; 
	}
	cout << "\nFinal data.txt After Inserting [MIDDLE]:" << endl;
	cout << "------------------------------------------" << endl;
	while(getline(infile, line)){
		cout << line << "\n";
	}
	cout << "------------------------------------------" << endl;
	infile.close();

	return 0;
}
