#include<iostream>
using namespace std;

class Sub
{
	private:
		int value;
		
	public:
		Sub(int v=0)
		{
			value=v;	
		}
		
		Sub operator-(const Sub& s)
		{
			return Sub(this->value-s.value);	
		}		
		
		void display()
		{
			cout << "Sum:" << value << endl;
		}
};

int main()
{
	Sub s1(40);
	Sub s2(20);
	Sub s3=s1-s2;
	
	s1.display();
	s2.display();
	s3.display();
	
	return 0;
}
