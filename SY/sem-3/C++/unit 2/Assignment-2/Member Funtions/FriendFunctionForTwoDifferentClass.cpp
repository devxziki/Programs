#include <iostream>
using namespace std;


class ClassB;
class ClassA 
{
	 private:
	 int numA;
	
	 void input()
	 {
	 	cin >> numA;
	 }
	
	 friend int add(ClassA, ClassB);
};

class ClassB 
{
	 private:
	 	int numB;
		void input()
		{
			 cin>>numB;
		}

 friend int add(ClassA,ClassB);
};


int add(ClassA objectA, ClassB objectB)
{
     objectA.input();
	 objectB.input();
	 return (objectA.numA + objectB.numB);
}


int main() 
{
	ClassA objectA;
	ClassB objectB;
	cout << "Sum: " << add(objectA,objectB);
	return 0;
}
