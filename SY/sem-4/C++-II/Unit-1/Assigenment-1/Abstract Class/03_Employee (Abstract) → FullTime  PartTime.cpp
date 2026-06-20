#include<iostream>
using namespace std;

class Employee
{
    public:
        int salary=5000; // per day
        virtual void calculatesalary()=0;
};

class Fulltime : public Employee
{
    public:
        void calculatesalary()
        {
            cout << "Total Salary is : " << salary*30 << endl;
        }
};

class Parttime : public Employee
{
    public:
        void calculatesalary()
        {
            cout << "Total Salary is : " << salary/2*30 << endl;
        }
};

int main()
{
    cout << "Salary Of Full Time Employee :" << endl;
    Fulltime f;
    f.calculatesalary();
    cout << "Salary Of Part Time Employee :" << endl;
    Parttime p;
    p.calculatesalary();

    return 0;
}