#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int i, j;
	bool isPrime;

	ofstream outfile("prime.txt");
	if(!outfile){ 
		cout << "Error in Creating The File" << endl; 
		return 1; 
	}

	for(i=1; i<=100; i++){
		isPrime=true;
		for(j=1; j<i; j++){
			if(i%j==0){ 
				isPrime=false; 
				break; 
			}
		}
		if(isPrime){
			outfile << i << endl;
		}
	}
	outfile.close();
	cout << "SucessFully Wrote Prime Numbers in prime.txt" << endl;

	ifstream infile("prime.txt");
	if(!infile){ 
		cout << "Error in Reading The File" << endl; 
		return 1; 
	}
	int num, count=0;
	cout << "Prime Numbers From prime.txt:" << endl;
	while(infile >> num){
		cout << num;
		count++;
		if(count%10==0){
			cout << "\n";
		}
		else{
			cout << " ";
		}
	}
	cout << endl << "Total Prime Numbers Found: " << count << endl;
	infile.close();
	return 0;
}
