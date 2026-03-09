#include<iostream>
using namespace std;

class Account 
{
    public:
        Account()
        {
            cout << "Account Number is : 2548" << endl;
        }
};

class Savingacc : public Account
{
    public:
        Savingacc()
        {
            cout << "Account Balance is : 50,000" << endl;
        }    
};  

int main()
{
    Savingacc s1;
    return 0;
}