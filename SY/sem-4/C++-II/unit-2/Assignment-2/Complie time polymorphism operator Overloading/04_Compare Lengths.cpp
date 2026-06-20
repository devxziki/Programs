#include<iostream>
using namespace std;

class Length
{
	int value;			
	
	public:	
		Length(int v)
		{
			value=v;
		}
		
		Length operator >(Length &obj)
		{
			if(value<obj.value){
				return value;
			}
			else{
				return obj.value;
			}
		}
		void display()
		{
			cout<<"Value : "<<value<<endl;
		}
};

int main()
{
	int a,b;
	cout << "Enter Value of Length In Centimeter A: ";
	cin >> a;
	
	cout << "Enter Value of Length In Centimeter B: ";
	cin >> b;
	
	Length l1(a);
	Length l2(b);
	Length l3=l1>l2;
	
	l1.display();
	l2.display();
	l3.display();
	
	return 0;
}
