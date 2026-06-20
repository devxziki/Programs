#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<set>
#include<sstream>
#include<cctype>
#include<climits>
using namespace std;

int main(){

	// ============================================================
	// Q1: Create numbers.txt, store 1-50, display even numbers
	// ============================================================
	{
		int i, num, count=0;
		ofstream outfile("numbers.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		for(i=1; i<=50; i++) outfile << i << endl;
		outfile.close();
		cout << "SucessFully Wrote 1 to 50 Numbers in numbers.txt" << endl;

		ifstream infile("numbers.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		cout << "Even Numbers From numbers.txt file" << endl;
		while(infile >> num){
			if(num%2==0){
				cout << num;
				count++;
				if(count%10==0) cout << "\n";
				else cout << " ";
			}
		}
		cout << endl << "Total Even Numbers Found: " << count << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q2: Store 10 floating-point numbers in float.txt, calculate average
	// ============================================================
	{
		float nums[10] = {3.14f,7.89f,12.5f,0.75f,22.3f,9.01f,15.6f,4.44f,18.9f,6.72f};
		float val, sum=0.0f;
		int count=0;

		ofstream outfile("float.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		for(int i=0; i<10; i++) outfile << nums[i] << endl;
		outfile.close();
		cout << "SucessFully Wrote 10 Float Numbers in float.txt" << endl;

		ifstream infile("float.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		cout << "Floating-Point Numbers From float.txt:" << endl;
		while(infile >> val){
			cout << val << " ";
			sum += val;
			count++;
		}
		cout << endl << "Average: " << sum/count << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q3: Write multiplication tables (1-10) into table.txt and display
	// ============================================================
	{
		ofstream outfile("table.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		for(int i=1; i<=10; i++){
			for(int j=1; j<=10; j++){
				outfile << i << " x " << j << " = " << i*j << endl;
			}
			outfile << endl;
		}
		outfile.close();
		cout << "SucessFully Wrote Multiplication Tables in table.txt" << endl;

		ifstream infile("table.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		string line;
		cout << "Multiplication Tables From table.txt:" << endl;
		while(getline(infile, line)) cout << line << "\n";
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q4: Input 5 names, store in names.txt, display in reverse order
	// ============================================================
	{
		string names[5];
		ofstream outfile("names.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		cout << "Enter 5 Names:" << endl;
		for(int i=0; i<5; i++){
			cout << "Name " << i+1 << ": ";
			cin >> names[i];
			outfile << names[i] << endl;
		}
		outfile.close();
		cout << "SucessFully Wrote 5 Names in names.txt" << endl;

		ifstream infile("names.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		vector<string> rnames;
		string name;
		while(infile >> name) rnames.push_back(name);
		infile.close();
		cout << "Names in Reverse Order:" << endl;
		for(int i=rnames.size()-1; i>=0; i--) cout << rnames[i] << endl;
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q5: Write ASCII values of A-Z into ascii.txt and display
	// ============================================================
	{
		ofstream outfile("ascii.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		for(char c='A'; c<='Z'; c++) outfile << c << " = " << (int)c << endl;
		outfile.close();
		cout << "SucessFully Wrote ASCII Values in ascii.txt" << endl;

		ifstream infile("ascii.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		string line;
		cout << "ASCII Values of A-Z From ascii.txt:" << endl;
		while(getline(infile, line)) cout << line << "\n";
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q6: Count total number of words in story.txt
	// ============================================================
	{
		ofstream outfile("story.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		outfile << "Once upon a time there was a brave knight who lived in a castle." << endl;
		outfile << "He fought dragons and saved the kingdom from evil forces every day." << endl;
		outfile.close();

		ifstream infile("story.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		string word;
		int count=0;
		while(infile >> word) count++;
		cout << "Total Number of Words in story.txt: " << count << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q7: Count number of lines in data.txt
	// ============================================================
	{
		ofstream outfile("data.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		outfile << "Line One" << endl;
		outfile << "Line Two" << endl;
		outfile << "Line Three" << endl;
		outfile << "Line Four" << endl;
		outfile << "Line Five" << endl;
		outfile.close();

		ifstream infile("data.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		string line;
		int count=0;
		while(getline(infile, line)) count++;
		cout << "Total Number of Lines in data.txt: " << count << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q8: Count vowels and consonants in text.txt
	// ============================================================
	{
		ofstream outfile("text.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		outfile << "The quick brown fox jumps over the lazy dog" << endl;
		outfile.close();

		ifstream infile("text.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		char ch;
		int vowels=0, consonants=0;
		string v="aeiouAEIOU";
		while(infile.get(ch)){
			if(isalpha(ch)){
				if(v.find(ch)!=string::npos) vowels++;
				else consonants++;
			}
		}
		cout << "Vowels in text.txt: " << vowels << endl;
		cout << "Consonants in text.txt: " << consonants << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q9: Search a word entered by user in article.txt
	// ============================================================
	{
		ofstream outfile("article.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		outfile << "Artificial intelligence is transforming the world rapidly." << endl;
		outfile << "Machine learning and deep learning are branches of intelligence." << endl;
		outfile.close();

		ifstream infile("article.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		string search, word;
		int count=0;
		cout << "Enter Word to Search in article.txt: ";
		cin >> search;
		while(infile >> word){
			if(word==search) count++;
		}
		if(count>0) cout << "Word \"" << search << "\" Found " << count << " Time(s) in article.txt" << endl;
		else cout << "Word \"" << search << "\" Not Found in article.txt" << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q10: Count how many times a specific character appears in file.txt
	// ============================================================
	{
		ofstream outfile("file.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		outfile << "programming is fun and learning programming makes you smarter" << endl;
		outfile.close();

		ifstream infile("file.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		char search, ch;
		int count=0;
		cout << "Enter Character to Count in file.txt: ";
		cin >> search;
		while(infile.get(ch)){
			if(ch==search) count++;
		}
		cout << "Character '" << search << "' Appears " << count << " Time(s) in file.txt" << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q11: Read from input.txt and convert all characters to lowercase
	// ============================================================
	{
		ofstream outfile("input.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		outfile << "Hello World THIS IS A TEST of LOWERCASE Conversion" << endl;
		outfile.close();

		ifstream infile("input.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		char ch;
		cout << "Lowercase Output From input.txt:" << endl;
		while(infile.get(ch)) cout << (char)tolower(ch);
		cout << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q12: Copy contents of fileA.txt into fileB.txt
	// ============================================================
	{
		ofstream outfile("fileA.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		outfile << "This is the content of File A." << endl;
		outfile << "It will be copied into File B." << endl;
		outfile.close();

		ifstream infile("fileA.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		ofstream outfileB("fileB.txt");
		if(!outfileB){ cout << "Error in Creating fileB.txt" << endl; return 1; }
		string line;
		while(getline(infile, line)) outfileB << line << endl;
		infile.close();
		outfileB.close();
		cout << "SucessFully Copied fileA.txt into fileB.txt" << endl;

		ifstream infileB("fileB.txt");
		if(!infileB){ cout << "Error in Reading The File" << endl; return 1; }
		cout << "Contents of fileB.txt:" << endl;
		while(getline(infileB, line)) cout << line << "\n";
		infileB.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q13: Remove all spaces from space.txt and write to nospace.txt
	// ============================================================
	{
		ofstream outfile("space.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		outfile << "Hello World This Is A Test" << endl;
		outfile.close();

		ifstream infile("space.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		ofstream outfileNS("nospace.txt");
		if(!outfileNS){ cout << "Error in Creating nospace.txt" << endl; return 1; }
		char ch;
		while(infile.get(ch)){
			if(ch!=' ') outfileNS << ch;
		}
		infile.close();
		outfileNS.close();
		cout << "SucessFully Removed Spaces and Wrote in nospace.txt" << endl;

		ifstream infileNS("nospace.txt");
		if(!infileNS){ cout << "Error in Reading The File" << endl; return 1; }
		string line;
		cout << "Contents of nospace.txt:" << endl;
		while(getline(infileNS, line)) cout << line << "\n";
		infileNS.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q14: Replace all occurrences of a word in data.txt with another word
	// ============================================================
	{
		ofstream outfile("data.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		outfile << "I love programming. Programming is fun. I enjoy programming daily." << endl;
		outfile.close();

		ifstream infile("data.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		string oldWord, newWord, word;
		cout << "Enter Word to Replace in data.txt: ";
		cin >> oldWord;
		cout << "Enter New Word: ";
		cin >> newWord;
		string content="";
		while(infile >> word){
			if(word==oldWord) content+=newWord+" ";
			else content+=word+" ";
		}
		infile.close();
		ofstream outfile2("data.txt");
		outfile2 << content << endl;
		outfile2.close();
		cout << "SucessFully Replaced \"" << oldWord << "\" with \"" << newWord << "\" in data.txt" << endl;

		ifstream infile2("data.txt");
		if(!infile2){ cout << "Error in Reading The File" << endl; return 1; }
		string line;
		cout << "Updated data.txt:" << endl;
		while(getline(infile2, line)) cout << line << "\n";
		infile2.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q15: Display longest word from paragraph.txt
	// ============================================================
	{
		ofstream outfile("paragraph.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		outfile << "Extraordinary accomplishments require determination perseverance and dedication." << endl;
		outfile.close();

		ifstream infile("paragraph.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		string word, longest="";
		while(infile >> word){
			if(word.length()>longest.length()) longest=word;
		}
		cout << "Longest Word in paragraph.txt: " << longest << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q16: Store 5 student details in marks.txt, display students scoring above 75
	// ============================================================
	{
		int roll; string name; float marks;
		ofstream outfile("marks.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		cout << "Enter Details of 5 Students (Roll Name Marks):" << endl;
		for(int i=0; i<5; i++){
			cout << "Student " << i+1 << " - Roll: "; cin >> roll;
			cout << "Student " << i+1 << " - Name: "; cin >> name;
			cout << "Student " << i+1 << " - Marks: "; cin >> marks;
			outfile << roll << " " << name << " " << marks << endl;
		}
		outfile.close();
		cout << "SucessFully Wrote Student Details in marks.txt" << endl;

		ifstream infile("marks.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		cout << "Students Scoring Above 75:" << endl;
		while(infile >> roll >> name >> marks){
			if(marks>75) cout << "Roll: " << roll << " Name: " << name << " Marks: " << marks << endl;
		}
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q17: Write employee records into emp.txt and display highest salary
	// ============================================================
	{
		int id; string name, dept; float salary, highest=0;
		string hname="";
		ofstream outfile("emp.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		cout << "Enter Details of 5 Employees (ID Name Department Salary):" << endl;
		for(int i=0; i<5; i++){
			cout << "Employee " << i+1 << " - ID: "; cin >> id;
			cout << "Employee " << i+1 << " - Name: "; cin >> name;
			cout << "Employee " << i+1 << " - Department: "; cin >> dept;
			cout << "Employee " << i+1 << " - Salary: "; cin >> salary;
			outfile << id << " " << name << " " << dept << " " << salary << endl;
			if(salary>highest){ highest=salary; hname=name; }
		}
		outfile.close();
		cout << "SucessFully Wrote Employee Records in emp.txt" << endl;
		cout << "Highest Salary: " << hname << " = " << highest << endl;
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q18: Update salary of an employee in emp.txt
	// ============================================================
	{
		string searchName, newSalStr;
		float newSal;
		cout << "Enter Employee Name to Update Salary in emp.txt: "; cin >> searchName;
		cout << "Enter New Salary: "; cin >> newSal;

		ifstream infile("emp.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		vector<string> lines;
		string line;
		bool found=false;
		while(getline(infile, line)){
			istringstream iss(line);
			int id; string name, dept; float salary;
			iss >> id >> name >> dept >> salary;
			if(name==searchName){ salary=newSal; found=true; }
			ostringstream oss;
			oss << id << " " << name << " " << dept << " " << salary;
			lines.push_back(oss.str());
		}
		infile.close();
		ofstream outfile("emp.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		for(int i=0; i<(int)lines.size(); i++) outfile << lines[i] << endl;
		outfile.close();
		if(found) cout << "SucessFully Updated Salary of " << searchName << " in emp.txt" << endl;
		else cout << "Employee \"" << searchName << "\" Not Found in emp.txt" << endl;
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q19: Delete a specific student record from student.txt
	// ============================================================
	{
		ofstream outfile("student.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		outfile << "101 Ali 88" << endl;
		outfile << "102 Sara 72" << endl;
		outfile << "103 Ahmed 90" << endl;
		outfile << "104 Zara 65" << endl;
		outfile << "105 Usman 78" << endl;
		outfile.close();

		string delName;
		cout << "Enter Student Name to Delete From student.txt: "; cin >> delName;

		ifstream infile("student.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		vector<string> lines;
		string line;
		bool found=false;
		while(getline(infile, line)){
			istringstream iss(line);
			int roll; string name; float marks;
			iss >> roll >> name >> marks;
			if(name==delName){ found=true; continue; }
			lines.push_back(line);
		}
		infile.close();
		ofstream outfile2("student.txt");
		for(int i=0; i<(int)lines.size(); i++) outfile2 << lines[i] << endl;
		outfile2.close();
		if(found) cout << "SucessFully Deleted Record of \"" << delName << "\" From student.txt" << endl;
		else cout << "Student \"" << delName << "\" Not Found in student.txt" << endl;
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q20: Append new records into existing record.txt
	// ============================================================
	{
		ofstream outfile("record.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		outfile << "201 John 80" << endl;
		outfile << "202 Emma 91" << endl;
		outfile.close();
		cout << "Existing record.txt Created with 2 Records" << endl;

		ofstream appendfile("record.txt", ios::app);
		if(!appendfile){ cout << "Error in Opening The File" << endl; return 1; }
		int roll; string name; float marks;
		cout << "Enter New Record to Append (Roll Name Marks): ";
		cin >> roll >> name >> marks;
		appendfile << roll << " " << name << " " << marks << endl;
		appendfile.close();
		cout << "SucessFully Appended New Record in record.txt" << endl;

		ifstream infile("record.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		string line;
		cout << "Updated record.txt:" << endl;
		while(getline(infile, line)) cout << line << "\n";
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q21: Store 20 integers in num.txt and display largest and smallest
	// ============================================================
	{
		int arr[20]={45,12,78,34,56,90,23,67,11,89,43,76,28,55,92,37,64,18,81,49};
		int num, largest=INT_MIN, smallest=INT_MAX;

		ofstream outfile("num.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		for(int i=0; i<20; i++) outfile << arr[i] << endl;
		outfile.close();
		cout << "SucessFully Wrote 20 Integers in num.txt" << endl;

		ifstream infile("num.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		while(infile >> num){
			if(num>largest) largest=num;
			if(num<smallest) smallest=num;
		}
		cout << "Largest Number in num.txt: " << largest << endl;
		cout << "Smallest Number in num.txt: " << smallest << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q22: Store marks of 10 students in marks.txt, calculate total and percentage
	// ============================================================
	{
		float marksArr[10]={78,85,90,62,74,88,95,70,83,67};
		float mark, total=0;
		int count=0;

		ofstream outfile("marks.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		for(int i=0; i<10; i++) outfile << marksArr[i] << endl;
		outfile.close();
		cout << "SucessFully Wrote 10 Student Marks in marks.txt" << endl;

		ifstream infile("marks.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		while(infile >> mark){ total+=mark; count++; }
		cout << "Total Marks: " << total << endl;
		cout << "Percentage: " << (total/(count*100))*100 << "%" << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q23: Separate even and odd numbers from numbers.txt into even.txt and odd.txt
	// ============================================================
	{
		ifstream infile("numbers.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		ofstream evenfile("even.txt");
		if(!evenfile){ cout << "Error in Creating even.txt" << endl; return 1; }
		ofstream oddfile("odd.txt");
		if(!oddfile){ cout << "Error in Creating odd.txt" << endl; return 1; }
		int num, ec=0, oc=0;
		while(infile >> num){
			if(num%2==0){ evenfile << num << endl; ec++; }
			else{ oddfile << num << endl; oc++; }
		}
		infile.close(); evenfile.close(); oddfile.close();
		cout << "SucessFully Separated Numbers: " << ec << " Even in even.txt, " << oc << " Odd in odd.txt" << endl;
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q24: Store 15 random numbers into random.txt and sort them
	// ============================================================
	{
		int randarr[15]={42,17,83,56,29,71,34,95,12,68,47,23,88,61,39};
		int num;
		vector<int> nums;

		ofstream outfile("random.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		for(int i=0; i<15; i++) outfile << randarr[i] << endl;
		outfile.close();
		cout << "SucessFully Wrote 15 Random Numbers in random.txt" << endl;

		ifstream infile("random.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		while(infile >> num) nums.push_back(num);
		infile.close();
		sort(nums.begin(), nums.end());
		cout << "Sorted Numbers From random.txt:" << endl;
		for(int i=0; i<(int)nums.size(); i++) cout << nums[i] << " ";
		cout << endl;
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q25: Read numbers from file and display sum of all prime numbers
	// ============================================================
	{
		ifstream infile("numbers.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		int num, sum=0;
		while(infile >> num){
			if(num<2) continue;
			bool isPrime=true;
			for(int i=2; i<=sqrt(num); i++){
				if(num%i==0){ isPrime=false; break; }
			}
			if(isPrime) sum+=num;
		}
		cout << "Sum of All Prime Numbers in numbers.txt: " << sum << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q26: Encrypt text in plain.txt using Caesar cipher, store in encrypt.txt
	// ============================================================
	{
		ofstream outfile("plain.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		outfile << "Hello World This Is A Secret Message" << endl;
		outfile.close();

		int shift=3;
		ifstream infile("plain.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		ofstream encfile("encrypt.txt");
		if(!encfile){ cout << "Error in Creating encrypt.txt" << endl; return 1; }
		char ch;
		while(infile.get(ch)){
			if(isalpha(ch)){
				char base=isupper(ch)?'A':'a';
				encfile << (char)((ch-base+shift)%26+base);
			} else encfile << ch;
		}
		infile.close(); encfile.close();
		cout << "SucessFully Encrypted plain.txt and Stored in encrypt.txt" << endl;

		ifstream infileE("encrypt.txt");
		if(!infileE){ cout << "Error in Reading The File" << endl; return 1; }
		string line;
		cout << "Encrypted Content From encrypt.txt:" << endl;
		while(getline(infileE, line)) cout << line << "\n";
		infileE.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q27: Merge contents of file1.txt and file2.txt into merge.txt
	// ============================================================
	{
		ofstream f1("file1.txt");
		if(!f1){ cout << "Error in Creating The File" << endl; return 1; }
		f1 << "Content From File One Line 1" << endl;
		f1 << "Content From File One Line 2" << endl;
		f1.close();

		ofstream f2("file2.txt");
		if(!f2){ cout << "Error in Creating The File" << endl; return 1; }
		f2 << "Content From File Two Line 1" << endl;
		f2 << "Content From File Two Line 2" << endl;
		f2.close();

		ofstream merge("merge.txt");
		if(!merge){ cout << "Error in Creating merge.txt" << endl; return 1; }
		ifstream in1("file1.txt"), in2("file2.txt");
		if(!in1||!in2){ cout << "Error in Reading The File" << endl; return 1; }
		string line;
		while(getline(in1, line)) merge << line << endl;
		while(getline(in2, line)) merge << line << endl;
		in1.close(); in2.close(); merge.close();
		cout << "SucessFully Merged file1.txt and file2.txt into merge.txt" << endl;

		ifstream inMerge("merge.txt");
		if(!inMerge){ cout << "Error in Reading The File" << endl; return 1; }
		cout << "Contents of merge.txt:" << endl;
		while(getline(inMerge, line)) cout << line << "\n";
		inMerge.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q28: Compare two files and check if they are identical
	// ============================================================
	{
		ifstream in1("file1.txt"), in2("file2.txt");
		if(!in1||!in2){ cout << "Error in Reading The File" << endl; return 1; }
		string s1="", s2="", line;
		while(getline(in1, line)) s1+=line;
		while(getline(in2, line)) s2+=line;
		in1.close(); in2.close();
		if(s1==s2) cout << "file1.txt and file2.txt are Identical" << endl;
		else cout << "file1.txt and file2.txt are Not Identical" << endl;
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q29: Display file size of data.txt
	// ============================================================
	{
		ifstream infile("data.txt", ios::binary|ios::ate);
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		long size=infile.tellg();
		cout << "File Size of data.txt: " << size << " Bytes" << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q30: Mini address book stored in address.txt with add, search, display
	// ============================================================
	{
		int choice;
		cout << "Mini Address Book (address.txt)" << endl;
		cout << "1. Add Contact  2. Search Contact  3. Display All" << endl;
		cout << "Enter Choice (1/2/3): "; cin >> choice;

		if(choice==1){
			string name, phone, email;
			cout << "Enter Name: "; cin >> name;
			cout << "Enter Phone: "; cin >> phone;
			cout << "Enter Email: "; cin >> email;
			ofstream outfile("address.txt", ios::app);
			if(!outfile){ cout << "Error in Opening The File" << endl; return 1; }
			outfile << name << " " << phone << " " << email << endl;
			outfile.close();
			cout << "SucessFully Added Contact in address.txt" << endl;
		}
		else if(choice==2){
			string searchName, name, phone, email;
			cout << "Enter Name to Search: "; cin >> searchName;
			ifstream infile("address.txt");
			if(!infile){ cout << "Error in Reading The File" << endl; }
			else{
				bool found=false;
				while(infile >> name >> phone >> email){
					if(name==searchName){
						cout << "Found: " << name << " | " << phone << " | " << email << endl;
						found=true;
					}
				}
				if(!found) cout << "Contact \"" << searchName << "\" Not Found" << endl;
				infile.close();
			}
		}
		else{
			ifstream infile("address.txt");
			if(!infile){ cout << "No Contacts Found in address.txt" << endl; }
			else{
				string line;
				cout << "All Contacts in address.txt:" << endl;
				while(getline(infile, line)) cout << line << "\n";
				infile.close();
			}
		}
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q31: Create salary.txt with 10 employee salaries, calculate total payroll
	// ============================================================
	{
		float salaries[10]={45000,52000,38000,61000,47000,55000,42000,68000,39000,51000};
		float sal, total=0;

		ofstream outfile("salary.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		for(int i=0; i<10; i++) outfile << salaries[i] << endl;
		outfile.close();
		cout << "SucessFully Wrote 10 Salaries in salary.txt" << endl;

		ifstream infile("salary.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		while(infile >> sal) total+=sal;
		cout << "Total Payroll From salary.txt: " << total << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q32: Input paragraph into para.txt, count digits, alphabets, special chars
	// ============================================================
	{
		ofstream outfile("para.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		outfile << "Hello World! My roll number is 123 and email is test@abc.com." << endl;
		outfile.close();

		ifstream infile("para.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		char ch;
		int digits=0, alphabets=0, special=0;
		while(infile.get(ch)){
			if(isdigit(ch)) digits++;
			else if(isalpha(ch)) alphabets++;
			else if(ch!='\n'&&ch!='\r') special++;
		}
		cout << "In para.txt - Alphabets: " << alphabets << " | Digits: " << digits << " | Special Characters: " << special << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q33: Read numbers from input.txt and display only those divisible by 5
	// ============================================================
	{
		ofstream outfile("input.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		for(int i=1; i<=30; i++) outfile << i << endl;
		outfile.close();

		ifstream infile("input.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		int num;
		cout << "Numbers Divisible by 5 From input.txt:" << endl;
		while(infile >> num){
			if(num%5==0) cout << num << " ";
		}
		cout << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q34: Create result.txt with Roll No, Name, 3 Subjects, calculate total and grade
	// ============================================================
	{
		int roll; string name; float s1,s2,s3,total;
		ofstream outfile("result.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		cout << "Enter Details of 3 Students (Roll Name Sub1 Sub2 Sub3):" << endl;
		for(int i=0; i<3; i++){
			cout << "Student " << i+1 << " - Roll: "; cin >> roll;
			cout << "Student " << i+1 << " - Name: "; cin >> name;
			cout << "Student " << i+1 << " - Subject1: "; cin >> s1;
			cout << "Student " << i+1 << " - Subject2: "; cin >> s2;
			cout << "Student " << i+1 << " - Subject3: "; cin >> s3;
			outfile << roll << " " << name << " " << s1 << " " << s2 << " " << s3 << endl;
		}
		outfile.close();
		cout << "SucessFully Wrote Student Results in result.txt" << endl;

		ifstream infile("result.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		cout << "\nRoll  Name       Total   Grade" << endl;
		cout << "------------------------------" << endl;
		while(infile >> roll >> name >> s1 >> s2 >> s3){
			total=s1+s2+s3;
			string grade;
			float avg=total/3;
			if(avg>=90) grade="A+";
			else if(avg>=80) grade="A";
			else if(avg>=70) grade="B";
			else if(avg>=60) grade="C";
			else grade="F";
			cout << roll << "     " << name << "       " << total << "     " << grade << endl;
		}
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q35: Append data to existing log.txt and display updated contents
	// ============================================================
	{
		ofstream outfile("log.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		outfile << "Log Entry 1: System Started" << endl;
		outfile << "Log Entry 2: User Logged In" << endl;
		outfile.close();
		cout << "Existing log.txt Created with 2 Entries" << endl;

		string entry;
		cin.ignore();
		cout << "Enter New Log Entry to Append: ";
		getline(cin, entry);
		ofstream appendfile("log.txt", ios::app);
		if(!appendfile){ cout << "Error in Opening The File" << endl; return 1; }
		appendfile << entry << endl;
		appendfile.close();
		cout << "SucessFully Appended New Entry in log.txt" << endl;

		ifstream infile("log.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		string line;
		cout << "Updated log.txt:" << endl;
		while(getline(infile, line)) cout << line << "\n";
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q36: Read sentence from sentence.txt and reverse each word
	// ============================================================
	{
		ofstream outfile("sentence.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		outfile << "Hello World How Are You" << endl;
		outfile.close();

		ifstream infile("sentence.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		string word;
		cout << "Reversed Words From sentence.txt:" << endl;
		while(infile >> word){
			reverse(word.begin(), word.end());
			cout << word << " ";
		}
		cout << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q37: Input product details into product.txt and calculate total stock value
	// ============================================================
	{
		int pid, qty; string pname; float price;
		ofstream outfile("product.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		cout << "Enter Details of 3 Products (ID Name Price Quantity):" << endl;
		for(int i=0; i<3; i++){
			cout << "Product " << i+1 << " - ID: "; cin >> pid;
			cout << "Product " << i+1 << " - Name: "; cin >> pname;
			cout << "Product " << i+1 << " - Price: "; cin >> price;
			cout << "Product " << i+1 << " - Quantity: "; cin >> qty;
			outfile << pid << " " << pname << " " << price << " " << qty << endl;
		}
		outfile.close();
		cout << "SucessFully Wrote Product Details in product.txt" << endl;

		ifstream infile("product.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		float totalValue=0;
		while(infile >> pid >> pname >> price >> qty) totalValue+=price*qty;
		cout << "Total Stock Value From product.txt: " << totalValue << endl;
		infile.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q38: Remove duplicate numbers from numbers.txt and store unique in unique.txt
	// ============================================================
	{
		ifstream infile("numbers.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		set<int> unique;
		int num;
		while(infile >> num) unique.insert(num);
		infile.close();

		ofstream outfile("unique.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		for(set<int>::iterator it=unique.begin(); it!=unique.end(); it++) outfile << *it << endl;
		outfile.close();
		cout << "SucessFully Removed Duplicates and Stored " << unique.size() << " Unique Numbers in unique.txt" << endl;
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q39: Split data.txt into uppercase.txt and lowercase.txt
	// ============================================================
	{
		ofstream outfile("data.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		outfile << "Hello World This Is A Mixed Case Text File" << endl;
		outfile.close();

		ifstream infile("data.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		ofstream upfile("uppercase.txt"), lofile("lowercase.txt");
		if(!upfile||!lofile){ cout << "Error in Creating The File" << endl; return 1; }
		char ch;
		while(infile.get(ch)){
			if(isupper(ch)) upfile << ch;
			else if(islower(ch)) lofile << ch;
		}
		infile.close(); upfile.close(); lofile.close();
		cout << "SucessFully Split data.txt into uppercase.txt and lowercase.txt" << endl;

		ifstream inUp("uppercase.txt"), inLo("lowercase.txt");
		string uline, lline;
		cout << "Uppercase Letters: "; getline(inUp, uline); cout << uline << endl;
		cout << "Lowercase Letters: "; getline(inLo, lline); cout << lline << endl;
		inUp.close(); inLo.close();
	}

	cout << "\n------------------------------------------------------------\n";

	// ============================================================
	// Q40: Create attendance.txt, store attendance, display absent students
	// ============================================================
	{
		int roll; string name, status;
		ofstream outfile("attendance.txt");
		if(!outfile){ cout << "Error in Creating The File" << endl; return 1; }
		cout << "Enter Attendance of 5 Students (Roll Name Status[Present/Absent]):" << endl;
		for(int i=0; i<5; i++){
			cout << "Student " << i+1 << " - Roll: "; cin >> roll;
			cout << "Student " << i+1 << " - Name: "; cin >> name;
			cout << "Student " << i+1 << " - Status: "; cin >> status;
			outfile << roll << " " << name << " " << status << endl;
		}
		outfile.close();
		cout << "SucessFully Wrote Attendance in attendance.txt" << endl;

		ifstream infile("attendance.txt");
		if(!infile){ cout << "Error in Reading The File" << endl; return 1; }
		cout << "Absent Students From attendance.txt:" << endl;
		bool any=false;
		while(infile >> roll >> name >> status){
			if(status=="Absent"||status=="absent"){
				cout << "Roll: " << roll << " Name: " << name << endl;
				any=true;
			}
		}
		if(!any) cout << "No Absent Students Found" << endl;
		infile.close();
	}

	cout << "\n============================================================" << endl;
	cout << "All 40 Programs Executed SucessFully!" << endl;
	cout << "============================================================" << endl;

	return 0;
}
