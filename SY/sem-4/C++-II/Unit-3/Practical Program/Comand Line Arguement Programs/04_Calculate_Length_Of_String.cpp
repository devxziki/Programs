#include<iostream>
#include<string>
using namespace std;
int main(int argc, char* argv[]){

	// Check if a string argument is passed
	if(argc < 2){
		cout << "Error: Please Pass a Word or String as Argument" << endl;
		cout << "Usage: ./c4 <word>" << endl;
		return 1;
	}

	// Accept word or string from command line
	string word = argv[1];

	// Calculate total number of characters
	int length = 0;
	while(word[length] != '\0'){
		length++;
	}

	cout << "Input String        : " << word << endl;
	cout << "Length of String    : " << length << " Characters" << endl;

	return 0;
}
