#include <iostream>
using namespace std;

class FactorialCalculator 
{
	public:
	    long long factorial(int n) 
		{
	        long long fact = 1;
	        for (int i = 1; i <= n; i++) 
			{
	            fact *= i;
	        }
	        return fact;
	    }
};

int main() 
{
    int num;
    FactorialCalculator calculator;

    cout << "Enter a number: ";
    cin >> num;
	
	cout << "Factorial of " << num << ": " << calculator.factorial(num) << endl;
    

    return 0;
}

