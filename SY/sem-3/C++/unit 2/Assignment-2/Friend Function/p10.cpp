#include <iostream>
using namespace std;

class PrimeChecker 
{
	public:
	    // Function to check if a number is prime
	    bool isPrime(int n) 
		{
	        if (n <= 1) // 0, 1 and negatives are not prime
	            return false;
	
	        // check divisibility from 2 to sqrt(n)
	        for (int i = 2; i * i <= n; i++) 
			{
	            if (n % i == 0)
	                return false;
	        }
	        return true;
	    }
};

int main() 
{
    int num;
    PrimeChecker checker;

    cout << "Enter a number: ";
    cin >> num;

    if (checker.isPrime(num)) 
	{
        cout << num << " is a prime number." << endl;
    } 
	else 
	{
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
