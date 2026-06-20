#include<iostream>
using namespace std;

class Demo
{
    public:
        void demo()
        {
            cout << "Hello" << endl;
        }
        
        void demo(int a)
        {
        	cout << a << endl;
		}
};

int main()
{
	Demo d;
	d.demo();
	d.demo(10);
	
	return 0;
}
