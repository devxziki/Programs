#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ofstream outfile("article.txt");
	if(!outfile){ 
		cout << "Error in Creating The File" << endl; 
		return 1; 
	}
	outfile << "Artificial intelligence is transforming the world rapidly." << endl;
	outfile << "Machine learning and deep learning are branches of intelligence." << endl;
	outfile.close();

	ifstream infile("article.txt");
	if(!infile){ 
		cout << "Error in Reading The File" << endl; 
		return 1; 
	}
	string search, word;
	int count=0;
	cout << "Enter Word to Search in article.txt: ";
	cin >> search;
	while(infile >> word){
		if(word==search){
			count++;
		}
	}
	if(count>0){
		cout << "Word \"" << search << "\" Found " << count << " Time(s) in article.txt" << endl;
	}
	else {
		cout << "Word \"" << search << "\" Not Found in article.txt" << endl;
	}
	infile.close();
	return 0;
}
