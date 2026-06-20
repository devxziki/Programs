#include <iostream>
using namespace std;

class Employee 
{
    private:
        int id;
        double salary;

    public:
        Employee(int empId,double empSalary) : id(empId),salary(empSalary) {}

        bool operator!=(Employee &other) 
        {
            return id!=other.id;
        }

        void display()  
        {
            cout << "Employee ID: " << id << endl;
            cout << "Employee Salary: " << salary << endl;
        }
};

int main() {
    Employee emp1(101,50000);
    Employee emp2(102,60000);

    if (emp1!=emp2) 
    {
        cout << "emp1 and emp2 have different IDs." << endl;
    }
    else 
    {
        cout << "emp1 and emp2 have the same ID." << endl;
    }
    return 0;
}