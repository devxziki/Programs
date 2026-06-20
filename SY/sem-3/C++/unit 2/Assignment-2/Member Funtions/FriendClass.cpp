#include <iostream>
using namespace std;

class A 
{
	private:
		 int secret = 42;
		 friend class B;
};
class B 
{
	public:
		 void showSecret(A obj) 
		 {
		 	cout << "Secret from class A is: " << obj.secret << endl;
		 }
};

int main() 
{
	 A a;
	 B b;
	 b.showSecret(a);
	 return 0;
}
