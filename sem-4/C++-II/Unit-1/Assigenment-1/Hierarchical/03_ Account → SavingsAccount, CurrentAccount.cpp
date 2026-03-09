#include<iostream>
using namespace std;

class Account
{
    public:
        int balance;
        int accountholder;

        void ainput()
        {
            cout << "\nEnter Account Number : ";
            cin >> accountholder;
            cout << "Enter Account Balance : ";
            cin >> balance;
        }
        void aoutput()
        {
            cout << "\nAccount Number is : " << accountholder << endl;
            cout << "Account Balance is : " << balance << endl; 
        }
};

class Savings_acc : public Account
{
    public: 
        int d_amount,w_amount,t_amount;
        void saDeposit()
        {
            cout << "Enter Amount TO Deposit : ";
            cin >> d_amount;
        }
        void sawithdrwal()
        {
            cout << "Enter Amount TO Withdrwal : ";
            cin >> w_amount;
        }
        void method1()
        {
            cout << "Total Balance after WithDraw And Deposit in Saving account is : " << balance+(d_amount-w_amount) << endl;
        }
};

class Current_acc : public Account
{
    public: 
        int d1_amount,w1_amount;
        void caDeposit()
        {
            cout << "Enter Amount TO Deposit : ";
            cin >> d1_amount;
        }
        void cawithdrwal()
        {
            cout << "Enter Amount TO Deposit : ";
            cin >> w1_amount;
        }
        void method2()
        {
            cout << "Total Balance after WithDraw And Deposit in Current account is : " << balance+(d1_amount-w1_amount) << endl;
        }
};

int main()
{
    Savings_acc sa;
    Current_acc ca;

    cout << "Enter Amounts For Saving Accounts" << endl;

    sa.ainput();
    sa.saDeposit();
    sa.sawithdrwal();
    sa.aoutput();
    sa.method1();

    cout << "Enter Amounts For Current Accounts" << endl;

    ca.ainput();
    ca.caDeposit();
    ca.cawithdrwal();
    ca.aoutput();
    ca.method2();

    cin.get();
    cin.get();

    return 0;
}