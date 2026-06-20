#include <iostream>
using namespace std;

class BankAccount 
{
	private:
	    static float interestRate;  // Static data member for interest rate
	
	public:
	    // Static function to set the interest rate
	    static void setInterestRate(float rate) 
		{
	        interestRate=rate;
	    }
	
	    // Static function to display the interest rate
	    static void displayInterestRate() 
		{
	        cout << "Current interest rate: " << interestRate << "%" << endl;
	    }
};

// Initialize static data member
float BankAccount::interestRate=0.0;

int main() 
{
    // Set interest rate using static function
    BankAccount::setInterestRate(5.5);

    // Display interest rate
    BankAccount::displayInterestRate();

    return 0;
}
