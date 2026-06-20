#include<iostream>
using namespace std;

class Add
{
	private:
		int value;
		
	public:
		Add(int v=0)
		{
			value=v;	
		}
		
		Add operator+(const Add& s)
		{
			return Add(value+s.value);	
		}		
		
		void display()
		{
			cout << "Sum:" << value << endl;
		}
};

int main()
{
	Add s1(40);
	Add s2(20);
	Add s3=s1+s2;
	
	s1.display();
	s2.display();
	s3.display();
	
	return 0;
}
